// Escreva um programa que leia um número positivo entre 1 e 9999 e calcule o valor da 
// unidade de milhar, da centena, da dezena e da unidade.
#include <stdio.h>

void main()
{
    int number, milhar, centena, dezena, unidade; 
    printf("Informe o numero de 1 a 9999: ");
    scanf("%d", &number);

    milhar = number/1000; 
    centena = (number - milhar*1000) / 100;
    dezena = ((number - milhar*1000) - centena * 100) / 10;
    unidade = (((number - milhar*1000) - centena * 100) - dezena * 10);

    printf("Unidade de milhar: %d\n", milhar);
    printf("Centena: %d\n", centena);
    printf("Dezena: %d\n", dezena);
    printf("Unidade: %d", unidade);
}