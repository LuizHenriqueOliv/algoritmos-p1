// escreva um programa que leia um valor em celsius e converta para fahrenheit e kelvin
#include <stdio.h>

int main(){
    float celsius, fahrenheit, kelvin;
    printf("Informe o valor em celsius: ");
    scanf("%f", &celsius);

    fahrenheit = 1.8 * celsius + 32;
    kelvin = celsius + 273;

    printf("O valor em fahrenheit eh: %f e o valor em kelvin eh: %f.", fahrenheit, kelvin);
}