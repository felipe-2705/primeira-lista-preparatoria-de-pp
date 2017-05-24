#include <stdio.h>
#include <stdlib.h>

int main()
{

    int h, em, i=0, ea; //h = altura, em = espaço do meio, i = linha, ea = espaço antes
    do
    {
        printf("Digite um numero natural impar: ");
        scanf("%d", &h);
    }
    while(h%2 != 1 || h < 0);

    if(h==1) printf("*\n"); //caso único do 1
    else
    {
        for(i = 1; i <= h; i++)
        {
            if(h == 3) //caso do 3, pois 3/2 tem resto 1 e da problema na linha 25 pra frente
            {
                printf(" * \n* *\n *\n");
                break;
            }
            if(i==1) printf("%*c*\n", h/2+1, ' ');
            if(i < h/2) //a metade de cima
            {
                em = 1;
                for(ea = h/2; ea >= 1; ea--)
                {
                    printf("%*c*%*c*", ea, ' ', em, ' ');
                    em += 2;
                    printf("\n");
                }
                em -=4;
            }
            for(ea+=2; ea <= h/2; ea++) // a metade de baixo
            {
                printf("%*c*%*c*\n", ea, ' ', em, ' ');
                em -= 2;
            }
            printf("%*c*\n", h/2+1, ' ');
            break;
        }
    }
    return 0;
}
