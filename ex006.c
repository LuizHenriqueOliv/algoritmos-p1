#include <stdio.h>

void main()
{
    float number, antecessor, sucessor;
    // ler um número inteiro
    printf("Insira um número: ");
    scanf("%f", &number);
    antecessor = number - 1;
    sucessor = number + 1;
    // imprimir o valor do antecessor e sucessor
    printf("Antecessor: %.1f\n", antecessor);
    printf("Sucessor: %.1f", sucessor);
}