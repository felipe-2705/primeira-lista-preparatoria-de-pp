#include <stdio.h>
#include <stdlib.h>



int main ()
{
    int h, i, j, n;
    char c;
    do
    {
        printf("Numero de caracteres: ");
        scanf("%d",&h);
    }
    while(h<=0 || h>26);
    n = h*2;
    for(i = 1; i <= n; i++)
    {
        for(j = 1; j <= n; j++)
        {
            if (i < j && i < n+1-i && i < n+1-j)
            {
                c = i + 64;
                printf("%c",c); //printa a parte de cima
            }
            else
            {
                if (j < n+1-i && j < n+1-j)
                {
                    c = j + 64;
                    printf("%c",c); //printa a parte esquerda
                }
                else
                {
                    if (n+1-i < n+1-j)
                    {
                        c = n+1-i + 64;
                        printf("%c",c); //printa a parte debaixo
                    }
                    else
                    {
                        c = n+1-j + 64;
                        printf("%c",c); //printa a parte direita
                    }
                }
            }
        }
        printf("\n");
    }
    return 0;
}
