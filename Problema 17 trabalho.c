#include<stdlib.h>
#include<stdio.h>

int main(){
    int dia1=0, mes1=0, ano1=0, dia2=0, mes2=0, ano2=0;
    int i=0, soma=0, j=12, k=0, bi=0, cont=0;

    int epidemia = 0;

    printf("Digite a data atual: ");
     scanf("%d%*c %d%*c %d",&dia1,&mes1,&ano1);

    printf("Digite a data do inicio da epidemia: ");
    scanf("%d%*c %d%*c %d\n",&dia2,&mes2,&ano2);

    i = ano2;
    while(i<=ano1){
        if(((i%4==0)&&(i%100!=0))||(i%400==0)){
            soma=soma+366;
        }else soma=soma+365;
        i++;
    }

    k=ano1;
    while(j>=mes1){
        if(((k%4==0)&&(k%100!=0))||(k%400==0)){
           bi=1;
        }else bi=0;
        if((j==4)||(j==6)||(j==9)||(j==11)){
           soma = soma - 30;
        }
        if((j==2)&&(bi=1)){
           soma = soma - 29;
        }
        if((j==2)&&(bi=0)){
           soma = soma - 28;
        }
        if((j==1)||(j==3)||(j==5)||(j==7)||(j==8)||(j==10)||(j==12)){
           soma = soma - 31;
        }
        j--;
    }
    soma=soma+dia1;

    j=12;
    k=ano1;
    while(j>=mes2){
        if(((k%4==0)&&(k%100!=0))||(k%400==0)){
           bi=1;
        }else bi=0;
        if((j==4)||(j==6)||(j==9)||(j==11)){
           cont = cont + 30;
        }
        if((j==2)&&(bi=1)){
           cont = cont + 29;
        }
        if((j==2)&&(bi=0)){
           cont = cont + 28;
        }
        if((j==1)||(j==3)||(j==5)||(j==7)||(j==8)||(j==10)||(j==12)){
           cont = cont + 31;
        }
        j--;
    }
    cont = cont-dia2;
    if(((k%4==0)&&(k%100!=0))||(k%400==0)) bi=1;
    else bi=0;

    if(bi==1){
       cont = 365-cont;
    }else cont = 366-cont;

    soma = soma-cont;

    epidemia = (64*soma) - ((soma^3)/3);


    printf("O numero de pessoas atingidas eh: %d\n",epidemia);
    system("pause");
}
