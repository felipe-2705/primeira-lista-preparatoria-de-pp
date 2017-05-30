#include<stdio.h>
#include<stdlib.h>
#include<math.h>

#define PI 3.141592

int main()
{
    int i,j = 0, sinal = 0;
    double x,angulo, cos=0.0,expoente,fatorial=1;

    printf("Digite o valor do angulo em graus: ");
    scanf("%lf",&angulo);

    x = (PI*angulo)/180.0;
    cos=1;

    for(i=1; i<=10; i++)
    {
        fatorial = 1;
        j = (2*i);
        expoente = pow(x, j);
        while (j>=1)
        {
            fatorial = fatorial * j;
            j--;
        }
        //Esses dois IFs abaixo, faze a modificação do sinal.
        if(sinal == 1)
        {
            cos = cos + (expoente/fatorial);
            sinal = 0;
        }
        else {if(sinal == 0)
        {
            cos = cos - (expoente/fatorial);
            sinal = 1;
        }
        }
    }
    //cos = x - cos;
    printf("cos: %.5lf",cos);
    return 0;
    system ("pause");
}
