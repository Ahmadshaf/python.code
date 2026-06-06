


 # include<stdio.h>
 # include<math.h>

// int main (){
// float x , 
// ustn ;
// printf("bir sayi giriniz :");
// scanf("%f",&x);
// ustn=(float)pow(x,3);
// printf("%.0f sayisinin 3 . kuveti : %.2f\n karekoku: %.2f\n", x , ustn,sqrt(x));
// }


// int main()
// {

// // ////burada dizilerle ort variayns , sdt , harmonik ort, geometrik ort , vs hesaplama odevdi 
// int i ;
// float vartop= 0, n ,t , ort , hort , gort , htop=0 , var , x[30], carpim=1 , toplam=0 , min , max  ;
// printf("birim sayissini giriniz :");
// scanf("%f", &n);

// for(i=0 ; i<n; i++){
//     printf("%d. eleman ", i+1);
//     scanf("%f", &x[i]);
//     toplam += x[i];
//     carpim*=x[i];
//     htop+=(1.0/x[i]);  // harmoink hesabi 
    

// } 
// ///ortlarin hesaplanmasi ///
// ort = (float )toplam/n;
// gort = pow(carpim, 1.0 /n);
// hort= n/htop;

// printf("\naritmetik ortalama : %.2f\n", ort );
// printf("geometrik ortalama : %.2f\n", gort );
// printf("harmoink  ortalama : %.2f\n", hort );


// for(i=0 ; i<n ; i++)
// vartop+= (x[i]-ort )*(x[i]-ort);
// var =vartop/n;

// printf("varyans : %.2f\n", var);
// printf("standartsapma : %.2f\n", sqrt(var));
// ///
// //min ve max bulma  
// min = x[0];
// max= x[0];
// for(i=1 ; i<n; i++){
// if ((x[i]<min)){
//   min = x[i];}
//   if ((x[i]>max)){
//     max = x[i];}


// }

// printf("maximum          %.2f\n", max);
// printf("minimum          %.2f\n", min);

// }
 


//my own codes 
// char item_name[50];
// int item_price, item_quantity ; 
// int item_total=0 ;
// printf("what do you want to buy ");
// scanf("%s",&item_name);

// printf("how much is it ?");
// scanf("%d",&item_price);

// printf("how many do you want  enter quatity");
// scanf("%d",&item_quantity);

// item_total= item_price*item_quantity;

// printf("you have bough %s %d",item_name,item_quantity);
// printf("the total cost is %d",item_total);
// int x =9 ;

// x=sqrt(x);
// x= pow(x,3);


// printf("%d",x);

//// converter cm to meter  
// int choice ;
// float number ;

// printf("which one are u using\n");
// printf("1 : cm to meter\n ");
// printf("2 :meter to cm:\n ");
// scanf("%d",&choice);
// printf("enter the number :");
// scanf(" %f", &number);
//  switch(choice)

//  {
// case 1 : 
// printf("%.2f cm = %.2f meter ", number  ,number/100 );
// break;

 

// case 2 :
// printf("%.f meter = %.f cm", number , number/100 );
// break; 

// default :
// printf("yanklis giris ");



// int day;
// int n ;
// printf("enrter a number  between 1 and 7 : ");
// scanf("%d",&n);
// switch(n)
// {
// case 1:
//     printf("it is monday");
//     break;


// case 2:
//     printf("it is tuesday");
//     break;


// case 3 :
//     printf("it is wednesday");
//     break;


// case 4 :
//     printf("IT IS THURSDAY");
//     break;


// case 5 :
//     printf("it is friday");
//     break;


// case 6 :
//     printf("it is saturday");
//     break;


// case 7 :
//     printf("it is sunday");
//     break;


// default:
//     printf("it is wrong bro ");  
//     break;

//}
//fonksiyonlar 92-30 =62   
///////////////////////////////////////////////////////////////////////////////////////////////


//fonksiyonlar
// int topla(int,int);
//  int main(){
//  printf("%d",topla(5,45));
// return 0;
//  }
//  int topla(int a ,int b )
//  {
//     return a+b;
// }



// int  us(int);

// int main(){
// int n ;
// printf("please enter a number : ");
// scanf("%d", &n);    
// printf(" karesi =  %d ",us(n));


// }
// int us(int n )
// {
// return n*n;

// }

// int ustalma(int,int);


// int main(){
// int n ;
// int ust ;
// printf("enter the number you wanna get the pow :");
// scanf("%d",&n);
// printf("enter the power ");
// scanf("%d", &ust);
// printf("%d", ustalma(n,ust));
// return 0 ;
// }

// int ustalma(int n,int ust)

// {
// return pow(n,ust);
// }
/////!!@####!@@@#$$$$// 
//fonksiyonlar 
// void showerror(int error){

// printf("show error %d",error );

// }


// int main(){
// int i ;
// printf("please enter a number which is not negative : ");
// scanf("%d",&i);

// if(i <0 ){
// showerror(404);

// }

// else{
// printf("congratulations");

// }

// }





//fonksiyonlar yazilan programim okunabillirligini artitir c programlama dilionde fonsoiyinlar olarak adlandirilan alt programlarin birlestire
// lmesi kavramina dayanir   onceki onceki orneklerde yapilacak islemelri surekli main  ana fonksiyonnunua icine yazilmstir ancak programlar buyudukce her islemi main 
// main  fonksiyonun icine yazmak uyhun dehildir  

// her fon bir adi ve fonsiyona hgelen degerleri var /
// donus tipi fonksiyonoadi(parametretipi paramete1adi  parametretipi parametre2adi...)
// { 

//     islemer :
//     retiurn  donus tipitanimlanmis birdegisken 
// }

// int tamsayi_topla( int x ,int y ); // protittipi fonksiyonun tanimi   // 
// int main (){
// int toplam ;
// toplam = tamsayi_topla(5,12);// fonksiyonu cagir 
// printf("5 ve 12 nin toplami %d dir\n ", toplam);// fonksiyonu cagir 
// return 0 ; // fonksiyonu cagir 
// }
// int tamsayi_topla(int x , int y )
// {
// int sonuc;
// sonuc= x+y;
// return sonuc;

// }
// void mesaj_yaz(void);  
// void main ()
// {
// mesaj_yaz();
// }
// void mesaj_yaz(void)
// {
//     printf("merhaba .........");
// }

//////////////////////////////////////////
// float topla(float x , float y );
// void ortalama ();
// float x ,y;
// void main()
// {

////////////////////////
///toplamak 

// int topla( int num1, int num2){
// return(num1+num2);
// }

// int main (){
//     int num1;
//     int num2;
// printf("please enter 2 number: \n");

// scanf("%d %d",&num1,&num2);

// printf("the sum  is =%d ", topla(num1,num2));

// }

// int faktoryel (int sayi ){


// int fact = 1 ; 
// for(; sayi > 0 ; sayi--){
// fact *= sayi;


// }

// return fact ; 


// }




// int main (){

// int n ; 
// printf(" faktoryelimi istediginiz sayisyi girniz ");
// scanf("%d", &n );
// printf(" faktoryel : %d ",faktoryel(n) );







// float topla(float x , float y);
// void ortalama(float x , float y);

// int main()
// {
// float x ,y ; 

// printf("toplami ve ortalamasi heasaplanacak iki sayi girinz : ");
// scanf(" %f%f", &x , &y);
// printf("toplamlari = %.0f" , topla(x,y));
// ortalama (x,y);
// }
// void ortalama(float x , float y )
// {


//     printf("\n ortalama  : %.2f\n ", topla(x,y)/2);
//  }
//   float topla(float x , float y)
// {
//     return (x+y);
//  }
////////////////////////////////////////////////////////////////////////

//  int topla(int a , int b )
//  {
// return a+b;
// }
// int carp(int a , int b )
// {
// return a*b;
// }

//     int  toplamlarinkaresi(int a , int b)
// {
// int ikisayinintoplami= topla(a,b);
// return carp (ikisayinintoplami,ikisayinintoplami);

// }
// void main()
// {
// int birincisayi, ikincisayi ;
// printf("lutfen iki sayigirinz\n ");
// printf("ilk sayiyi girinzi: ");
// scanf("%d",&birincisayi);
// printf("ikincisayi:");
// scanf("%d", &ikincisayi);

// printf("iki sayinin toplami            %d\n ", topla(birincisayi, ikincisayi)); 
// printf("iki sayinin carpimi            %d\n ", carp(birincisayi, ikincisayi)); 
// printf("iki sayinin toplamlarin karesi %d\n ", toplamlarinkaresi(birincisayi, ikincisayi)); 
//  }





 
//////kendi kodlarim derse ait degil altaki     /////
// int square(int num){;
// int result = num*num;
// return result;
// }

// int main ()
// {
//   int n,m,b ;  
// printf("lutfen n degerini  giriniz :");
// scanf("%d", &n);
// printf("lutfen m degerini  giriniz :");
// scanf("%d", &m);
// printf("lutfen b degerini  giriniz :");
// scanf("%d",&b);
// int x = square(n);
// int y = square(m);
// int z = square(b);


// printf("%d\n", x );
// printf("%d\n" ,y);
// printf("%d\n", z );




//}

// void  hatabas(int hata){   @@@@#####burada returnsuz kod void ile yazilan void = return yok  

// printf(" hata kodu %d",hata);
// }

// int main(){
// int sayi ;
// printf("lutfen bir sayi giriniz ama negatif olmasin "); 
// scanf("%d",&sayi);

// if (sayi < 0 ){


// hatabas(404);}
// else{
// printf("congruculation you made it  ");


// }


// }
// int fakt(int sayi){
// int fakt =1 ;
// for(; sayi >0 ; sayi--){
//     fakt = fakt *sayi;


// }
// return fakt;

// }

// int main(){
// int n ;
// printf("faktoryerlini almak istediginiz sayiyi giriniz : ");
// scanf("%d",&n);
// printf(" faktoryeli %d", fakt(n));


// }

//asal sayimi degil mi testi 
// int asalmi(int sayi ){

// int i ; 
// for(i =2 ; i < sayi ; i++){
// if (sayi %2== 0 )
// return 0;
// }
// return 1 ;
// }
// int main(){

// int n ; 
// printf("bir sayi giriniz :");
// scanf("%d", &n);
// if (asalmi(n)==0){
// printf("bu sayi asal degildir ");

// }

// else{
//  printf("bu sayi asal sayidir ");

// }




// }

//  // cift sayi mi tek sayi mi kontrolu 
// int cift_mi(int sayi){

// int i ;
// if(sayi %2 ==0){
// return 0 ; 

// }
// return 1 ;
// }

// int main (){
// int n ;
// printf("lutfen bir sayi giriniz : ");
// scanf("%d",&n );
// if(cift_mi(n)==0){

// printf("bu sayi cift tir ");
// }
// else {
//     printf("bu sayi tektir ");
// }

// return 0;
// }
/////////////////////////////////////////////////////////////////////////
// int topla (int a ,int b )
// {
//     return a+b ;
// }
// int cikart(int a , int b )
// {
// return a-b ;
// }
// int carp (int a , int b)
// {
// return a*b;
// }
// int toplamlarinkaresi(int a , int b )
// {
// int ikisayinintoplami = topla(a,b);
// return carp(ikisayinintoplami,ikisayinintoplami);
// }
// void main (){
// int  birincisayi;

// int ikincisayi ; 
// printf("lutfen birinic sayiyi giriniz: "); 
// scanf("%d", &birincisayi);
// printf(" lutfen ikinici sayiyi giriniz: ");
// scanf("%d", &ikincisayi);

// printf("  %d + %d  =  %d\n", birincisayi ,ikincisayi , topla(birincisayi,ikincisayi));
// printf(" %d - %d = %d\n ",birincisayi ,ikincisayi,cikart(birincisayi ,ikincisayi));
// printf(" %d * %d =%d\n ", birincisayi,ikincisayi, carp(birincisayi,ikincisayi));
// printf("(%d + %d)^2  =%d\n", birincisayi,ikincisayi, toplamlarinkaresi(birincisayi,ikincisayi));
// printf("your done bro ");
// }

///////////////////////////////////////////////////////////////////////
//int topla(int a , int b )
//  {
// return a+b;
// }
// int carp(int a , int b )
// {
// return a*b;
// }

//     int  toplamlarinkaresi(int a , int b)
// {
// int ikisayinintoplami= topla(a,b);
// return carp (ikisayinintoplami,ikisayinintoplami);


// }
// void main()
// {
// int birincisayi, ikincisayi ;
// printf("lutfen iki sayigirinz\n ");
// printf("ilk sayiyi girinzi: ");
// scanf("%d",&birincisayi);
// printf("ikincisayi:");
// scanf("%d", &ikincisayi);

// printf("iki sayinin toplami            %d\n ", topla(birincisayi, ikincisayi)); 
// printf("iki sayinin carpimi            %d\n ", carp(birincisayi, ikincisayi)); 
// printf("iki sayinin toplamlarin karesi %d\n ", toplamlarinkaresi(birincisayi, ikincisayi)); 

////////////////////////////////////////////////////////////////////////
// int topla(int a ,int b)
// {
//     return(a+b);
// }

// int carpim(int a ,int b)
// {
//     return(a*b);
// }

// int toplamlarinkaresi(int a , int b )
// {
  
  
//     int ikisayinintoplami = topla(a,b);


// return carpim(ikisayinintoplami,ikisayinintoplami);


// }

// void  main(){



//     int birincisayi , ikincisayi ; 
//      printf("lutfrn iki sayi giriniz\n  ");
//      printf("birinci sayiyi giriniz ");
//      scanf("%d", &birincisayi);
//      printf("ikinci sayi  giriniz ");
//      scanf("%d", &ikincisayi);

//    printf(" iki sayinin toplami   %d\n", topla(birincisayi,ikincisayi));
//    printf("iki sayininn carpimi    %d\n", carpim(birincisayi,ikincisayi));
//    printf("ikisayinin toplamlarinin  karesi   %d",toplamlarinkaresi(birincisayi,ikincisayi));

/////////////////////////////////////////////////////////////////////////////////////////////////////////////
// }
//okul kodu asagisi 
//faktoryel hesaplama ///
//long uzun tam sayi

// long faktoryel(long sayi);


// void main()
// {
// int i ;
// printf("faktoryeli alicacak sayiyi giriniz : ");
// scanf("%d", &i);
// printf("%d!= %ld\n", i , faktoryel(i));
// }
// long faktoryel(long sayi)
// {

//     if (sayi<=1)
//     return 1 ;
//     else 
//     return (sayi*faktoryel(sayi -1 ));
// }

//////////////////////////////////////////////////////*****///////////// */
// int factoriel( int n );
// int main(){
// int n ; 
// int fact =1  ; 
// printf("enter a number to find the factoriel of that : ");
// scanf("%d", &n);
// fact = factoriel(n);
// printf("fact %d\n ",fact );
 
// }
// int factoriel(int n)
// {
//   if(n==1)
//   return 1 ;  
// return n*factoriel(n-1);
// } 




////////////////////////////////////////////////////////////////////////////
//  int dondur (int x );
//  void main ()
// {
//  int i ;
//   for (i=5 ; i>0 ; i--){
// printf("%d\n",dondur(i));

// }

// }
// int dondur(int x )
// {
// if (x==1)
//  return 1 ;
// else
//  return (x+dondur(x-1));
// }


//sinavda fonklar + dizi +loops 
//////////////////////////////////////////////////////////////////////////////////////////////////***//// */

// long fakt(long sayi);
// void main()
// {
// int i;
// printf("faktoryelini alacaginiz sayiyi giriniz : ");
// scanf("%d", &i);
// printf("%d!= %ld\n", i ,fakt(i));
// }
// long fakt(long sayi )
// {
// if (sayi<=1)
// return 1 ;
// else 
// return  
// (sayi *fakt(sayi-1));



// }/////////////////usteki fonk sorusunun aynisi 
// long faktoryel (long sayi );
// int main(){
// int i;
// printf("lutfen sayi gir : ");
// scanf("%d", &i);
// printf("%d!= %ld", i , faktoryel(i));
// }


// long faktoryel (long sayi )

// {
// if(sayi==1)
// return 1;

// else 
// return sayi*faktoryel(sayi-1);
// }

////////////////////////////////////////////////
// long faktoryel(long sayi);

// void main()
// {
//     int i ; 
//     printf("faktoryelini almak istediginiz sayiyi giriniz : ");
//     scanf("%d",&i);
//     printf("%d!= %ld\n ", i , faktoryel(i));
// }
// long faktoryel(long sayi)
// {
// if (sayi==1){
// return 1;


// }
// else 
// return sayi*faktoryel(sayi-1);

// }
////////////////////////////////////////////////////////////////////////////////
int topla(int x );
void main(){
int i ;
for(i=5 ; i>0; i--){
printf("%d\n", topla(i));
}
}
int topla(int x )
{
if (x==1)
return 1 ; 
else 
return  x+topla(x-1);
}




//////////////////////////////////////////////////////////////////////

// int dondur (int x );
// void main ()
// {
//  int i ;
//   for (i=5 ; i>0 ; i--){
// printf("%d\n",dondur(i));

// }

// }
// int dondur(int x )
// {
// if (x==1)
//  return 1 ;
// else
//  return (x+dondur(x-1));
// }



//////////#####/////////////1//////////////////2/////////////////4/////////////////2////////////3/

//diziler
//  #include <stdio.h>
//  int  main(){
// int i ;
// int numbers[] = {1,2,3,11,124};
// for(i=0;i<5;i++)
// printf("%d",numbers[i]);
// }


// int not[4]= {1,2,3};
// char name[3][15]= {"ali","fahim","kojh"};
// int i ;
// printf("NAME\t    NOT\n    ");
// for(i=0 ; i<3; i++){
// printf("%s\t    %d\n",name[i],not[i]);
 
//  }
//////////////////////alttakiler sinava yonelik calisma finalaler 
// int  i ;
// int weight[6]={45,67,44,97};
// char name [5][22]={"mehmet","ahmet","epl","efekan"};
// float height[6]={1.75,1.85,1.50,1.75};
// printf("NAME\t  WEIGHT\t HEIGHT\n");
// for(i = 0 ; i < 4; i++){
// printf("%s\t     %d\t        %f\n ", name[i],  weight[i], height[i]);
// }
// int max = weight[1];
// int min = weight[1];
// for(i=1 ; i<4; i++){

// if(max <weight[i]){
// max=weight[i];

// }

// if (min>weight[i]){

//     min=weight[i];
// }
// }
//     printf("the max value is %d\n",max);
// printf("the min value is %d\n",min);



// float maxi = height[1]; 
// float mini = height[1];

// for(i=0;i<4;i++){
// if(maxi<height[i]){
// maxi = height[i];

// }
// if(mini>height[i])
// mini = height[i];

// }
// printf(" max height is %f\n",maxi);
// printf(" min height is %f\n" ,mini );


///#//klavyeden kendin gir adi ve baskaseyleri 
//klavyeden girildi name ve kilo dizi yardimi ile 

// int i ; 
// char name [2][20];
// int  kilo [2];
// for(i=0 ; i<2 ; i++){
// printf("%d.kisi icin giriniz : ",i+1);
// scanf("%s",&name[i]);
 
// }
// for(i=0; i < 2 ; i++){
// printf("%d. kisinin kilosunu giriniz : = ", i+1);
// scanf("%d",&kilo[i]);
// }
// printf("\nNAME\tWEIGHT\n");
// for(i=0;i<2;i++){
// printf("%s\t%d\n",name[i],kilo[i]);
// }


//buyukten kucuge dogru siralamak  klavyeden girilen sayilari 


// int  x[5], i , j ,gec;
// printf("please enter 5 number\n ");
// for(i=0 ; i<5;i++){
// printf("%d.eleman = ", i+1);
// scanf("%d",&x[i]);
// }
// for(i=0;i<4;i++){
//  for(j=i+1;j<5;j++){
//   if (x[j]<x[i]){

//     gec= x[i];
//     x[i]= x[j];
//     x[j]= gec; 


//   }
//  }

// }

// for(i=0 ; i<5 ; i++)
// printf("%d\n", x[i]);

// }

// int  x[5], i , j ,gec;
// printf("5 tane sayi gir : \n");
// for(i=0 ; i<5 ; i++){
// printf("%d  sayi : " ,i+1);
// scanf("%d" ,&x[i]);
// }
// for(i=0 ; i<4 ; i++){
//     for( j=i+1 ; j<5 ; j++){
//     if (x[j] <x[i]){
//       gec = x[i];
//       x[i]=x[j];
//       x[j]= gec; 

//     }
//     }
// }
// for(i =0 ; i<5 ; i++)
// printf("%d\t" , x[i]);




//////////////////////////////////////////////////////////////////////
//toplam 2*i^2-1 hesaplama  
// int i , a[10] ;
// int toplam = 0;
// for(i=0 ; i<10 ; i++){
// a[i]= 2*i*i-1;
// toplam = toplam +a[i];
// } 
// printf(" sonuc = %d\n ", toplam);
// }

///////////////////////////////////////////////////////////////////////
//ort sd ve variance hesaplama  ayniis en uste var 1 ile 10 satir arasinda //////aynisi asagidada var 
// int i ;
// float vartop= 0, n ,t , ort , hort , gort , htop=0 , var , x[30], carpim=1 , toplam=0 , min , max  ;
// printf("birim sayissini giriniz :");
//   scanf("%f", &n);

// for(i=0 ; i<n; i++){
//     printf("%d. eleman ", i+1);
//     scanf("%f", &x[i]);
//     toplam += x[i];
//     carpim*=x[i];
//     htop+=(1.0/x[i]);  // harmoink hesabi 
    

// } 
// ///ortlarin hesaplanmasi ///
// ort = (float )toplam/n;
// gort = pow(carpim, 1.0 /n);
// hort= n/htop;

// printf("\naritmetik ortalama : %.2f\n", ort );
// printf("geometrik ortalama : %.2f\n", gort );
// printf("harmoink  ortalama : %.2f\n", hort );


// for(i=0 ; i<n ; i++)
// vartop+= (x[i]-ort )*(x[i]-ort);
// var =vartop/n;

// printf("varyans : %.2f\n", var);
// printf("standartsapma : %.2f\n", sqrt(var));
// ///
/////////////////////////////////////////////////////////////////////////////////////
//  int i
//  float vartop= 0, n ,t , ort , hort , gort , htop=0 , var , x[30], carpim=1 , toplam=0 , min , max  ;
// printf(" birimsayisini giriniz : ");
// scanf("%f",&n);

// for(i=0 ; i <n ; i++){
// printf("%d.eleman : ", i+1);
// scanf("%f", &x[i]);
// toplam = toplam + x[i];
// carpim= carpim *x[i];
// htop=htop+(1.0/x[i]);  //harmonik ort hesabi 
// }
// ort =(float)toplam/n;
// gort = pow(carpim, 1.0 /n);
// hort= n/htop;
// printf("\naritmetik ortalama  %.2f\n", ort);
// printf("geometrik ortalma  %.2f\n", gort);
// printf("harmonik ortalama  %.2f\n",hort);
// for(i=0 ; i<n; i++){

// vartop=vartop+(x[i]-ort)*(x[i]-ort);
// var=vartop/n;
//  printf("varyans : %.2f\n", var);
//  printf("standartsapma : %.2f\n", sqrt(var));

// }
// }





//lecturelerden fonksiyonlar dersi bastan
// int kare (int y );
// int main(){
// int x ; 
// for(x=1 ; x<=10; x++){
// printf("%d\t", kare(x));

// }
// }
// int kare (int y )
// {
// return y*y;
// }



//maks sayiyi bulmak 

// int maksimum(int x ,int y , int z );
// int main(){
// int a, b , c ; 
// printf("lutfen 3 sayi giriniz : ");
// scanf("%d %d %d", &a,&b,&c);
// printf("maksimum deger = %d\n", maksimum(a,b,c));
// }

// int maksimum(int x ,int y ,int z )
// {
// int maks= x;
// if(y >maks)
// maks = y;
// if (z>maks)
// maks= z ; 
// return maks;
// }
// int topla (int a , int b );
// void main(){
// int m,n ;
// printf("lutfen iki sayi girinz ");
// scanf("%d %d", &m , &n);
// printf("%d ile %d toplmi = %d ", m , n , topla(m,n));
// }
// int topla (int a ,int b)
// {
// return a+b
// ;
// }
// void main(){
// int paramiktari, yil , faizorani;
// int islemler ;
// printf("lutfen yatirmak istediginiz paramiktarini giriniz : ");
// scanf("%d", &paramiktari);
// printf("lutfen faiz orani kactir yaziniz  : ");
// scanf("%d", &faizorani);
// printf("lutfen kac yil paraniz kalacak yaziniz ");
// scanf("%d", &yil);
// islemler = paramiktari*faizorani*yil/100+paramiktari;
// printf(" %d   yil sonra banka hesabinizda  $%d   para olacak ",yil , islemler )  ;

// }
