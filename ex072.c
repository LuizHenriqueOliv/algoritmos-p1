#include <stdio.h>

void main()
{
    float salario, val_entrada;
    printf("Informe o salario e o valor da entrada: ");
    scanf("%f%f", &salario, &val_entrada);

    float valor_poupado = 0.25 * salario; // valor poupado por mês
    float tempo_total = val_entrada / valor_poupado; // tempo para juntar o dinheiro em meses totais
}