// Escreva um programa que leia o termo inicial e a razão de uma progressão aritmética 
// e, em seguida, leia um número inteiro N e verifique se o número N pertence (ou não) à 
// progressão.

#include <stdio.h>

int main()
{
    float termo_inicial, razao;
    printf("Informe o termo inicial e a razao da PA: ");
    scanf("%f%f", &termo_inicial, &razao);

    int N;
    printf("Informe um numeiro inteiro: ");
    scanf("%d", &N);

    float n = ((N - termo_inicial) / razao) + 1;

    if (n == (int)n)
    {
        printf("O numero %d pertence a PA.", N);
    }
    else 
    {
        printf("O numero %d nao pertence a PA.", N);
    }
    return 0;
}