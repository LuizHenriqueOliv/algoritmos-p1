#include <stdio.h>

void main()
{
    // ler os 10 numeros inteiros
    int number[10];
    for (int i = 0; i < 10; i++)
    {
        printf("Informe um numero inteiro: ");
        scanf("%d", &number[i]);
    }

    // calcular e printar o fatorial de cada número
    for (int i = 0; i < 10; i++)
    {
        int n = number[i]; 
        int n_fatorial = 1;

        for (int j = 0; j < n; j++)
        {
            n_fatorial *= (n - j);
        }
        printf("O fatorial de %d eh %d\n", number[i], n_fatorial);
    }
}