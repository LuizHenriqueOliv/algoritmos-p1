// Escreva um programa que leia um valor em polegadas e o converta para centímetros, 
// considerando que uma polegada equivale a 2.54 cm.
#include <stdio.h>

void main()
{
    float inch, cm;
    printf("Informe o valor em polegadas: ");
    scanf("%f", &inch);

    cm = inch*2.54;
    printf("O valor em centimetros eh: %.2f", cm);
}