#include <stdio.h>
#include <stdlib.h>

int main()
{

float n, i, raiz=1;

    printf("Digite um numero: \n");
    scanf("%f", &n);

    for(i=0; i<10; ++i)
    {
        (raiz= raiz/2 + n/(2*raiz));
    }

    printf("A raiz quadrada de %.3f eh %.5f \n", n, raiz);



return 0;
}

