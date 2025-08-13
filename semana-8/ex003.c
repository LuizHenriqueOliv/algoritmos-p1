// Escreva um programa que leia um programa que leia uma temperatura em Celsius e calcule 
// o seu valor correspondente em Fahrenheit e em Kelvin. O programa deve ter um subprograma 
// para  converter  uma  temperatura  de  Celsius  para  Fahrenheit  e  outro  para  converter  uma 
// temperatura de Celsius para Kelvin. 

#include <stdio.h>

float calcularFahrenheit(float temp_celcius){
    float temp_fahrenheit = (temp_celcius * 1.8) + 32;
    return temp_fahrenheit;
}

float calcularKelvin(float temp_celcius){
    float temp_kelvin = temp_celcius + 273.15;
    return temp_kelvin;
}

int main(){
    float temp_celsius;
    printf("Informe a temperatura: ");
    scanf("%f", &temp_celsius);

    float temp_fahrenheint = calcularFahrenheit(temp_celsius);
    float temp_kelvin = calcularKelvin(temp_celsius);

    printf("Temperatura em Fahrenheit: %f\n", temp_fahrenheint);
    printf("Temperatura em Kelvin: %f", temp_kelvin);
}