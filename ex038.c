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