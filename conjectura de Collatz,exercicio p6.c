//lista preparatoria de pp, exercicio p6
#include <stdio.h>

int main (){
    int n;
printf("conjectura de Collatz ou problema do (3x+1)\n");
//verificar se o numero digitado eh natural
do {
    printf("digite um numero natural :");
    scanf("%d",&n);
}while(n<0);

 do{
        printf("%d\n",n);
if (n%2){
    n=(n*3)+1;
}else {
n=n/2;
}


 }while(n>1);
 if(n==1)printf("1");//fazemos assim pois n pode ser zero .
return 0 ;}
