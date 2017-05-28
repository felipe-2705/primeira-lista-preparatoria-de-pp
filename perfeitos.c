#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j, divperfeitos=0;
    int k, divabundantes=0;
    int r, divreduzidos=0;

    printf("Esse programa tem o intuito de classificar os numeros no intervalo de 1 a 200 em abundantes, reduzidos ou perfeitos.\n\n");

    for (i=1; i<=200; i++)
    {
        for (j=1; j<i; j++)
        {
            if ((i%j==0))
                divperfeitos= divperfeitos + j;
        }
        if (i == divperfeitos) printf("%d eh um numero perfeito.\n", j);

        divperfeitos=0;

        for (k=1; k<i; k++)
        {
            if ((i%k==0))
                divabundantes = divabundantes + k;
        }
        if (i< divabundantes) printf("%d eh um numero abundante.\n", k);

        divabundantes=0;

        for (r=1; r<i; r++)
        {
            if ((i%r==0))
                divreduzidos = divreduzidos + r;
        }
        if (i> divreduzidos) printf("%d eh um numero reduzido.\n", r);

        divreduzidos=0;
    }

    return 0;
}
