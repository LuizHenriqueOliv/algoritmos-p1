// Escreva um programa que leia 10 números inteiros e, para cada número lido, calcule o 
// seu fatorial. 

#include <stdio.h>

int main()
{
    for (int i = 0; i < 10; i++)
    {
        int n;
        printf("Informe um numero inteiro: ");
        scanf("%d", &n);

        int fatorial = 1;
        for (int j = 0; j < n; j++)
        {
            fatorial *= n - j;
        }
        printf("O fatorial de %d eh %d\n", n, fatorial);
    }
    return 0;
}