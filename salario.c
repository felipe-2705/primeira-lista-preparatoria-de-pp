#include <stdio.h>
#include <stdlib.h>

int main()
{
    float salariohoje, salarioinicial;
    char nome[30];
    int anos;

    printf("Digite apenas o primeiro nome do engenheiro de software: ");
    scanf("%s", nome);
    printf("Digite a quantidade de anos trabalhada: ");
    scanf("%d", &anos);

    salarioinicial= 90000;
    salariohoje = 0.08*anos*salarioinicial + 0.01*anos*salarioinicial + salarioinicial;

    if (salariohoje>150000) printf("Voce execedeu o teto salarial maximo de R$150000 para engenheiros de software.");
    else printf("%s trabalhou por %d anos. Salario atual: R$%.2f/anos", nome, anos, salariohoje);

    return 0;
}
