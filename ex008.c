// Escreva um programa que leia o valor de uma temperatura em Celsius e calcule o seu 
// valor correspondente em Fahrenheit e em Kelvin.
#include <stdio.h>

void main()
{
    float celsius, fahrenheit, kelvin; 
    printf("Insira a temperatura em Celsius: ");
    scanf("%f", &celsius);
    fahrenheit = 1.8*celsius + 32;
    kelvin = celsius + 273;
 
    printf("A temperatura em Fahrenheit eh: %.2f\n", fahrenheit);
    printf("A temperatura em kelvin eh: %.2f", kelvin);
}