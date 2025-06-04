// Escreva  um  programa  que  leia  o  valor  do  raio  de  uma  esfera  e  determine  o  seu 
// volume.
#include <stdio.h>
#include <math.h>
void main()
{
    float raio, volume;
    const float pi = 3.14;

    printf("Informe o valor do raio: ");
    scanf("%f", &raio);

    // cálculo
    volume = 4.0/3.0 * pi * pow(raio, 3);

    printf("O volume eh: %.2f", volume);
}