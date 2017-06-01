#include<stdio.h>
#include<stdlib.h>

int main(){
    float soma=1,epidemia=0;
    int ano,anoatual,diamaximo,anototal,mes,mesatual,dia=0,diaatual,Y,X,val=0, val2=0,b1, b2, recebeData1, recebeData2,dataMaior;

    printf("Digite o dia atual: ");
    scanf("%d%d%d",&diaatual,&mesatual,&anoatual);
    recebeData1 = anoatual;

    printf("Digite a data de inicio da epidemia: ");
    scanf("%d%d%d",&dia,&mes,&ano);
    recebeData2 = ano;

    if(((recebeData1%4==0)&&(recebeData1%100!=0))||(recebeData1%400==0))b1=1;
    else b1=0;
    if(((recebeData2%4==0)&&(recebeData2%100!=0))||(recebeData2%400==0))b2=1;
    else b2=0;

    //inicio dos IFs de verificação de data valida.
    Y = mesatual;
    X = mes;
    if(((Y==4)||(Y==6)||(Y==9)||(Y==11)) && (diaatual<=30 && diaatual>=1)) val = 1;
    else{
        if(((Y==1)||(Y==3)||(Y==5)||(Y==7)||(Y==8)||(Y==10)||(Y==12)) && (diaatual<=31 && diaatual>=1)) val = 1;
        else{
            if(((Y==2) && (b1==0)) && (diaatual<=28 && diaatual>=1)) val = 1;
            else{
                if(((Y==2) && (b1==1)) && (diaatual<=29 && diaatual>=1)) val =1;
                else val = 0;
            }
        }
    }

    if(((X==4)||(X==6)||(X==9)||(X==11)) && (dia<=30 && dia>=1)) val2 = 1;
    else{
        if(((X==1)||(X==3)||(X==5)||(X==7)||(X==8)||(X==10)||(X==12)) && (dia<=31 && dia>=1)) val2 = 1;
        else{
            if(((X==2) && (b2==0)) && (dia<=28 && dia>=1)) val2 = 1;
            else{
                if(((X==2) && (b2==1)) && (dia<=29 && dia>=1)) val2 =1;
                else val2 = 0;
            }
        }
    }

    if(ano>anoatual)
    {
        dataMaior = 0;
    }
    else
    {
        if(ano<anoatual)
        {
            dataMaior = 1;
        }
        else
        {
            if((anoatual==ano) && (mesatual>mes))
            {
                dataMaior = 1;
            }
            else
            {
                if((anoatual==ano) && (mesatual<mes))
                {
                    dataMaior = 0;
                }
                else
                {
                    if(((anoatual==ano) && (mesatual==mes)) && (diaatual>dia))
                    {
                        dataMaior = 1;
                    }
                    else
                    {
                        if(((anoatual==ano) && (mesatual==mes)) && (dia>diaatual))
                        {
                            dataMaior = 0;
                        }
                        else
                        {
                            if(((anoatual==ano) && (mesatual==mes)) && (dia==diaatual))
                            {
                                dataMaior = 1;
                            }
                            else
                            {
                                dataMaior = 0;
                            }
                        }
                    }
                }
            }
        }
    }
    //fim dos IFs de verificação de data valida

    if((val==1) && (dataMaior==1) && val2==1)
    {

    do{
        if ((dia==diaatual)&&(ano==anoatual)&&(mes==mesatual)){soma=1;break;}
        else {dia+=1;
        if(mes==1||mes==3||mes==5||mes==7||mes==8||mes==10||mes==12){diamaximo=32;}else {if(mes==2){
            if ((ano%4==0&&ano%100!=0)||ano%400==0){diamaximo=30;}else diamaximo=29;

        }else diamaximo=31;}
        if(mes==12&&dia==diamaximo){ano+=1;mes=0;}
        if(dia==diamaximo){mes+=1;dia=1;}
        soma+=1;
        }
    }while((dia!=diaatual)||(ano!=anoatual)||(mes!=mesatual));
    epidemia = (64*soma) - ((soma*soma*soma)/3); ///Função ambígua
    printf("O numero de pessoas afetadas eh %.0f\n",epidemia);
    }
    if((val==0) || (dataMaior==0) || (val2==0)) printf("Data Invalida\n");

    return 0;
}
