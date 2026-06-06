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
