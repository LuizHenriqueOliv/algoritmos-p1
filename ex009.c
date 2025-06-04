// Escreva  um  programa  que leia o valor  de  uma  distância  percorrida em  km  e  o  tempo 
// gasto em horas e calcule a velocidade média em m/s.
#include <stdio.h>

void main()
{
    float distancia, tempo, velocidade_media;
    printf("Insira o valor percorrido em KM e o tempo gasto em horas: ");
    scanf("%f%f", &distancia, &tempo);
    velocidade_media = (distancia/tempo)/3.6;
    printf("A velocidade media eh: %.2fm/s", velocidade_media);
}