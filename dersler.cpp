#include <stdio.h>
#include <cstdlib>
 //main() 
//1{ 

/* int i ;
i =20 ;
printf("i nin degeri = %d \n",i); 









int a=15 ; 
int b=16 ; 
int d=19 ;  
int t,f,c;

t=a+b+d;
f=d-b-a;
c=a*b*d;
printf("the sum  = %d \n",t);
printf("the substraction= %d \n", f);
printf("the multiplication = %d \n",c);
}
*/

/* #include <iostream> 



{

std::cout <<"i love driving car \n ";
std::cout << "it is amazing  \n ";

return 0;


// this is the second way to write comment in c++ //


// with \n you can get to the second line your code will be showing the next line 
}
*/
#include <stdio.h>

main()
{
/*
int x = 9 ;
int m=10;
int sum= m+x;
printf("sum = %d\n",sum);

return 0 ;

*/


// double  number  including decimal 

//double price= 43.58;
//printf("the price = %f\n",price);

//for double and float we use %f 
// for integers we use %d   
// we use %c for char values like one character only 
// we use %s for string after char and variable name we put this parantese [] then we can add " our string " 
//char marks= 'C';
//char grade= 'A';
//printf("marks = %c\n",marks);
//printf("grade %c\n ", grade);


/*
char name [] = "ahmad";
char lastname [] = "seddiqi";
char  birthday []= "2006 ";
printf(" hello your name please   : %s\n" , name);

printf(" what is your last name :  %s \n ",lastname );

printf(" your date of birth :  %s \n ", birthday);


//int student = 20;
//student = student + 1 ; 
//printf("new student %d\n", student);
// #### we can do it like that but easier way is down below 

int student = 20;
double students = 20 ;

//student+=1;    //we have added  one more by this  
// student++;  // the second way to do it  
//student--;   // we  can get the - 1 version 
// also we can make amath operation like */  

//student*=2;
//student/=2;

//int students=20 ;
//students/=3;

//printf("new students %f \n ", students );
//printf("new student %d\n" , students );


//return 0 ; 


//  int age; 
// int grade;




// printf("how old are  u :  " );
// scanf("%d",&age );
// printf("you are %d\n ", age  );

// printf (  "which class are u in  : " );
// scanf("%d",&grade );
// printf("you are in %d\n ", grade );


//printf("please enter ")



/*int number; 
printf("bir sayi girirniz : ");
scanf("%d",&number );
printf("girilen sayi : %d\n ", number);
*/



//int sum;
//int mod;
/*
printf("bir sayi gir :");
scanf("%d",&sum);
mod=sum%10;
printf(" %d mod 10 = %d\n",sum,mod);
*/  












// int x;
// int mod; 
// int y;

// printf("bir sayi gir :  ");
// scanf("%d", &x);
// printf("mod kacini almka istiyorusun : ");
// scanf("%d",&y);
// mod=x-((x/y)*y);
// printf("%d sayinin mod u = %d\n", x, mod   );














/*
float  sayi_1, sayi_2, toplam , fark , carpim , bolum ;
printf("tamsayi gir : ");
scanf("%f",&sayi_1);
printf("ikinci tam sayiyi gir :");
scanf("%f",&sayi_2);

toplam=sayi_1+sayi_2;
fark=sayi_1-sayi_2;
carpim=sayi_1*sayi_2;
bolum=sayi_1/sayi_2;
printf("%.f ile %.f nin toplami  = %.f\n",sayi_1,sayi_2,toplam);
printf("%.f ile %.f nin farki = %.f\n",sayi_1,sayi_2,fark);
printf("%.f ile %.f nin carpimi  = %.f\n",sayi_1,sayi_2,carpim);
printf("%.f ile %.f nin  bolumu= %.f\n", sayi_1,sayi_2,bolum);


////%f    if we put 2f it will show us the number with two decimal like this 2.00
*/

// float m ;
// scanf("%f",&m);
// printf("%.1f  sayiniz" ,m);


/*  ## my own code not class 


int p ;
int l;
int dikdortgen_alan;

printf("dikdortgenin uzun kenarini giriniz : ");
scanf("%d" , &p);
printf("dikdortgenin kisa kenarini giriniz : ");
scanf("%d", &l);
dikdortgen_alan=p*l;
if(p>l)
    printf("dikdortgenin alani %d\n", dikdortgen_alan);
    
else
    printf(" uzun kenarin uzunlugu daha buyuk olacak");
    exit(1);
printf("dikdortgenin alani %d\n", dikdortgen_alan);

*/







// int  sayi ;
// for (sayi=1; sayi <=10 ; sayi++ )
// printf("%d\n" ,sayi);  /// if we put a slash n it will print the number in a column
// printf("\n");


/*
int a ;
int  b=0;
int c;
for (a= 1; a<=10 ; a=a+1  ){
printf("enter the number : ");
    scanf("%d" , &c );

b=b+c;
}
printf("b = %d\n" ,b );
/*
 

int sayi;
float ort , g_sayi , toplam = 0 ;
for (sayi = 1 ;sayi <=10 ; sayi=sayi+1){
   scanf("%f" , &g_sayi);
   toplam=toplam+g_sayi;
} 
ort = toplam/10;
 printf("ortalma = %2f\n" ,ort);
*/


// int  i , n , m ;

// printf(" lutfen kac sayi gireceksininz belirtiniz := " );
// scanf("%d",&n);
// for(i=1;i<=n;i++){
// printf("%d.sayi" ,i);
// scanf("%d",&m);
// }
// printf("%d sayi girildi" , n );








// int i ;
// int toplam= 0;
// int n ;
// printf("enter the num   ");
// scanf("%d", &n );

// for( i = 1 ; i<=n ; i++ )
//    toplam=toplam+i*i;
// printf(" sonuc = %d\n" , toplam);


// new formul  i *i +i +5 /n




/*

int n ;
int i ;
float  toplam= 0;
float son ;
printf("enter the num   ");
scanf("%d", &n );

for( i = 1 ; i<=n ; i++){
    toplam=toplam+i*i+5+i;

}
son= toplam/n;    
printf(" sonuc =%f" , son);


*/



//home work sayilarin karesini alan ugulamam  biz giricez klavyeden

// int a ;
// int b ; 
// printf("almak istedigin sayinin karesini al : ");
// scanf("%d", &a);


// b= a*a;

// printf("%d", b ); 






// int i = 1 ;
// while ( i <=10){
//    printf("%d", i );
//    i++;
// }
   






/*

int i = 1 ;
float  n ;
float toplam  = 0 ;
float ortalama ;
float say;
printf("kac sayinin ortalamasi nin istiyorsaniz girin  : ");
scanf("%f\n", &n );
while ( i <=n){
    printf("%d , sayiyi giriniz ", i );
    scanf("%f",&say);
    toplam= toplam+say;
    i++;

    

ortalama = toplam/n;
printf("girdiginiz  %.0f adet sayinin ortalamasi %.2f bulunmustur. \n" , n ,ortalama);
}

*/
    



/*
int i = 1 ;
float  n ;
float toplam  = 0 ;
float ortalama ;
float say;
printf("kac sayinin ortalamasi nin istiyorsaniz girin  : ");
scanf("%f\n", &n );
for( i ==1;  i <=n ; i ++){
    printf("%d , sayiyi giriniz ", i );
    scanf("%f",&say);
    toplam= toplam+say;
ortalama= toplam/n;    
printf("girdiginiz  %.0f adet sayinin ortalamasi %.2f bulunmustur. \n" , n ,ortalama);

}
*/



/*
int i = 1 ;
float n ;
float toplam=0 ;
float ortalama; 
float say ;
printf("kac sayinin ortalamasinin alacaksaniz onu giriniz : ");
scanf("%f", &n);
for(i=1 ; i <=n ; i++){
    printf("%d sayiyi giriniz : ",i);
    scanf("%f", &say);
    toplam = toplam +say;
ortalama = toplam/n; }
printf(" girdiginiz %.0f adet sayinin ortalamasi %.2f bulunmustur\n", n ,ortalama); 

*/


// int i=1 ;
// int k=2;
// while(i<=10){
  
 
//   printf(" %d islemin sonucu %d\n",i,k );
//   i++;
//   k=k*2;

//   }





// do while konusu ///
// birden 10 a kadar sayilari yan yan a yazdir an program 

/*

int i =1 ;
do {
    printf("%d", i);
    i= i+1; 

}while (i!=11);
printf("\n");

*/

// 0 ile 10 arasi karesini ve kupu alma sorusu 

/*
int  i =0;

do {   
    printf("%d\t%d\t%d\n", i,i*i , i*i*i );
    
    i++;
    
}while(i!=11);
*/




 
  /////###$$$$ sinavda kesin cikar buna benzer calsi 
// int i=1 , j ;
// do{
//     j=2;

//     while(j<=6){             

//          printf("A=%d\t,  B= %d\n", j, i );
//          j=j+2 ;
//     }
//     i= i+1;    
// }while(i<=3);



 
//####if else konusu ###
/* 
float ort;
  printf("ortalama gir :");
scanf("%f", &ort);
if(ort>90)
  printf("AA aldiniz\n ");
else if (ort>80 )  
  printf("BB aldiniz\n");
else if (ort>70 ) 
  printf("BC aldiniz\n");
else if (ort >60 )
  printf("CC aldiniz\n");
else 
  printf("FF aldiniz\n ");         
*/


/*
int i ;
int m;
printf("birinci sayiyi giriniz = ");
scanf("%d", &i);
printf("ikinci sayiyi giriniz = ");
scanf("%d", &m);
if (i > m )
printf("%d birinci sayi  buyuk.%d ikinci sayi kucuktur\n ", i , m );
else if(m>i) 
printf(" %d birinci  sayi buyuk  .  %d ikinci sayi kucuk \n  ", m , i ); 
  
else
printf("girilen degerlerin  ikisi %d olmak uzere esittir\n  "  , m );

*/



//sayilarin 1 ile 10 arasinda olmasi gerek yoksa tekrar tekrar sayi girmemize ister 

// int sayi ;
// int deger =0;
// while(deger == 0){
//    printf("1-10 arasi bir sayi giriniz  -->");
//    scanf("%d", &sayi);
//    if((sayi<1)||(sayi>10 ) ){
//     printf("sayi 1-10 araligi disindadir . lutfen yeniden giriniz \n");
//     deger =0;


//    }
//    else 
//     deger = 1;


// }
// printf("sayi %d olarak girilimistir\n" ,sayi);


// int k=0;
// int sayi ;
// while(k==0){

// printf("bir sayi giriniz 1-10 arasi ");

// scanf("%d", &sayi);

//   if((sayi>0)&&(sayi<11)){
//     printf("sayi %d  oalrak  girilmistir", sayi);
//     k=1;




// }
// else 
//  printf(" lutfen 1 ile 10 arasi sayi griisniz ");
// k=1;

// }




// int sayi ;
// do{

//   printf("1 ile 100 arasi sayi giriniz : ");

//   scanf("%d", &sayi);

// }while((sayi <1)|| (sayi>100));

// printf("sayi %d  olarak girilmistir ", sayi );






//hata var bak 

 



 

//  int sayi ;
//  while( !(sayi==0)){

//     printf("bir sayi girniz , cikis icin 0 basiniz  : ");
//     scanf("%d" ,&sayi);
//     printf("sayi %d olarak girlmistir \n" , sayi);


// }




// odev girilen n adet tam sayidan pozitif olanalrin sayisinin ve ortalamasini negatif olanlarin sayisinin ve
//ortalamasini kac adet siifir girildigini ve butun sayilarin ortalamasini bulan program 
//float pozitif_ort;
//int toplam = 0;
//int sayi_adedi=0 ;
//int n ;

 
// printf("enter how many numbers you wanna enter : ");
// scanf("%d",&n);
// int sayi; 
// while (sayi_adedi<n){
//    printf("sayi giriniz ");
//    scanf("%d" , &sayi);
//     toplam= toplam + sayi;
//     sayi_adedi++;

 
// }
// printf("girilen sayilari toplami %d\n", toplam);
// printf("ortalama:  %.2f ", (float)toplam/n);




//girilen 3 basamakli sayinin degerlerinin toplamini yazdiran program 
//ex :124 = 1+2+4 = 7 ###   onemli  ###


// int a , birler ,onlar , yuzler , say, kontrol=1;
// while (kontrol==1 ){
//   printf("3 basamkali bir sayi giriniz :");
//   scanf("%d" ,&say );
//    if ((say>99) && (say<1000))
//     kontrol =0;
//   else
//   printf("yanlis girildi tekrar giriniz\n");

  
  
// }
  
// a=say;
// birler=say%10;   modunu aldik 
// say= say-birler;
// say = say/10;    
// onlar = say%10;
// say = say-onlar ;
// yuzler= say/10;
// printf("girilen %d sayilarin basamak degerleri toplami = " , a );
// printf("%d + %d + %d = %d\n ", yuzler  , onlar, birler , yuzler + onlar+ birler  ); 





// x = 11         y= 5
//x =10           y= 6
//x = 9           y= 7
 //x= 8           y= 8
// x= 7           y= 9
//x=  6           y= 10
//x=  5           y= 11


// int i , j=5;

// for(i=11 ; i>4; i--){
//   printf("x = %d\t y= %d\n", i, j );
//   j++;


//}
  


//i n den 1 e kadar  (xi - x)^2



// for(int i=1  ;i<=3 ; i++ ){
 
// for(int J =1 ; J<=6 ; J++){
//   printf("%d", i);
// }



// }
 
//odev olan soru cozumu  

// int i ; 
// float sayi , n , ps =0, ns = 0 , port, nort , ort , ptop =0 , ntop= 0 ,top=0 , ss=0 ;
// printf("kac adet sayi gireceksiniz : ");
// scanf("%f",&n);
// for(i=1 ; i<=n ; i++){
// printf("%d   sayiyi giriniz : ", i);
// scanf("%f" ,&sayi);
//  if(sayi>0){
//   ps++;
//   ptop= ptop+sayi;
//   top = top+sayi ;
// }
// else if(sayi <0){
//   ns++;
//   ntop= ntop+sayi;
//   top=top+sayi;

// }
// else 
//   ss++;
 
// } 

// port= ptop /ps;
// nort = ntop /ns;
// ort = top/n;
// printf("pozitiflerin sayisi  = %.0f, ortalamasi %.2f\n", ps,port);
// printf("sifira esit olan sayisi = %.0f\n",ss);
// printf("negatiflerin sayisi = %.0f, ortalamasi = %.2f\n", ns,nort);
// printf("genel ortlamasi =%.f\n" , ort );
// }


// int a ,b, c , d,e , f,g, son  = 0;
// b= 5 ;
// c = -3 ;
//  d= 12 ;
//   for(a=1 ; a<4 ; a++){
// e=-2;
// f=3;
// son; 
// ///devamini yaz 



// int i , k= 1 , j=15 ; 
// while((j<8)||(k>0)){  /// burada biri saglasa bile giris yapilacak  || 

//   k--;
//  for(i=4 ; i >=k+4 ; i--)
//        printf("%d" , j*i );
//        printf("\n");
//    j = k*k;
//       }


// }

/// icteki for sutun icin ve distaki ise satir icin kullanilir 

// int i , j , top ; 
// for(i=1 ; i<= 4 ; i++){
// top =0 ; 
// for(j=1; j<=4 ;j++){

//   printf("%d\t",i );
// top=top+i; 
// }
// printf("%d  numarali satir toplami = %d\n", i , top );
// }


//**************** 


// int p , k , top=0 ; 
// for(p=1 ; p<=4 ; p++){

//   for(k=1 ; k<=4 ; k++){

// printf("%d\t", p);
// }
// printf("%d  numarali satir toplami = %d\n", p , top);
//}

 // altaki cikti sincada cikabilir soru dikkat bak ### $$$$ ////

// int i , j , top=0 , tops1=0, tops2=0 , tops3=0 , tops4=0;
// for(i=1 ;i<=4;i++){
// top=0; 
// for(j=1;j<=4 ;j++){
//    printf("%d\t" , i+j);
//       top= top+i+j;
//    if(j==1)
//       tops1=tops1+i+j;
//    else if(j==2)
//       tops2=tops2+i+j; 
//    else if(j==3)
//       tops3=tops3+i+j;
//    else
//       tops4=tops4+i+j;

// }
// printf("%d numara;li satir toplami = %d\n", i , top );

// }
// printf("**********************************\n%d\t%d\t%d\t%d\n",tops1 ,tops2,tops3,tops4);


/////// 2 arasinavda cikabilir yada finalde buna benzer $$#$#$#$ ////



// int k, i , j ; 
//  for(i=2; i<=6 ; i=i+2){
//  k=2;
//   for(j=6; j>=0; j=j-3){
//     printf("k=%dj=%di=%d\t",k ,j, i);
//     k++; 

 
//  }
//  printf("\n");

//  }
 /////sinavda ciakr //// 
// int a, b , c=2, d=3 ; 
//  for(c=2; c<=6 ; c=c+2){
//  a=16;
 
//   for(b=6; b>=0; b=b-3){
//     printf("a=%db=%dc=%dd=%d\t",a ,b,c,d );
//     a=a/2;
 
//  }
//  d=d*d;
//  printf("\n");

 
//    ///// calisma odevi ic ice for lari iccie while ile yapacaz 




 //// bunu aynisini ic ice do while ile yap: ////
  

 /// yanlis tekrar dene ///
// int a, b , c=2, d=3 ; 
//  do{
//   while(c=2; c<=6 ; c=c+2){
 
//     a=16;
 
//   for(b=6; b>=0; b=b-3){
//     printf("a=%db=%dc=%dd=%d\t",a ,b,c,d );
//     a=a/2;
 
//  }
//  d=d*d;
//  printf("\n");     ////// bu yanlis terkar dene  
//}
// int i, k ; 

// for(k=1;k<=5; k++){
 
//   for(i=1 ; i<=5 ; i++){
//   printf("%d", i);

//  }
// printf("\n");

// }

 

// int i , p ; 
// for(i=1 ; i<=5 ; i++){

//   for(p=1 ; p<=i; p++){

   
//   printf("*");



// }  
// printf("\n");
// }


// int i , p ; 
// for(i=1 ; i<=5 ; i++){

//   for(p=5 ; p>=i; p--){

   
//   printf("*");



// }  
// printf("\n");
// }














//odev   sinavda kesin  cikabilir dikkat bak ###%$$%$$433
/// buna bak /1#
// int a,b,c=2 ,d =3 ;
// do{
//   a=16 ;
//   b=6; 
//   do{
// printf("a=%db=%dc=%dd=%d\t" ,a,b,c,d);
// a=a/2;
// b=b-3;


//   }while(b>=0);
//   d=d*d;
//   printf("\n");
//   c=c+2;

// }while(c<=6);

//#//buna bak



// my own code;
// int gun ;
// printf("1 ile 7 arasinda bir sayi giriniz := ");
// scanf("%d",&gun);
// switch(gun){
//   case 1 : 
//   printf("pazartesi");
//   break ;
//   case 2 :
//   printf("sali");
//     break ;
//   case 3 :
//   printf("carsamba" );
//   break;
//   case 4 :
//   printf("persembe");
//   break;
//   case 5 :
//   printf("cuma");
//   break ;
//   case 6 :
//   printf("cumartesi");
//   break; 
//   case 7 : 
//   printf("pazar" );
//   break;
//   default :
//   printf(" gecersiz sayi girildi ");






//}






// int menu, numb1, numb2, total1 , i;


//   printf(" birinci sayigiriniz ==>");
// scanf("%d", &numb1 );
// printf("ikinci sayiyi giriniz ");
// scanf("%d", &numb2);


// printf("secenk giriniz\n");
// printf("1= toplama\n");
// printf("2=cikarma\n");
// scanf("%d" ,&menu);
// switch (menu){
// case 1 : 
// total1 = numb1+numb2 ; break ;
// case 2 :
//  total1 = numb1 - numb2 ; break ;
// default  : printf("geenrsiz secenk \n ");

// }


// if (menu==1)
// printf("%d  ile %d tooplami = %d\n " , numb1 , numb2 , total1 );
// else if (menu==2)
// printf("%d  ile %d farki = %d\n", numb1 , numb2 , total1);



// int numb1 , numb2 , menu , total;

// printf("bir sayi girininz : ");
// scanf("%d", &numb1);
// printf("ikinci sayiyi giriniz ");
// scanf("%d" , &numb2 );
// printf("menu den birini seciniz\n");
// printf("1. toplamak\n ");
// printf("2. cikarma\n ");
// printf("3. carpma\n ");
// printf("4. bolme\n ");
// scanf("%d",&menu);

// switch (menu){
// case 1: total =numb1+numb2 ;
// break;

// case 2: total =numb1-numb2 ;
// break;

// case 3: total =numb1*numb2 ;
// break;

// case 4: total =numb1/numb2 ;
// break;

// default :printf("yanlis girildi ");
// break;

// } 
// if(menu=1 )
//   printf("%d ile %d toplami = %d : ", numb1, numb2, total);


// else if (menu =2 )
// printf("%d ile %d  farki = : %d " , numb1 , numb2 , total);




// else if (menu =3)
  
//   printf("%d ile %d carpimi = : %d ", numb1 , numb2 , total);

// else 

// printf("%d ile %d bolumu = : %d ", numb1, numb2 , total);





// int i , k ;
// for(i=1 ; i<=5 ; i++){
// for(k=1 ; k<=i ; k++){

//   printf("%d", k );
// }

// printf("\n");

// }




// int menu;
// float numb1, numb2, total1;
// printf("birinci  sayigiriniz ==>");
// scanf("%f", &numb1);
// printf("ikinci sayiyi girniz ==>");
// scanf("%f", &numb2);
// printf("secenk giriniz\n");

// printf("1= toplama\n");
// printf("2=cikarma\n");
// printf("3 = carpma\n");
// printf("4 = bolme\n");
// scanf("%d",&menu);
// switch (menu){
// case 1 : total1 = numb1 + numb2 ; break ;
// case 2 : total1 = numb1 - numb2 ; break ;
// case 3 : total1 = numb1 * numb2 ; break ;
// case 4 : total1 = numb1 / numb2 ; break ;

// default  : printf("geenrsiz secenk \n ");



// }
// if (menu==1)
// printf("%.1f  ile %.1f tooplami = %.1f\n " , numb1 , numb2 , total1 );
// else if (menu==2)

// printf("%.1f  ile %.1f farki = %.1f\n", numb1 , numb2 , total1);

// else if (menu==3)
// printf("%.1f  ile %.1f carpimi  = %.1f\n", numb1 , numb2 , total1);

// else if (menu ==4)
// printf("%.1f  ile %.1f bolumu = %.1f\n", numb1 , numb2 , total1);





//my own work not class 

// int num  ; 
// printf("1 = su\n");
// printf("2 = enerji\n");
// printf("3 = sut \n");
// printf("4 = kahve\n");

// printf("lutfen bir sayi giriniz ==>>\t");
// scanf("%d", &num);

// switch (num){
//  case 1 :
//  printf("1 numarali su\n");
//  break;
// case 2 : 
// printf(" 2 numarali enerji\n");
// break ;
// case 3 : 
// printf("3 numarali sut\n ");
// break;
// case 4 : 
// printf(" 4 numarali kahve\n");
// break;
// default :
// printf("gecersiz secim\n");
// }
// if (num==1)
// printf("5 tl suyun parasi ");
// else if (num ==2)
// printf("25 tl enerjinin parasi");
// else if (num==3)
// printf("30 tl sutun parasi");
// else if (num==4)
// printf(" 40 tl kahvenin parasi ");
// else 
// printf("yanlis secim yapilid");


// //float ort ;
// printf("ortalama gir ==");
// scanf("%f",&ort);
// switch (ort){
// case 1 : 
// printf("")

// float ort ;
// printf("ortalama gri ==");
// scanf("%f", &ort);
// if(ort>90)
// printf("a aldiniz ");
// else if (" ort >80 ")
// printf("b aldiniz ");
// else if (ort >70)
// printf(" c aldiniz ");
// else 
// printf("f aldiniz ");


// int i;
// float ort ;
// printf("ort gir ");
// scanf("%f", &ort);
// if (ort>90)
// i=1 ;
// else if (ort>80)
// i = 2 ;
// else if (ort >70)
// i =3 ;
// else 
// i=4 ;
// switch(i){


// case 1 : 
// printf("a aldiniz ");
// break;


// case 2 :
// printf("b aldiniz ");
// break;


// case 3 :
// printf("c aldiniz ");
// break ; 


// case 4 :
// printf("f aldiniz ");
// break ; 


// default :
// printf("yanlis girildi ");
// break ; 
// }

                                                        // }
/// dizilerin baslangici 

// int i ,x [5];
// x[0]=5 ;
// x[1]=25;
// x[2]=-40;
// for(i=0 ; i<3;i++)
//   printf("%d\n",x[i]);
// }

// int i, x[4]={12,33,112,44};
// for(i=0 ; i<4 ;i++)
//   printf("%d" , x[i]); 
// }
// int i , x[3]={40,60,80};
// char name [3][25]= {"mat","kimya","fizik"};
// printf("NAME\t  SCORE\n");
// for(i=0; i<3; i++)
// printf("%s\t    %d\n", name[i], x[i]);
// }




// int i , x[]={5,0,6}; // boyle atama oliur 
// int y[3]={1,5,9};
// printf("__X__\t __Y__\n");
// for(i=0;i<3; i++)
//   printf("%d\t %d\n" , x[i],y[i]);
// }
// int i ; 
// char name[2][25]={"ahmad", "huseyn"};
// int age[]={19,36};
// printf("name\t  age\n");
// for(i=0; i <2; i++){
//   printf("%s\t  %d\n ", name[i] ,age[i]  );
// }




// int i ;
// char ad[][15]={"ahmet" ,"mehmet", "can"};
// int kilo []= {70 , 60 , 52};
// float boy[]={1.70 , 1.85,1.45};
// printf("\nISIM\tKILO\tBOY\n");
// for(i=0; i<=2; i++)
//   printf("%s\t%d\t%0.2f\n",ad[i],kilo[i],boy[i]); //1.3f olunca  1 .700 virgulden sonra 3  sayi verir 
// }// //karakterlerde  ise %s kullaniriz 




// float ort; 
// int i ,x[5], toplam =0 ; 
// for(i=0; i<5;i++){
// printf("%d. eleman:",i+1);
// scanf("%d", &x[i]);
// toplam+= x[i];
// }
// ort = (float)toplam/5;
// printf("toplami  : %d\t  ortalamasi =  %.2f ",  toplam , ort);
// }



//dizilerde max ve min bulmak icin boyle yapilir 
// int i ;
// int kilo[5]= {40,14,15,22,98};
// int n=5;
// int max = kilo[1];
// int min = kilo[1]; 
//   for(i=1 ; i<n ; i++){

//   if (max < kilo[i]){
//   max= kilo[i];
//   }
  
// if (min>kilo[i]){
// min=kilo[i];
// }
// }
// printf("maximum degeri %d\n",max);
// printf("minum degeriniz %d\n",min);
// }
//##$$$ sinav dizili sorularda bu kadar birimlik olsun denildiginide int x[10]  10 birim icin boyle yapilacak 

//#//odev sinavda ciakr fotocekildi 


//workout 

// int i ; char n ; 
// printf("enter your names");
// scanf("%s" , &n);
// int i ; 
// char name[][45]={"ahmad","fatima"};
// int kilo[]= {85,60};
// int age []= {19 ,18};
// printf("\nNAME\tWEIGHT\tAGE");
// for(i =0;i<2; i++){

//   printf("\n%s\t%d\t%d ", name[i], kilo[i], age [i] );


// }

// int i ; 
// char name[2][25] ;
// int weight[2]; 
// for(i=0; i<2 ; i++){
// printf("%d . kisinin adini giriniz : = ", i+1);
//   scanf("%s", &name[i]);
// }
// for(i=0 ; i<2;i++){
// printf("%d . kisinin kilosunu giriniz : =", i+1);
// scanf("%d",&weight[i]);

// }
// printf("\nname\tkilo\n");
// for(i=0 ; i<2; i++){
// printf("%s\t %d\n", name[i] , weight[i]);
// }




// #include<math.h> 
// float x , ustn ;
// printf("bir sayi giriniz :");
// scanf("%f",&x);
// ustn=(float)pow(x,3);
// printf("%.0f sayisinin 3 . kuveti : %.2f\n karekoku: %.2f\n", x , ustn,sqrt(x));
// }

/// usteki kod u main.c de en basta calistirldi ..




// altaki soru ise kucukten buyuge dogru siralama seklinde yapiyor 

int  x[5], i , j ,gec;
printf("5 tane sayi gir : \n");
for(i=0 ; i<5 ; i++){
printf("%d  sayi : " ,i+1);
scanf("%d" ,&x[i]);
}
for(i =0 ; i<4 ; i++){
    for( j=i+1 ; j<5 ; j++){
    if (x[j] <x[i]){
      gec = x[i];
      x[i]=x[j];
      x[j]= gec; 

    }
    }
}
for (i =0 ; i<5 ; i++)
printf("%d\t" , x[i]);
}

// #include<stdlib.h>
// #include<time.h>
// #include<conio.h>


// int i , x[10];
// time_t t ;
// srand((unsigned) time(&t));
// for(i=0 ; i<10 ; i++){
//   x[i]= rand()%100;     // 1 ile 100 arasinda sayi verecek 
//   printf("%d\n",x[i])




// //odevin yapilisi 
// int i , x[30], n, toplam=0 , max , min ;
// float ort ;
// printf("birim sayisini giriniz\t : ");
// scanf("%d",&n);
// for(i=0 ; i<n ; i++){
// printf("%d . eleman : =" ,i+1);
//   scanf("%d" , &x[i]);
// toplam = toplam + x[i];
// }
// printf(" sayilarin toplami  = : %d\n", toplam );
// ort= float(toplam/n);
// printf(" aritmetik ortalamasi = %.2f\n", ort );

// max = x[1];
// min = x[1];

// for(i=0 ; i<n; i++){
// if(max <x[i]){
// max = x[i];

// }
// if (min> x[i]){
//   min = x[i];

// }


// }
// printf("max degeri %d\n", max);
// printf(" minimum degeri %d\n", min(){


///////dizilerler son ornekler 2 vizeden sonra ilk ders

// int i , a[10];
// int toplam= 0;
// for(i=1 ; i<=10 ; i++){
// a[i-1]= 2*i*i-1;
// toplam= toplam +a[i-1];
// }
// printf("sonuc = %d\n", toplam );

// }

//hepsinin geometrik ort , harmonik ortalama , variance , sd 
 


























































 





























/*bu programm  dir*/
/* bu ders*/


