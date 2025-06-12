// Escreva um programa que leia dois números inteiros M e N e imprima todos os pares 
// (x, y) possíveis de forma que x e y pertençam ao intervalo [M, N] e y seja sempre maior 
// ou igual a x

#include <stdio.h>

int main()
{
    int minimo, limite;
    printf("Informe dois numeros inteiros M e N: ");
    scanf("%d%d", &minimo, &limite);

    for (int i = minimo; i <= limite; i++)
    {
        for (int j = i; j <= limite; j++)
        {
            printf("%d, %d\n", i, j);
        }
    }

    return 0;
}