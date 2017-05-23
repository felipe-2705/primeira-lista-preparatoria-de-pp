//lista preparatoria de pp, exercicio p7
#include <stdio.h>

int main ()
{
    int x,x1,x2,y,semente=1;
    printf("descubra se um numero eh semente de outro.\n");

    printf("digite o primeiro numero (positivo) :");
    scanf("%d",&x);
    printf("digite o segundo  numero (positivo): ");
    scanf("%d",&y);
//verificaçao dos numeros digitados
    if (x<0)
    {
        do
        {
            printf("erro... digite dois numeros positivos.\n");
            printf("digite o primeiro numero novamente:\n");
            scanf("%d",&x);
        }
        while(x<0);
    }
    if (y<0)
    {
        do
        {
            printf("erro... digite dois numeros positivos.\n");
            printf("digite o segundo  numero novamente:\n");
            scanf("%d",&y);
        }
        while (y<0);
    }
    x1=x;
    do
    {
        x2=x1%10;   // x2 acumulará o valor dos algorismos individuais de x
        x1=x1/10;    // x1 acumulará o valor restante sem o ultimo algorismo
        semente=semente*x2; //semente acumulará o resultado do produto dos algorismos de x .

    }
    while (x1>=1);
    semente = semente*x; // multiplicamos o produto dos algorismos pelo numero x original.
              if (semente == y ){printf("o numero %d eh semente do numero %d",x,y);}
              else printf("o numero %d nao eh semente do numero %d",x,y);
    return 0 ;
}
