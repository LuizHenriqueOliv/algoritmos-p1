// Escreva um programa que leia o termo inicial e a razão de uma progressão aritmética e 
// imprima os 5 primeiros termos desta progressão.
#include <stdio.h>

void main()
{
    float termo_inicial, a2, a3, a4, a5,razao;
    printf("Informe o valor do termo inicial e o valor da razão da PA: ");
    scanf("%f%f", &termo_inicial, &razao);
    
    a2 = termo_inicial + (2 - 1) * razao;
    a3 = termo_inicial + (3 - 1) * razao;
    a4 = termo_inicial + (4 - 1) * razao;
    a5 = termo_inicial + (5 - 1) * razao;

    printf("%.2f, %.2f, %.2f, %.2f, %.2f.", termo_inicial, a2, a3, a4, a5);
}