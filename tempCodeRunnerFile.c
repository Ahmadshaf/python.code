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
