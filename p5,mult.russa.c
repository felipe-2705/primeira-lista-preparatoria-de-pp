#include <stdio.h>
#include <stdlib.h>
//faz uma multiplica�ao ao estilo russo , proposto no exercicio p5 da lista .
int main()
{
    int n,n1,i,m,soma=0;//n= ao numero dividido,n1=o numero que ser� multiplicado e "soma" � o resultado da soma daqueles numeros q possuem seu correspondente impar.
    printf ("multiplica�ao russa de numeros inteiros.\n");
    printf("digite os numeros inteiros a serem multiplicados (sem o indicador de operador) :");
    scanf("%d %d",&n,&n1);
    i= abs(n);// usarei o valor absoluto visto que � uma multiplica�ao e os sinais nao afetam o valor absoluto do produto.
    m=abs(n1);
    do
    {
        if(i%2)
        {
            soma=soma+m;
        }
        i=i/2;
        m=m*2;
    }
    while(i>=1);   // ja que a divisao do termo da esquerda deve ocorrer ate um , colocamos como condi�ao de repeti�ao n ser maior ou igual a um.
    if ((n>0&&n1>0)||(n<0&&n1<0))printf("o numero %d multiplicado por %d eh:%d",n,n1,soma);
    if ((n<0&&n1>0)||(n>0&&n1<0))printf ("o numero %d multiplicado por %d eh :%d",n,n1,soma*-1);
    if (n==0 || n1==0)printf("o numero %d multiplicado por %d eh:%d",n,n1,soma);
    return 0 ;

}
