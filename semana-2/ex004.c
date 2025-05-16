#include <stdio.h>

void main()
{
    int saque;
    printf("informe quanto voce quer sacar: ");
    scanf("%d", &saque);

    int celulas_100 = saque / 100;
    int celulas_50 = (saque % 100) / 50;
    int celulas_20 = ((saque % 100) % 50) / 20;
    int celulas_10 = (((saque % 100) % 50) % 20) / 10;

    if (celulas_100 > 0)
    {
        printf("%d celulas de 100R$\n", celulas_100);
    }
    if (celulas_50 > 0)
    {
        printf("%d celulas de 50R$\n", celulas_50);
    }
    if (celulas_20 > 0)
    {
        printf("%d celulas de 20R$\n", celulas_20);
    }
    if (celulas_10 > 0)
    {
        printf("%d celulas de 10R$\n", celulas_10);
    }
}