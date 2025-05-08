#include <stdio.h>

void main()
{
    int ano;
    printf("informe o valor do ano: ");
    scanf("%d", &ano);

    if (ano % 400 == 0 || (ano % 4 == 0 && ano % 100 != 0))
    {
        printf("Ano bissexto");
    } 
    else 
    {
        printf("Ano nao bissexto");
    }
}