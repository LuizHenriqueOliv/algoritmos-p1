#include <stdio.h>

void main()
{
    int valor_saque;
    printf("Informe o valor a ser sacado: ");
    scanf("%d", &valor_saque);

    int qtd_50 = valor_saque / 50;
    valor_saque = valor_saque % 50;

    int qtd_20 = valor_saque / 20;
    valor_saque = valor_saque % 20;

    int qtd_10 = valor_saque / 10;
    
    printf("Cedulas de 10: %d\n", qtd_10);
    printf("Cedulas de 20: %d\n", qtd_20);
    printf("Cedulas de 50: %d\n", qtd_50);
}