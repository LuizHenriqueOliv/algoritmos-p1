// Escreva um programa que leia um valor em segundos e converta para a forma X horas 
// Y  minutos  e  Z segundos. Por exemplo, o valor 3670 equivale  a 1  hora 1 minutos e  10 
// segundos. 
#include <stdio.h>

void main()
{
    int segundos, horas, minutos, z_segundos;
    printf("Informe o valor em segundos: ");
    scanf("%d", &segundos);

    horas = (segundos / 60) / 60; 
    minutos = (segundos / 60) % 60;
    z_segundos = segundos % 60;

    printf("Horas: %d\n", horas);
    printf("Minutos: %d\n", minutos);
    printf("Segundos: %d\n", z_segundos);
}