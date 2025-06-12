// Escreva  um  programa  que  leia  um  número  inteiro  positivo  e  calcule  o  número  de 
// algarismos deste número.

#include <stdio.h>

void main()
{
    int n;
    printf("Informe um numero inteiro: ");
    scanf("%d", &n);

    int divisor = 1;
    int contador = 1;
    while((n / divisor) > 9)
    {
        divisor *= 10;
        contador++;
    }

    printf("quantidade de algarismos: %d", contador);
}