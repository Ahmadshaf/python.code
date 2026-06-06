# app.py - İşkembe Görseli Güncellenmiş Sürüm
import os
from flask import Flask, render_template_string, request, jsonify
import stripe

app = Flask(__name__)
# app.py içindeki o satırı bulun ve bu şekilde güncelleyin:
import os

# Doğrudan anahtarı yazmak yerine çevresel değişkenden okumasını sağlıyoruz
stripe.api_key = "GECICI_ANAHTAR"

# Kendi Stripe test anahtarını buraya yapıştırmayı unutma dostum!

MENU = {
    # --- Çorbalar ---
    "c1": {"ad": "Ezogelin Çorbası", "fiyat": 80, "img": "https://images.unsplash.com/photo-1603105037880-880cd4edfb0d?w=200", "detay": "Bol naneli ve limonlu geleneksel lezzet."},
    "c2": {"ad": "Sarımsaklı İşkembe Çorbası", "fiyat": 110, "img": "https://image.cnnturk.com/i/cnnturk/75/1200x675/657b8fc3ae364f0af1952493.jpg", "detay": "Özel sirke ve sarımsak sosu eşliğinde."},
    "c3": {"ad": "Kelle Paça Çorbası", "fiyat": 130, "img": "https://images.unsplash.com/photo-1603105037880-880cd4edfb0d?w=200", "detay": "Terbiyeli, bol etli şifa kaynağı."},
    
    # --- Ana Yemekler ---
    "a1": {"ad": "Yaprak Et Döner", "fiyat": 340, "img": "https://ortaktarifcom2.s3.eu-central-1.amazonaws.com/recipes/bjIx6kpcAeEfCWD7vwgHb8xdhny018TRXFkZNPs3.jpg", "detay": "Marine edilmiş %100 dana eti, pilav üstü."},
    "a2": {"ad": "Meşhur İskender Kebap", "fiyat": 380, "img": "https://images.unsplash.com/photo-1565557623262-b51c2513a641?w=150", "detay": "Tereyağlı pide üzerinde bol soslu ve yoğurtlu."},
    "a3": {"ad": "Mersin Tantunisi", "fiyat": 210, "img": "https://images.unsplash.com/photo-1565557623262-b51c2513a641?w=150", "detay": "Lavaş ekmeğinde, nefis baharatlı satır eti."},
    "a4": {"ad": "Bol Malzemeli Kumpir", "fiyat": 180, "img": "https://images.unsplash.com/photo-1565557623262-b51c2513a641?w=150", "detay": "Kaşar ve tereyağı ile ezilmiş, zengin mezeli."},
    "a5": {"ad": "Zırh Adana Kebap", "fiyat": 320, "img": "https://images.unsplash.com/photo-1565557623262-b51c2513a641?w=150", "detay": "Közlenmiş biber ve domates ile, lavaş üstünde."},
    
    # --- İçecekler ---
    "i1": {"ad": "Köpüklü Yayık Ayran", "fiyat": 35, "img": "https://cf.kizlarsoruyor.com/q12446906/8b35aa9d-b348-4c91-92c6-d800fbcdeb35.jpg", "detay": "Buz gibi ev yapımı lezzet."},
    "i2": {"ad": "Soda (Maden Suyu)", "fiyat": 25, "img": "https://avoya.com.tr/wp-content/uploads/2025/07/Maden-Suyu-ve-Sodanin-Farki-Ne.jpg", "detay": "Sade ve ferahlatıcı maden suyu."},
    "i3": {"ad": "Coca-Cola", "fiyat": 45, "img": "https://images.unsplash.com/photo-1622483767028-3f66f32aef97?w=150", "detay": "Buz gibi orijinal kola lezzeti."},
    "i4": {"ad": "Pepsi", "fiyat": 45, "img": "https://images.migrosone.com/sanalmarket/product/08011700/8011700_2-64c708-1650x1650.jpg", "detay": "Serinletici harika lezzet."},
    "i5": {"ad": "Şalgam Suyu", "fiyat": 35, "img": "https://www.konyaliferdiusta.com/image/cache/catalog/icecekler/3854427-550x550w.jpeg", "detay": "Adana usulü, isteğe göre acılı veya acısız."}
}

HTML_TEMPLATE = """
<!DOCTYPE html>
<html lang="tr">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>LEZZET DURAGI | Ödeme Entegreli QR Menü</title>
    <link href="https://fonts.googleapis.com/css2?family=Poppins:wght@300;400;600&display=swap" rel="stylesheet">
    <link rel="stylesheet" href="https://cdnjs.cloudflare.com/ajax/libs/font-awesome/6.4.0/css/all.min.css">
    <style>
        * { margin: 0; padding: 0; box-sizing: border-box; }
        
        body { 
            font-family: 'Poppins', sans-serif; 
            background-color: #0d0d0d;
            color: #e0e0e0; 
            display: flex; 
            justify-content: center; 
            padding: 20px; 
            padding-bottom: 100px;
        }
        
        .container { 
            width: 100%; 
            max-width: 480px; 
            border-radius: 25px; 
            padding: 25px; 
            box-shadow: 0 15px 40px rgba(0,0,0,0.8); 
            border: 1px solid rgba(255, 183, 3, 0.2);
            
            /* Arka plan görseli kutunun içine gömüldü */
            background-image: linear-gradient(rgba(20, 20, 20, 0.88), rgba(20, 20, 20, 0.88)), url('https://images.unsplash.com/photo-1555396273-367ea4eb4db5?w=1200');
            background-attachment: local; /* Aşağı kaydırdıkça kutuyla birlikte hareket eder */
            background-position: center;
            background-repeat: no-repeat;
            background-size: cover;
        }
        
        h1 { text-align: center; font-size: 26px; color: #ffb703; text-transform: uppercase; letter-spacing: 2px; margin-bottom: 5px; text-shadow: 0 2px 5px rgba(0,0,0,0.9); }
        .subtitle { text-align: center; font-size: 11px; color: #bbb; margin-bottom: 25px; text-shadow: 0 1px 3px rgba(0,0,0,0.8); }
        
        .kategori { font-size: 16px; color: #ffb703; margin: 25px 0 10px 0; border-bottom: 2px solid #ffb703; padding-bottom: 5px; font-weight: 600; text-transform: uppercase; text-shadow: 0 2px 4px rgba(0,0,0,0.8); }
        
        /* Yemek kartları şeffaflaştırıldı, arkadaki resim tatlıca görünüyor */
        .yemek { background: rgba(33, 33, 33, 0.85); padding: 15px; margin: 15px 0; border-radius: 15px; display: flex; flex-direction: column; border: 1px solid rgba(255,255,255,0.05); transition: transform 0.2s; backdrop-filter: blur(4px); }
        .yemek:hover { transform: translateY(-2px); border-color: rgba(255, 183, 3, 0.3); }
        
        .yemek-ust { display: flex; align-items: center; width: 100%; margin-bottom: 12px; }
        .yemek-img { width: 75px; height: 75px; border-radius: 12px; object-fit: cover; margin-right: 15px; box-shadow: 0 4px 10px rgba(0,0,0,0.5); }
        .yemek-detay { flex-grow: 1; }
        .ad { font-weight: 600; color: #fff; font-size: 15px; text-shadow: 0 1px 2px rgba(0,0,0,0.8); }
        .detay { font-size: 11px; color: #ccc; font-weight: 300; line-height: 1.4; }
        
        .fiyat-alanı { display: flex; align-items: center; justify-content: space-between; border-top: 1px dashed rgba(255,255,255,0.1); padding-top: 10px; flex-wrap: wrap; gap: 10px; }
        .fiyat { color: #ffb703; font-weight: 600; font-size: 16px; text-shadow: 0 1px 2px rgba(0,0,0,0.8); }
        
        .adet-kontrol { display: flex; align-items: center; background: #111; border: 1px solid #444; border-radius: 20px; padding: 2px 8px; }
        .adet-btn { background: none; border: none; color: #ffb703; font-size: 16px; cursor: pointer; padding: 2px 6px; font-weight: bold; }
        .adet-sayi { color: #fff; font-size: 13px; font-weight: 600; min-width: 20px; text-align: center; }
        
        .satinal-btn { background: #ffb703; color: #000; text-decoration: none; font-size: 12px; font-weight: 600; padding: 8px 16px; border-radius: 20px; display: flex; align-items: center; gap: 6px; border: none; cursor: pointer; transition: 0.2s; }
        .satinal-btn:hover { background: #ffa200; transform: scale(1.03); }
        
        .form-grup { margin-bottom: 15px; }
        .form-grup label { display: block; font-size: 11px; color: #ffb703; margin-bottom: 4px; font-weight: 600; }
        .form-grup input { width: 100%; padding: 10px; background: rgba(17, 17, 17, 0.85); border: 1px solid #444; color: #fff; border-radius: 8px; font-size: 13px; }
        
        .harita-bolumu { margin-top: 30px; background: rgba(33, 33, 33, 0.85); padding: 15px; border-radius: 15px; border: 1px solid rgba(255,255,255,0.05); text-align: center; }
        .harita-iframe { width: 100%; height: 200px; border-radius: 10px; border: none; margin-top: 10px; }

        /* YEŞİL TOPLU ÖDEME BUTONU */
        .toplu-odeme-bar {
            position: fixed; bottom: 0; left: 0; right: 0; background: rgba(20, 20, 20, 0.95); 
            box-shadow: 0 -5px 25px rgba(0,0,0,0.9); padding: 15px; display: none; 
            justify-content: center; z-index: 999; border-top: 2px solid #2ecc71;
            backdrop-filter: blur(10px);
        }
        .toplu-odeme-btn {
            background: #2ecc71; color: #fff; width: 100%; max-width: 450px; 
            border: none; padding: 14px; border-radius: 15px; font-size: 15px; 
            font-weight: 600; cursor: pointer; display: flex; justify-content: center; 
            align-items: center; gap: 10px; transition: 0.2s; box-shadow: 0 4px 15px rgba(46,204,113,0.4);
        }
        .toplu-odeme-btn:hover { background: #27ae60; transform: scale(1.02); }
    </style>
</head>
<body>
    <div class="container">
        <h1>LEZZET DURAGI</h1>
        <div class="subtitle">Adet Seçimli Güvenli QR Menü</div>
        
        <div class="form-grup">
            <label><i class="fa-solid fa-chair"></i> MASA NUMARASI:</label>
            <input type="number" id="masaNo" value="1" min="1" max="50">
        </div>

        <div class="kategori">🥣 Çorbalar</div>
        {% for id, urun in menu.items() if id.startswith('c') %}
        <div class="yemek" data-fiyat="{{ urun.fiyat }}">
            <div class="yemek-ust">
                <img class="yemek-img" src="{{ urun.img }}" alt="{{ urun.ad }}">
                <div class="yemek-detay">
                    <div class="ad">{{ urun.ad }}</div>
                    <div class="detay">{{ urun.detay }}</div>
                </div>
            </div>
            <div class="fiyat-alanı">
                <div class="fiyat">{{ urun.fiyat }} TL</div>
                <div class="adet-kontrol">
                    <button class="adet-btn" onclick="adetDegistir('{{ id }}', -1)">-</button>
                    <span class="adet-sayi" id="adet-{{ id }}">0</span>
                    <button class="adet-btn" onclick="adetDegistir('{{ id }}', 1)">+</button>
                </div>
                <button class="satinal-btn" onclick="tekliOdemeBaslat('{{ id }}')">
                    <i class="fa-solid fa-credit-card"></i> ÖDE
                </button>
            </div>
        </div>
        {% endfor %}

        <div class="kategori">🍔 Ana Yemekler</div>
        {% for id, urun in menu.items() if id.startswith('a') %}
        <div class="yemek" data-fiyat="{{ urun.fiyat }}">
            <div class="yemek-ust">
                <img class="yemek-img" src="{{ urun.img }}" alt="{{ urun.ad }}">
                <div class="yemek-detay">
                    <div class="ad">{{ urun.ad }}</div>
                    <div class="detay">{{ urun.detay }}</div>
                </div>
            </div>
            <div class="fiyat-alanı">
                <div class="fiyat">{{ urun.fiyat }} TL</div>
                <div class="adet-kontrol">
                    <button class="adet-btn" onclick="adetDegistir('{{ id }}', -1)">-</button>
                    <span class="adet-sayi" id="adet-{{ id }}">0</span>
                    <button class="adet-btn" onclick="adetDegistir('{{ id }}', 1)">+</button>
                </div>
                <button class="satinal-btn" onclick="tekliOdemeBaslat('{{ id }}')">
                    <i class="fa-solid fa-credit-card"></i> ÖDE
                </button>
            </div>
        </div>
        {% endfor %}

        <div class="kategori">🥤 İçecekler</div>
        {% for id, urun in menu.items() if id.startswith('i') %}
        <div class="yemek" data-fiyat="{{ urun.fiyat }}">
            <div class="yemek-ust">
                <img class="yemek-img" src="{{ urun.img }}" alt="{{ urun.ad }}">
                <div class="yemek-detay">
                    <div class="ad">{{ urun.ad }}</div>
                    <div class="detay">{{ urun.detay }}</div>
                </div>
            </div>
            <div class="fiyat-alanı">
                <div class="fiyat">{{ urun.fiyat }} TL</div>
                <div class="adet-kontrol">
                    <button class="adet-btn" onclick="adetDegistir('{{ id }}', -1)">-</button>
                    <span class="adet-sayi" id="adet-{{ id }}">0</span>
                    <button class="adet-btn" onclick="adetDegistir('{{ id }}', 1)">+</button>
                </div>
                <button class="satinal-btn" onclick="tekliOdemeBaslat('{{ id }}')">
                    <i class="fa-solid fa-credit-card"></i> ÖDE
                </button>
            </div>
        </div>
        {% endfor %}

        <div class="harita-bolumu">
            <div class="ad" style="color: #ffb703;"><i class="fa-solid fa-map-location-dot"></i> Konumumuz</div>
            <div class="detay" style="margin-bottom: 8px;">Uluönder, Eskişehir</div>
            <iframe class="harita-iframe" src="https://www.google.com/maps/embed?pb=!1m18!1m12!1m3!1d49015.6565147551!2d30.50505!3d39.78!2m3!1f0!2f0!3f0!3m2!1i1024!2i768!4f13.1!3m3!1m2!1s0x14cc3e0000000001%3A0x1234567890abcdef!2sEskisehir!5e0!3m2!1str!2str!4v1654321098765!5m2!1str!2str" allowfullscreen="" loading="lazy"></iframe>
        </div>
    </div>

    <div class="toplu-odeme-bar" id="topluBar">
        <button class="toplu-odeme-btn" onclick="topluOdemeBaslat()">
            <i class="fa-solid fa-basket-shopping"></i> <span id="topluBtnMetin">Seçilenleri Birlikte Öde (0 TL)</span>
        </button>
    </div>

    <script>
        let sepet = {};
        const menuFiyatlar = {
            {% for id, urun in menu.items() %} "{{ id }}": {{ urun.fiyat }}, {% endfor %}
        };

        function adetDegistir(urunId, miktar) {
            let element = document.getElementById('adet-' + urunId);
            let mevcutAdet = parseInt(element.innerText);
            let yeniAdet = mevcutAdet + miktar;
            
            if (yeniAdet >= 0 && yeniAdet <= 10) {
                element.innerText = yeniAdet;
                if (yeniAdet === 0) {
                    delete sepet[urunId];
                } else {
                    sepet[urunId] = yeniAdet;
                }
                barGuncelle();
            }
        }

        function barGuncelle() {
            let toplamTutar = 0;
            let toplamUrunSayisi = 0;

            for (let urunId in sepet) {
                toplamTutar += sepet[urunId] * menuFiyatlar[urunId];
                toplamUrunSayisi += sepet[urunId];
            }

            const bar = document.getElementById('topluBar');
            const btnMetin = document.getElementById('topluBtnMetin');

            if (toplamUrunSayisi > 0) {
                bar.style.display = 'flex';
                btnMetin.innerText = `Seçilenleri Birlikte Öde (${toplamTutar} TL)`;
            } else {
                bar.style.display = 'none';
            }
        }

        function tekliOdemeBaslat(urunId) {
            const masa = document.getElementById('masaNo').value;
            let adet = parseInt(document.getElementById('adet-' + urunId).innerText);
            
            if (adet === 0) adet = 1;

            let tekliSepet = {};
            tekliSepet[urunId] = adet;
            
            istekGonder(tekliSepet, masa);
        }

        function topluOdemeBaslat() {
            const masa = document.getElementById('masaNo').value;
            if (Object.keys(sepet).length === 0) {
                alert("Lütfen önce menüden ürün seçin.");
                return;
            }
            istekGonder(sepet, masa);
        }

        function istekGonder(gonderilecekSepet, masaNo) {
            fetch('/create-checkout-session', {
                method: 'POST',
                headers: { 'Content-Type': 'application/json' },
                body: JSON.stringify({ sepet: gonderilecekSepet, masa_no: masaNo })
            })
            .then(res => res.json())
            .then(data => {
                if (data.url) {
                    window.location.href = data.url;
                } else {
                    alert('Ödeme başlatılamadı, lütfen geçerli bir API anahtarı bağlayın.');
                }
            })
            .catch(err => alert('Hata oluştu! Sunucu bağlantısını kontrol edin.'));
        }
    </script>
</body>
</html>
"""

@app.route('/')
def index():
    return render_template_string(HTML_TEMPLATE, menu=MENU)

@app.route('/create-checkout-session', methods=['POST'])
def create_checkout_session():
    data = request.json
    sepet = data.get('sepet', {})
    masa_no = data.get('masa_no', '1')
    
    if not sepet:
        return jsonify({"error": "Sepet boş"}), 400

    line_items = []
    for item_id, adet in sepet.items():
        urun = MENU.get(item_id)
        if urun:
            line_items.append({
                'price_data': {
                    'currency': 'try',
                    'product_data': {
                        'name': urun['ad'],
                        'description': f"Masa {masa_no} Siparişi"
                    },
                    'unit_amount': urun['fiyat'] * 100,
                },
                'quantity': int(adet),
            })

    try:
        session = stripe.checkout.Session.create(
            payment_method_types=['card'],
            line_items=line_items,
            mode='payment',
            success_url=request.host_url + 'payment-success',
            cancel_url=request.host_url,
        )
        return jsonify({"url": session.url})
    except Exception as e:
        return jsonify({"error": str(e)}), 500

@app.route('/payment-success')
def success():
    return "<h1>Ödeme Başarılı!</h1><p>Siparişleriniz mutfağa toplu olarak iletildi. Afiyet olsun!</p><a href='/'>Menüye Dön</a>"

if __name__ == '__main__':
    app.run(debug=True, port=5000)