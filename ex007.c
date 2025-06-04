// Escreva um programa que leia o valor da base e da altura de um triângulo e calcule a  
// sua área. 
#include <stdio.h>

void main()
{
    float base, altura, area;
    // ler o valor da base e da altura
    printf("Insira o valor da base: ");
    scanf("%f", &base);
    printf("Insira o valor da altura: ");
    scanf("%f", &altura);

    // calcular o valor da area
    area = (base*altura)/3;
    printf("Area: %.2f", area);
}