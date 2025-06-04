// Escreva um programa que leia um número inteiro positivo N e imprima os N primeiros 
// números perfeitos. 

#include <stdio.h>

int main()
{
    int n;
    printf("Informe um numero inteiro positivo: ");
    scanf("%d", &n);

    int contador = 0;
    for (int i = 2; contador < n; i++)
    {
        int soma_dos_divisores = 0;
        for (int j = 1; j < i; j++)
        {
            if (i % j == 0)
            {
                soma_dos_divisores += j;
            }
        }
        if (soma_dos_divisores == i)
        {
            printf("%d ", i);
            contador++;
        }
    }
}