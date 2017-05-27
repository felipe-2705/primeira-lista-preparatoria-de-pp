#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, j;
    do{
    printf("Digite um valor n: ");
    scanf("%d", &n);
    }while(n <= 0);
    for(i=0; i < n; i++)
    {
        for(j=0; j< 3*n; j++)
        {
            if(i == j && i >= n/2 || j == i+n || j == i+(2*n) && i < n/2 || i == 3*n - j -1 && i >= n/2 || i == 2*n - j-1 || i == n - j -1 && i < n/2)
            {
                putchar(' ');
            }
            else
                printf("%c", 0xC5);
        }
        printf("\n");
    }
    return 0;
}
