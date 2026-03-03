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

int i;
int toplam = 0;
int counter;


 
do{printf("just type 1 or 2 : ");
  scanf("%d", &i);
  counter++; 
if (i ==0)
break;


toplam = toplam+i;

}while(i != 0);


printf("toplam girdiginiz sayilarin toplami %d , %d" , toplam, counter);








}