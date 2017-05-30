#include<stdio.h>
#include<stdlib.h>
#include<math.h>

#define PI 3.141592

int main()
{
    int i,j = 0, sinal = 0;
    double x,angulo, seno=0.0,expoente,fatorial=1, aux1 = 1,aux2;

    printf("Digite o valor do angulo em graus: ");
    scanf("%lf",&angulo);

    x = (PI*angulo)/180.0;
    seno=x;

    for(i=1; i<=10; i++)
    {
        fatorial = 1;
        aux2 = j;
        j = (2*i) + 1;
        expoente = pow(x, j);
        while (j>=1)
        {
            if(j!=aux2)
            {
               fatorial = fatorial * j;
            }
            else
            {
                fatorial *= aux1;
                j = 1;
            }
            j--;
        }
        aux1 = fatorial;
        //Esses dois IFs abaixo, faze a modificação do sinal.
        if(sinal == 1)
        {
            seno = seno + (expoente/fatorial);
            sinal = 0;
        }
        else {if(sinal == 0)
        {
            seno = seno - (expoente/fatorial);
            sinal = 1;
        }
        }
    }
    //seno = x - seno;
    printf("Seno: %.5lf",seno);
    return 0;
    system ("pause");
}
