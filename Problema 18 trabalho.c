#include<stdlib.h>
#include<stdio.h>

int main(){
    int i=1, n=0, k=1, x=0;

    printf("Digite um numero: "); scanf("%d",&n);

    while(i<=n){
        while(k<=i){
            x++;
            printf("%02d ",x);
            k++;

        }
        k=1;
        printf("\n");
        i++;
    }

}
