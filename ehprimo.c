//exercicio p4 da lista de exercicios preparatorios
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main (){
int n, r,primo = 0,teste;
printf ("descubra se um numero inteiro eh primo :\n");
printf("digite o numero desejado :");
scanf("%d",&n);
 r = sqrt (n);
 do {
        int d=0;
  teste = n%d++;
  if (teste){
    printf ("o numero %d nao eh primo \n",n);
    primo = 1;
  }

 }while ( r == d || primo == 1 );
 printf ("o numero %d  eh primo .\n",n);


return 0;
}

