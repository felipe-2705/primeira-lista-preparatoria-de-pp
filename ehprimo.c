//exercicio p4 da lista de exercicios preparatorios
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

 int main (){
  int n,d=2 ,raiz,p=1; //come�arei supondo que o numero n � primo
  printf ("descubra se o numero eh primo.\n");
  do {//verifica�ao do numero digitado.
  printf ("digite um numero natural: ");
  scanf("%d",&n);
  }while(n<=0);
  raiz=sqrt(n); //ja que um numero � primo se possuir divisores menores ou igual a sua raiz quadradada ,tiramos a raiz de n.

while(d<=raiz ){

    if(n%d++ == 0){
        p = 0;
        break;//se o ja foi encontrado um divisor de n ,nao � necessario proceguir.

  }

 }

  if (p){
        printf("o numero %d  eh primo.\n",n);}
  else {printf ("o numero %d nao eh primo.\n",n);}
return 0;
}

