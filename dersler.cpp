#include <stdio.h>
#include <cstdlib>
/* main() 
{ */

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


/* int age; 
int grade;




printf("how old are  u :  " );
scanf("%d",&age );
printf("you are %d\n ", age  );

printf (  "which class are u in  : " );
scanf("%d",&grade );
printf("you are in %d\n ", grade );


printf("please entwer ")

*/

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










/*

int x;
int mod; 
int y;

printf("bir sayi gir :  ");
scanf("%d", &x);
printf("mod kacini almka istiyorusun : ");
scanf("%d",&y);
mod=x-((x/y)*y);
printf("%d sayinin mod u = %d\n", x, mod   );

*/












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







/*int  sayi ;
for (sayi=1; sayi <=10 ; sayi++ )
printf("%d\n" ,sayi);  /// if we put a slash n it will print the number in a column
printf("\n");
*/

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


/*

int i ;
int toplam= 0;
int n ;
printf("enter the num   ");
scanf("%d", &n );

for( i = 1 ; i<=n ; i++ )
   toplam=toplam+i*i;
printf(" sonuc = %d\n" , toplam);
*/

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
/*
int a ;
int b ; 
printf("almak istedigin sayinin karesini al : ");
scanf("%d", &a);


b= a*a;

printf("%d", b ); 

*/

/*

int i = 1 ;
while ( i <=10){
   printf("%d", i );
   i++;
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

/*
int i=1 ;
int k=2;
while(i<=10){
  
 
  printf(" %d islemin sonucu %d\n",i,k );
  i++;
  k=k*2;

  }


*/


// do while konusu ///
// birden 10 a kadar sayi;ari yan yan a yazdir an program 

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






int i=1 , j ;
do{
    j=2;
    while(j<=6){

         printf("A=%d\t,     B= %d\n", j, i );
         j=j+2 ;
    }
    i= i+1;    
}while(i<=3);


}
































































 





























/*bu programm  dir*/
/* bu ders*/


