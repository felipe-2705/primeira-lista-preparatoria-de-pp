#include<stdlib.h>
#include<stdio.h>

int main()
{
    int dia1=0, mes1=0, ano1=0, dia2=0, mes2=0, ano2=0;
    int soma=0, j=12, k=0, bi=0, d=0, i=0;
    int b1, b2, recebeData1, recebeData2,dataMaior;
    int Y,X,val=0;

    int epidemia = 0;

    printf("Digite a data atual: ");
    scanf("%d %d %d",&dia1,&mes1,&ano1);
    recebeData1 = ano1;

    printf("Digite a data do inicio da epidemia: ");
    scanf("%d %d %d",&dia2,&mes2,&ano2);
    recebeData2 = ano2;
    if(((recebeData1%4==0)&&(recebeData1%100!=0))||(recebeData1%400==0))b1=1;
    else b1=0;
    if(((recebeData2%4==0)&&(recebeData2%100!=0))||(recebeData2%400==0))b2=1;
    else b2=0;


    //inicio dos IFs de verificação de data valida.
    Y = mes1;
    X = mes2;
    if( (((Y==4)||(Y==6)||(Y==9)||(Y==11)) && ((X==4)||(X==6)||(X==9)||(X==11)))  && ((dia1<=30 && dia1>=1) && (dia2<=30 && dia2>=1)) )
    {
        val = 1;
    }
    else
    {
        if ((((Y==1)||(Y==3)||(Y==5)||(Y==7)||(Y==8)||(Y==10)||(X==12)) && ((X==1)||(X==3)||(X==5)||(X==7)||(X==8)||(X==10)||(X==12)))&& ((dia1<=31 && dia1>=1) && (dia2<=31 && dia2>=1)) )
        {
            val = 1;
        }
        else
        {
            if(((Y==2) && (b1==1)) && (dia1<=29 && dia1>=1))
            {
                val = 1;
            }
            else
            {
                if(((X==2) && (b2==1)) && (dia2<=29 && dia2>=1))
                {
                    val = 1;
                }
                else
                {
                    if(((Y==2) && (b1==0)) && (dia1<=28 && dia1>=1))
                    {
                        val = 1;
                    }
                    else
                    {
                        if(((X==2) && (b2==0)) && (dia2<=28 && dia2>=1))
                        {
                            val = 1;
                        }
                        else
                        {
                            val = 0;
                        }
                    }
                }
            }
        }
    }

    if(ano2>ano1)
    {
        dataMaior = 0;
    }
    else
    {
        if(ano2<ano1)
        {
            dataMaior = 1;
        }
        else
        {
            if((ano1==ano2) && (mes1>mes2))
            {
                dataMaior = 1;
            }
            else
            {
                if((ano1==ano2) && (mes1<mes2))
                {
                    dataMaior = 0;
                }
                else
                {
                    if(((ano1==ano2) && (mes1==mes2)) && (dia1>dia2))
                    {
                        dataMaior = 1;
                    }
                    else
                    {
                        if(((ano1==ano2) && (mes1==mes2)) && (dia2>dia1))
                        {
                            dataMaior = 0;
                        }
                        else
                        {
                            if(((ano1==ano2) && (mes1==mes2)) && (dia2==dia1))
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
    if((val==1) && (dataMaior==1))
    {

        i = ano2;
        while(i<=ano1)
        {
            if(((i%4==0)&&(i%100!=0))||(i%400==0)) soma=soma+366;
            else soma=soma+365;
            i++;
        }

        k=ano1; //O k recebe o valor de ano final para efetuar o calculo do bissexto.
        while(j>=mes1)  //O j esta inicializando com o valor de 12 ele vai decrecer até chegar a ser igual ao mês que o usuario didigitou
        {
            //Verifica se o ano da data atual é bissexto
            if(((k%4==0)&&(k%100!=0))||(k%400==0))bi=1; //nesse caso se ele não é bissexto ele armazena 1 na variavel bi
            else bi=0; //nesse caso se ele não é bissexto ele armazena 0 na variavel bi

            if((j==4)||(j==6)||(j==9)||(j==11))
            {
                /*
                    Se o Valor de J for igual ao valor dos meses Abril, Junho, Setembro, Novembro
                    A variavél soma vai subitrair 30 dias
                */
                soma = soma - 30;
            }
            if((j==2)&&(bi=1))
            {
                /*
                    Se o Valor de J for igual ao valor do mes Fevereiro e o ano for bissexto
                    A variavél soma vai subitrair 29 dias
                */
                soma = soma - 29;
            }
            if((j==2)&&(bi=0))
            {
                /*
                    Se o Valor de J for igual ao valor do mes Fevereiro e o ano não for bissexto
                    A variavél soma vai subitrair 28 dias
                */
                soma = soma - 28;
            }
            if((j==1)||(j==3)||(j==5)||(j==7)||(j==8)||(j==10)||(j==12))
            {
                /*
                    Se o Valor de J for igual ao valor dos meses de Janeiro, Março, Maio, Julho, Agosto, Outubro e Dezembro
                    A variavél soma vai subitrair 31 dias
                */
                soma = soma - 31;
            }
            j--;
        }
        soma=soma+dia1; //Como no laço anterior ele subitriu os dias do mês total digitado pelo usuario, nessa linha ele soma os dias digitados pelo usuario, que foram subitraidos .


        j=1; //A variavel j vai recer o valor de 1
        k=ano2;//krecebe o valor da data do inicio da epidemia
        while(j<=mes2) //Nesse laço a variavel j inicializa com 1 e vai incrementando até ser igual ao valor do mês do inicio da epidemia
        {
            //Verifica se o ano da data atual é bissexto
            if(((k%4==0)&&(k%100!=0))||(k%400==0)) bi=1;//nesse caso se ele não é bissexto ele armazena 1 na variavel bi
            else bi=0;//nesse caso se ele não é bissexto ele armazena 0 na variavel bi

            if((j==4)||(j==6)||(j==9)||(j==11))
            {
                /*
                    Se o Valor de J for igual ao valor dos meses Abril, Junho, Setembro, Novembro
                    A variavél soma vai subitrair 30 dias
                */
                soma = soma - 30;
                d = 0;
                d = 30 - dia2;
            }
            if((j==2)&&(bi=1))
            {
                /*
                    Se o Valor de J for igual ao valor do mes Fevereiro e o ano for bissexto
                    A variavél soma vai subitrair 29 dias
                */
                soma = soma - 29;
                d = 0;
                d = 29 - dia2;
            }
            if((j==2)&&(bi=0))
            {
                /*
                    Se o Valor de J for igual ao valor do mes Fevereiro e o ano não for bissexto
                    A variavél soma vai subitrair 28 dias
                */
                soma = soma - 28;
                d = 0;
                d = 28 - dia2;
            }
            if((j==1)||(j==3)||(j==5)||(j==7)||(j==8)||(j==10)||(j==12))
            {
                /*
                    Se o Valor de J for igual ao valor dos meses de Janeiro, Março, Maio, Julho, Agosto, Outubro e Dezembro
                    A variavél soma vai subitrair 31 dias
                */
                soma = soma - 31;
                d = 0;
                d = 31 - dia2;
            }
            j++;
        }
        soma = soma + d;
        printf("Soma: %d\n",soma);
        epidemia = (64*soma) - ((soma*soma*soma)/3);
        printf("O numero de pessoas atingidas eh: %d\n",abs(epidemia));

    }

    if((val==0) || (dataMaior==0)) printf("Data Invalida\n");

    system("pause");
    return 0;
}
