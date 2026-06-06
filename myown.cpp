#include <stdio.h>
#include <cstdlib>

 
int main(int argc, char const *argv[])
{

/*  
////we found the max number by using if statement ///



double x;
double y ;
double max;
printf(" please enter the x  : ");
scanf ("%lf\n, %lf\n" ,&x , &y);

max =(x>y) ? x : y;
printf("the max number is :%f\n", max);
    
  


///formul birden n ye kadar sayilarin karsinin  toplami sonra n ye bol 
float  n ;
int a = 1 ;
float toplam=0; 
printf("please enter a value for n  : " );
scanf("%f", &n);
for( a = 1 ; a<=n; a++  )
    toplam= toplam+a*a/n;
printf(" islemin sonucu = %f", toplam);






//faktoryel hesabi 
/*

int a; 
int sonuc=1 ;
int n ; 
printf("faktoryalini almak istediginiz sayiyi giriniz : ");
scanf("%d", &n);
if (n>=0)
    printf("yukleniyor....\n " );
else {
    printf("pozitif sayi giriniz\n");
    exit (1);
  }
for(a=1 ; a<=n; a++ )

     sonuc= sonuc*a;
printf("sayisinin faktoryeli = %d", sonuc);

*/



/*

///hesap makinesi 

int a , b , sonuc; 
char islem;

printf("hangi islemi yapacaksin  ( + ,-, *, / )  : ");
scanf("%c", &islem);
printf("sayi gir : ");
scanf("%d",&a);
printf("sayi gir : ");
scanf("%d", &b);

if(islem=='+')
   sonuc = a+b;
else if(islem== '-')
   sonuc= a-b;
else if (islem== '*')
   sonuc= a*b;
else if  (islem == '/')
    sonuc = a/b;
else if (b==0){
     printf("b = 0 olamaz ");
     exit(1);}
else{
   printf("islem gecersiz ");
   return 0 ;

}
 
printf("islemin sonucu = %d" ,sonuc) ;

return 0 ;

*/

/*



        
int age ;
printf("enter your age please : ");
scanf("%d", &age );
if(age>=18)
  printf("you can enter");
else 
  printf("you cannot enter" );

 */


/*
int i =1;
 while (i<=5){
   printf("obaid");
   i++ ;  
 }   
    */
    
    
       
    
/*
int rows = 0;
int columns = 0;
char syb= '\0';
printf("enter the number of rows  : ");
scanf("%d", &rows);

printf("enter the number of columns :");
scanf("%d" , &columns);

printf("enter the symbol : ");
scanf(" %c", &syb);

for(int i =0 ; i <columns; i++){
   for(int J =0 ; J <rows; J++){
   printf("%c", syb);
   }
   printf("\n");

   }

*/
   
/*
int n ;
int i=1 ;
int  toplam=0;
int sayi;
int enbuyuk ;
printf("kac tane sayi girmek istersen yaz : ");
scanf("%d", &n);
 
for(i=1 ; i <=n ;i++){
    printf("%d\n  sayi giriniz " , i);
    scanf("%d", &sayi );
    if(i==1)
    enbuyuk=sayi;
    else if (sayi > enbuyuk)
    enbuyuk = sayi;
    toplam = toplam +sayi;}
printf("sayilarinizin toplami  %d\n " , toplam );
printf("en buyuk sayi %d\n ", enbuyuk);
    

*/
/*
int  i = 1 ;
int n ; 
int toplam=0 ;
int sayi;
int enbuyuk;

printf("kactane sayi giremk isterseniz : ");
scanf("%d" , &n);

while(i<=n){
   
    
  printf("sayi giriniz :", sayi);
  scanf("%d", &sayi);
  
  if(i==1)
  enbuyuk= sayi ;
  else if (sayi >enbuyuk)
  enbuyuk=sayi;


  toplam= toplam + sayi ;
  i++;
}
  printf(" girdiginiz sayilarin toplami = %d\n " , toplam);
  printf("en buyuk sayi = %d " , enbuyuk );


*/






/*

 int num ;
 int i=1; 
 int sum= 0;
 while( num >0 ){
   i++;
   printf("enter the number:");
   scanf("%d", &num);
   if (num>0)
     sum = sum + num;}
printf(" the resul is  %d\n ", sum);
  
 */

/*
int i = 0 ;
int toplam=0;
int n=1;
while(n!=0){
    printf("bir sayi giriniz : ");
    scanf("%d" , &n);


    if(n!=0){
      toplam = toplam +n;

       i++;

  }


}
printf("girdiginiz sayilarin toplami = %d\n " , toplam  );
printf(" girilen sayi adedi  %d\n ", i );

*/


/*

int n ;
int basamak= 0 ;
printf("sayi gir : ");
scanf("%d",&n);
if(n<0){
  n= -n ;
}
if (n ==0 ){
   basamak = 1;

}

while (n>0){
   n= n/10;
       basamak ++;
   
      

      
}
printf("girdiginiz sayi %d  basamaklidir " , basamak );



*/
/*
int k ;

printf("enter an integer \n");
do{
scanf("%d", &k);
if(k==0)

printf(" u entered  0 please try again " , k);
else if (k<0)
printf("the numebr was  negative  please try again ");

}while(k>0);
*/



// until the user type 1 or 2 it will not stop with do while   and collect all the nums entered 


/*
int i;
int toplam = 0;
int counter=0;


 
do{printf("just type 1 or 2 : ");
  scanf("%d", &i);
  
if (i ==0)
break;


toplam = toplam+i;

}while(i != 0);


printf("toplam girdiginiz sayilarin toplami %d , %d" , toplam, counter);

*/


/*
int k=1;
int m;
int toplam= 0;

do{
printf(" sayi giriniz : ");
scanf("%d, &m");
k++;
printf(" obaid\n ");
toplam = toplam + 1; 
printf("%d", toplam);
}while(k<16);

*/

//kullanicidan sayi girmesini iste 1 sayi o sayiya kadadr sayilari topla 
//sayi gir : 5 
//toplam = 15 
//1 den 5 e kadar sayilarin toplami 
//formul ile 
/*
int toplam; 
int m ;
printf("plaese enter a number ");
scanf("%d",&m );
toplam= m*(m+1)/2;

printf(" from 1 to  %d  the sum of numbers =  %d " , m, toplam );
*/
//for dongusu ile yapilisi 
/*
int toplam=0;
int m ; 
printf("bir sayi girirniz : ");
scanf("%d",&m );
for(int i = 1 ; i<=m ; i++){

  toplam= toplam +i ;

}
printf("from 1 to  %d  the sum of numbers =  %d " , m, toplam);

*/
/*
int faktoryel=1; 

int m ;
printf("please enter a number  : ");
scanf("%d", &m);
for(int i =1 ; i<=m ; i++){
faktoryel= faktoryel*i;}
printf("sayinin faktoryeli %d " ,faktoryel );
*/
// int m =19;
// int i ;
// for(int i = 1 ; i<=m ; i++)
// printf("iy ki dogdun mustafa \n");

///  how to comment more than one line select the lines   ctrl k and then ctrl c   uncomment the lines   ctrl k then ctrl u 




//sinava yonelik calisma 
//int i = 20 ;
//printf(" i nin degeri %d\n ", i );

//int x = 15 ;
//int y = 9;
//int sum = x+y ;
//printf("x+y = %d\n  ", sum );

//float price = 45.26;

//printf("%2.f", price);

//char name [] = "ahmad";
//char lastname[]= "seddiqi";

//printf(" hello can i get your fucking name : %s\n" ,name);  //// after \n it will go one line down but if we use %t 
//will give a tab space on the same line
//printf("what is your last name : %s ",lastname );


//int student =20;
//student = student +1;

//printf("new student = %d ", student );

// int age ;
// int grade ; 
// printf("sir how old are u : ");
// scanf("%d", &age);
// printf("what is your class: ");
// scanf("%d", &grade);
//if (grade==1)
 // printf(" your are %d yearss old , and you are in %dst grade ", age , grade );
//else if(grade ==2 )
//     printf(" your are %d yearss old , and you are in %dnd grade ", age , grade );

//else if (grade ==3 )
  // printf(" your are %d yearss old , and you are in %drd grade ", age , grade );
//else 
//printf(" your are %d yearss old , and you are in %dth grade ", age , grade );


// int num ;
// int mod ;
// printf("lutfen  bir sayi giriniz : ");
// scanf("%d", &num );
// mod = num%10;
// printf(" %d\t un modu =  %d  " ,  num, mod );

//sayinin kacinic modunu almak istedigini kullanicaidan girmesini isteyip mod almak 

// int s , m ; 
// int mod ;
// printf("sayi giriniz :");
// scanf("%d" , &s );
// printf("lutefen kacinic modunu almak istiyorsaniz giriniz : ");
// scanf("%d", &m);
// mod = s-(((s/m))*m);
// printf(" %d  sayisinin %d modu = %d", s,m, mod);


// int sayi ;
// for(sayi =1 ;sayi <=10 ; sayi++)
// printf("%d\n" , sayi );
 


// Senden 10 tane sayı girmeni ister (çünkü döngü 1’den 10’a kadar çalışıyor)

// Her girdiğin sayıyı toplayıp b değişkenine ekler

// En sonunda toplamı ekrana yazdırır  

// int a , b=0 , c ; 
// printf("please enter 10\n : ");
// for(a=1 ; a<= 10 ; a++){

//   printf("enter the number : ");
//   scanf("%d", &c);
//   b= b+c ;

// }
// printf("b = %d\n ",b);

// ##burada ise bizden kac sayi girmemize soruyor ve sonra ise onlari toplayip 
// ##kac tane sayi oldugu ve toplamini bize verir
// int sayac  , toplam = 0 , c  , kontrol;
// printf("please enter how many numbers you wanna collect : " );
// scanf("%d", &kontrol);

// for(sayac=1 ; sayac<=kontrol; sayac++  ){
// printf("enter the numbers:"); 
//    scanf("%d", &c);
    
// toplam = toplam +c ;}
// printf(" girdiginiz toplam sayi adeti %d , ve toplami = %d",kontrol , toplam  );

//burada ise float ile sayi giricez vwe toplami , ortakamasi verilecek 

// float sayi , ort, toplam=0; 
// int sayac ;
// printf("enter 10 number in float\n:");
// for(sayac=1; sayac<=10; sayac++){
//  printf("keep going ");
// scanf("%f", &sayi);
// toplam= toplam + sayi ;
// ort= toplam/ 10;}
// printf("girdiginiz sayilari toplami = %f  , ve  ortalamasi = %f", toplam,ort);


// Bu kodun yaptığı şeyi sade anlatayım:

// Kullanıcıdan bir n değeri alıyor

// Sonra 1’den n’e kadar olan sayıların karelerini topluyor
 
// int n  , i ;
// int toplam= 0;
// printf("enter a number : " );
// scanf("%d", &n);
// for(i=1 ; i<=n ; i++)

//       toplam=toplam+i*i;

// printf("sonuc = %d\n",toplam);



//👉 1’den n’e kadar olan sayılar için (i² + i + 5) değerlerinin ortalamasını buluyor
//n =1 dedik n^2+n+5= 1+1+5 = 7 
// int sayac , sayi, ort , toplam= 0;
// printf(" lutfen sayi giriniz :");
// scanf("%d", &sayi);
// for(sayac = 1 ; sayac<=sayi; sayac++){
// toplam = toplam + sayi*sayi+sayi+5 ;
// ort= toplam/sayi;
// }
// printf(" sonuc = %d ", ort );




///### while dongusu while ( sadece kosulu belirtiyourz )  disarda i++   { } while kosuldan sonra ve sonunda parantez kullan 
// int i  =1 ;
// while (i <=10){
// printf(" %d\n", i);
// i++;}

// int sayac,i=1 , sayi , toplam=0 ;
// printf("kac tnae sayi gireceksin : ");
// scanf("%d", &sayac);
// while(i<=sayac){
//   printf("sayi giriniz ");
//   scanf("%d", &sayi);
 
//   toplam = toplam +sayi; 
//   i++;
// }

// printf("girdiginiz sayilarin toplmai = %d ",toplam );



// int i=1 , n ;
// float toplam=0, ort ,  sayi ;
// printf("lutfen kac sayi gireceginiz yaziniz : ");
// scanf("%d", &n);
// while(i <=n){

//  printf("lutfen sayi giriniz : ");
  
//  scanf("%f", &sayi);
  
//  toplam = toplam +sayi;
//     ort= (toplam/n);
//      i++;}
// printf("girmis oldugunuz sayi adedi = %d  ve toplami = %f, ve ortalamasi =  %f", n,toplam, ort);






//$$$$#######//// onemli i++ while dongusunun icinde yap,  disinda yaparsan surekli senden sayi girmenii ister ve bitmez ###$$
// { parantezleri kapat sonra printf( kullan yoksa hep senden ayniseeyi ister )}


//1 den 10 a kadar sayilari yanyana yazmak do while ile 
// int n=1 ;
// do{
//  printf("%d",n);
//  n= n+1;

// }while(n!=11);

//0 ile 10 arasi karsi ve kupu alincak 

// int i= 1;
// do {
//   printf("%d\t%d\t%d\n",i , i*i  ,i*i*i);
//   i++;
// }while (i!=11);


// int i=1 , j ;
// do{
//     j=2;
    
//     while(j<=6){

//          printf("A=%d\t,  B= %d\n", j, i );    buraya tekrar bak bakamadim 
//          j=j+2 ;
//     }
//     i= i+1;    
//}while(i<=3);


//kullanicidan sayi al eger 10 dan buyuk ise 10 $ kazandi eger 9 dan kucuk ise 9 
// int n ;
// printf("sayi giriniz : ");
// scanf("%d", &n);
// if ((n>10)&& (n<100))  
//   printf("10 $ kazandiniz ");
// else if (n<9)
//  printf("9 dollar kazandiniz ");      burada && kullanimi var if  else if ile birlikte 
// else if (n>100)
// printf("cok buyuk sayi girdiniz");

///burada kullanicndan sayi istecez sonra kontrolediyoz hangis byk hangisi kck ona gore yazcaz
// int n, m ; 
// printf(" 1.ci sayi yi giriniz : ");
// scanf("%d", &n);
// printf(" 2.ci  sayiyi giriniz :");
// scanf ("%d", &m);
// if(n>m)
// printf("1.ci sayi buyukur %d , ikinci sayidan  = %d", n,m);
// else if(m>n)
// printf(" 2.ci sayi buyuk %d 1.ci sayi dan %d", m , n );
// else if(m=n)
// printf(" 1.ci sayi %d , ikinci sayi %d ikisi birbirine esittir." , n , m );


//1 ile 10 arasi sayi girilisein 
// int n , k=0;
// while(k==0){
 
//  printf("enter number betwween 1 and 10 : ");
//  scanf("%d",&n);

//    if((n<0)||(n>11)){                        /// oenmli if icinde eger  &&|| ve ya ! kullnacaksan susulu parantez ac 
//    printf("lutfen tekrar sayi giriniz %d 1 ile 10 arasi degil\n " , n);
//    k=0;


//    }
// else 
// k=1;



// }
// printf("girmis oldugunuz sayi %d 1 ile 10 arasindadir", n);



// int n ; 

// do{
// printf("enter number between 1 and 10 :  ");
// scanf("%d", &n );


// }while((n<1)||(n>10));
// printf("sayi %d olarak girilmistir", n );




// //}
// int a , birler ,onlar , yuzler ,sayi , kontrol =1 ;
// while (kontrol == 1){
//  printf("enter number above 99 : ");
//   scanf("%d",&sayi);
//    if((sayi>99)&&(sayi<1000))
//     kontrol=0;
//      else
//        printf(" yanlis sayi girlidi ");

   

//  }

// a = sayi; 
// birler=sayi%10;
// sayi = sayi -birler ;
// sayi = sayi/10;
// onlar= sayi %10;
// sayi = sayi - onlar;
// yuzler = sayi /10;
// printf("girilen %d sayilarin basamak degerleri toplami = " , a );
// printf("%d + %d + %d = %d\n ", yuzler  , onlar, birler , yuzler + onlar+ birler  ); 


   /////    $$$$$$    tekrar tum basta hepsi sinavva yonelik calisma/////$$$
    

// int a , k ; 
// int  t, c , b , m; 
// a= 20; 
// k = 5;
// t = a+k ;
// c = a*k;
// b = a/k;
// m= a-k   ;
// printf("a + k  = %d\n " , t);
// printf("a - k = %d\n " , m );
// printf("a * k = %d\n ", c );
// printf("a / k = %d\n ", b);

// int age;  
// printf("how old are you : ");
// scanf ("%d" , &age );
// printf("you are %d years old\n ", age );
// printf("next year  you will be %d\n++ years old  ", age ); 

// int n ;
// printf("please enter a number : ");
// scanf ("%d" , &n);
// printf("girilen sayi =  %d\t" , n);


/// girilen bir sayinin 10.modunu aldik 
// int sayi ;
// int mod ;
// printf(" please enter a number :  ");
// scanf("%d", &sayi);
// mod= sayi%10;
// printf("girilien sayi %d, ve  modu %d =" ,sayi , mod);

// girilen bir sayi icin kacinici modunu alacaksin sorusu 
// int c;
// int mod ; 
// int t ; 
// printf(" entert the number : ");
// scanf ("%d", &t);
// printf(" which mod do you want to take : ");
// scanf("%d", &mod );
// c =t%mod;
// printf("girilien sayinin %d , modu = %d", t ,c);



// float birincisayi , ikincisayi ;
// float toplam, cikarma , bolme , carpma;
// printf(" birinci sayiyi giriniz : ");
// scanf("%f" , &birincisayi );
// printf(" ikinci sayiyi grininzi :");
// scanf("%f", &ikincisayi);

// toplam = birincisayi+ ikincisayi;
// cikarma= birincisayi- ikincisayi;
// bolme= birincisayi/ikincisayi;
// carpma= birincisayi*ikincisayi;
// printf("girilen sayinin toplami = %.f\n", toplam);
// printf("girilen sayinin farki   = %.f\n", cikarma);
// printf("girilen sayinin carpimi = %.f\n", carpma);
// printf("girilen sayinin bolumu  = %.f\n", bolme);


// 1 den 10 a kadar sayilarin yazdiran program 
// int sayi ;
// for(sayi=1;sayi<=10;sayi++)
// printf("%d\n",sayi);

//kullancidan nereden nereye kadar sayi girmesini sorup sonra da onlari yazdierip sonunda toplamini istemek
// int sayi , b , s , toplam = 0 ;
// printf("lutfen kactan baslasin sayiniz\n:");
// scanf("%d",&b);
// printf("lutfen kaca kadar gitsin istersiniz\n:"); 
// scanf("%d",&s);
// for(sayi=b;sayi<=s;sayi++);
// printf("%d\n", sayi );
// toplam = toplam +sayi ;
// printf("toplami = %d", toplam); 

// int a ; 
// int b=0 ; 
// int c ;


// for(a=1;a<=10;a++){
// printf("lutfen sayi girniz: ");
// scanf("%d",&c);
// b = b +c;}
// printf("b = %d\n" , b);

// int i;
// int say ; 
// float ort , toplam=0 , g_sayi;
// printf("kac sayi gireceksin :");
// scanf ("%d", &i);
// for(say=1 ;say<=i ;say++){
// printf("sayi gir :");
// scanf("%f", &g_sayi);
// toplam= toplam + g_sayi;}
// ort = toplam /i;
// printf(" girmis oldugunuz sayilarin toplam = %2f\n , ve ortalamasi = %2f\n ",toplam,ort);

// int i=1 ;
// while(i<=19){
// printf("%d\n", i );
// i++;
// }

//int n=1;

// do
// {printf("%d\n" ,n);

//   n++;



// }while(n!=11);


//sayinin karesini alma ve kupunu alma 
// 


// int n =1;
// do{

// printf("%d\n" , n );

// n++;

// }while(n<=10);

// kullancidan  2 adet sayi al eger sayilar esit se esititer yaz degilse kukcuk olan sayisyi yazdir 
// int sayi1, sayi2;
// printf(" lutfen sayi giriniz : ");
// scanf(" %d",&sayi1);
// printf(" lutfen ikinci sayiyi giriniz :");
// scanf("%d",&sayi2);


// if(sayi1 == sayi2)
// printf("birinci sayi %d = %d ikinci sayi. " ,sayi1, sayi2);
// else if(sayi1>sayi2)
// printf("%d", sayi2 );
// else 
// printf(" birninci sayi kucuk tur %d\t", sayi1 );

// int  n , kontrol =0 ;
// while(kontrol==0){
//   printf("lutfen sayi giriniz 1 ile 10 arasi : ");
//      scanf("%d",&n);
//     if((n<1)||(n>11)){
//   printf( "yanlis sayi girildi tekrar girniz  : ");
//   scanf("%d", &n);
//   kontrol =0;
//    }
//   else 
//   kontrol =1 ;
// }
// printf(" sayi  %d 1 ile 10 arasinda girildi :" , n );

// int sayi ;
// do{ 
//   printf(" sayi giriniz 1 ile 10 arasi  : ");
//   scanf("%d" , &sayi );

// }while((sayi>11)||(sayi<0));

// printf("dogru sayi girildi :%d " ,sayi);


//   int sayi,i=0 , toplam=0,  adet,ortalama   ;
//   printf(" kac adet sayi girilecek : ");
//   scanf("%d" ,&adet);
  
//   while(i<adet){
    
//  printf("lutfen sayi giriniz :");
//     scanf("%d", &sayi);
  
// i++;
    
  

// toplam = toplam +sayi;



// }
   
  
  
//   ortalama= toplam/adet;
// printf(" girmis oldiugunuz sayi adedi =  %d , toplami = %d ,  ortalamasi = %d " , adet, toplam , ortalama);

// int sayi , a , kontrol = 1 , birler , yuzler , onlar , toplam ;
// while(kontrol ==1 ){

//    printf(" lutfen sayi giriniz 3 basamakli  arasi ");
//    scanf("%d",&sayi );
//    if((sayi>99)&&(sayi<1000)){
//    kontrol =0;
// }
//    else
//    printf("lutfen tekrar giriniz\n: ");


// }

// a =sayi ;
// birler= sayi%10;
// sayi= sayi -birler ;
// sayi= sayi/10;
// onlar= sayi%10;
// sayi= sayi-onlar;
// yuzler= sayi/10;
// printf(" the number u have entered was %d\n", a );
// printf("basamaklar = %d   + %d  + %d   = %d", onlar ,birler ,yuzler,birler +yuzler +onlar );







 
// int i , n ,t=0;
// for(i=1 ; i <=10; i++){
// printf("lutfen sayi giriniz : ");
// scanf("%d", &n);
// t= t +n;
// printf("girmis oldugunuz sayilarin toplami = %d", t);
// }



// for(int i =1 ; i<=3;i++){
//   for (int j =1 ; j<=10 ; j++){

//     printf("%d \t", j);
    
//   }


// printf("\n");



//}


// int k ;
// int  n ,  top= 0 ;
// int say , ort; 
// printf("kac sayi giriceksinz : ");
// scanf("%d" , &n);
// for(k=1 ;k<=n;k++){
// printf("lutfen sayi girin : ");
// scanf("%d",&say);
// top=top+say;

// }
// ort = top/n; 
// printf(" toplam sayiniz %d , ve ort = %d" ,top , ort);

       ///////////    1 vizeden sonraki ilk ders     ///////////










// int i,j;
// for( i = 1 ; i <5 ; i++){   // i distaki for un saayci 
//     for( j=1 ; j <5 ; j++){
//       printf("%d", i );
// }
//  printf("\n");
// }

// int i , j ;
// for (i = 1 ; i < 5; i++){
//    for( j= 1 ; j <i+1 ; j++){
//       printf("%d", i+j);
//    }
//    printf("\n");

// }

// int i , j  ;
// for( i =1 ; i <4 ; i++){
// for(i =1 ; j<= 4 ; j++){
//  if (i ==j)
//  printf("1\t");
//  else if (i>j )
//  printf(" 3\t");
//  else 
//  printf("2\t"); 
// }
// printf("\n\n");
// }
// }


//  int i , j , top = 0 ; 
//  for(i=1 ; i<=5 ;i++){
//     for(j=1; j<=6-i ; j++){

//       printf(" %d\t" , i);
//      top = top +i;
    
//     }
//    printf("\n\n");
//   }
// printf("**************************\n");
// printf("%d\n", top );



// int i, j ;
// for(i=1 ; i<=11; i++){
//   for(j=1;j<=11;j++){
//     printf("%dX%d=%d\t",j,i,j*i);


//   }

// printf("\n");
// }


// int i , k ;
// for(i =1 ; i<=3 ; i++){
// for(k=1 ; k<=3 ; k++){

// printf("ahmad | ");


// }
// printf("\n_______________________________\n");

// }
 

// int i , k , sharp ; 
// printf(" please enter hwo many sharps u want: :  ");
// scanf("%d", &sharp);
// for(i=1 ; i<=sharp ; i++){ 
//   for(k=1 ; k<=i ; k++){
//   ///printf("#"); we can also print the k in here as it shows in down line 
//   printf(" %d",k );
// }          
//                         //// satirlari dis for ile sutunlari ise ic for 

//    printf("\n");

 //also we can write the opposite of that  of that  
// int i , k , sharp ; 
// printf(" please enter hwo many sharps u want: :  ");
// scanf("%d", &sharp);
// for(i=1 ; i<=sharp ; i++){ 
//   for(k=sharp ; k>=i ; k--){
//   ///printf("#"); we can also print the k in here as it shows in down line 
//   printf(" %d",k );
// }          
// // satirlari dis for ile sutunlari ise ic for 

//    printf("\n");

// }


// int i , j; 
// for(i=5; i>=1; i--){


//   for(j=1;j<=i;j++){
// printf("#\t");




//   }

// printf("\n");



// }
/// dizilerin baslangici 

// int i ,x [5];
// x[0]=5 ;
// x[1]=25;
// x[2]=-40;
// for(i=0 ; i<3;i++)
//   printf("%d\n",x[i]);


// int i , x[5]={5,0,6}; // boyle atama oliur 
// int y[]={1,5,9};
// printf("X  Y\n");
// for(i=0;i<3; i++)
//   printf("%d   %d\n" , x[i],y[i]);





// int i ;
// char ad[][15]={"ahmet" ,"mehmet", "can"};
// int kilo []= {70 , 60 , 52};
// float boy[]={1.70 , 1.85,1.45};
// printf("\nISIM\tKILO\tBOY\n");
// for(i=0; i<3; i++)
//   printf("%s\t%d\t%1.3f\n",ad[i],kilo[i],boy[i]); //1.3f olunca  1 .700 virgulden sonra 3  sayi verir 
// //karakterlerde  ise %s kullaniriz 





//klavye ile girilen 5 sayinin max ve min ve ort 
// int  min  ,max;
//  float ort; 
//  int i ,x[5], toplam =0 ;
//  for(i=0; i<5;i++){
//  printf("%d. eleman:",i+1);
//  scanf("%d", &x[i]);
//  toplam+= x[i];

//  }
//  ort = (float)toplam/5;
//  printf("ortalamari : %.2f\n", ort);
// min = x[0];
// max = x[0];
// for(i= 1 ; i<5; i++){

// if(x[i]<min)
// min=  x[i];
// if (x[i]>max)
// max  = x[i];


// }
// printf("minimum %d  maksimum %d\n" , min , max  );


//yeni 



//dizilerde max ve min bulmak icin boyle yapilir 




// int i ;
// int kilo[]= {40,14,15,22,98,1};s
// int n=6;
// int max = kilo[0];
// int min = kilo[0]; 
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



//yeni 

//age ile min ve max bulmak

// int i ; 
// int age[]={12,34,54,19,19,100};
// int n=6;
// int max = age[0];
// int min = age[0];
// for(i=1 ; i<n; i++){
// if(max<age[i]){
//   max= age[i];
// }
// if(min>age[i]){

//   min = age[i];
// }
// }
//  printf("en buyuk %d\n", max  );
// printf("en kucuk %d\t", min);


//##$$$ sinav dizili sorularda bu kadar birimlik olsun denildiginide int x[10]  10 birim icin boyle yapilacak 

//#//odev sinavda ciakr fotocekildi 









//workout 

// int i ; char n ; 
// printf("enter your names");
// scanf("%s" , &n);

// char name[][45]={"ahmad","fatima"};
// int kilo[]= {85,60};
// int age []= {19 ,18};
// printf("\nNAME\tWEIGHT\tAGE");
// for(i =0;i<2; i++){

//   printf("\n%s\t%d\t%d ", name[i], kilo[i], age [i] );

// }

// #include<math.h> 
// float x , ustn ;
// printf("bir sayi giriniz :");
// scanf("%f",&x);
// ustn=(float)pow(x,3);
// printf("%.0f sayisinin 3 . kuveti : %.2f\n karekodu: %.2f\n", x , ustn,sqrt(x));


// usteki kod ta hata veriyor 



// altaki soru ise kucukten buyuge dogru siralama seklinde yapiyor 

// int  x[5], i , j ,gec;
// printf("5 tane sayi gir : \n");
// for(i=0 ; i<5 ; i++){
// printf("%d  sayi : " ,i+1);
// scanf("%d" ,&x[i]);

// }


// for(i =0 ; i<4 ; i++){
//     for( j=i+1 ; j<5 ; j++){
//     if (x[j] <x[i]){
//       gec = x[i];
//       x[i]=x[j];
//       x[j]= gec; 

//     }

//     }


// }

// for (i =0 ; i<5 ; i++)
// printf("%d\t" , x[i]);




// #include<stdio.h>
// #include<stdlib.h>
// #include<time.h>
// #include<conio.h>
// int i , x[10];
// time_t t ;
// srand((unsigned) ,time(&t));
// for(i=0 ; i<10 ; i++){
//   x[i]= rand()%100;     // 1 ile 100 arasinda sayi verecek 
//   printf("%d\n",x[i]);

//}



}













