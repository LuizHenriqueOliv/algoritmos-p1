// Escreva um programa que leia um número inteiro N e verifique se ele pertence à série 
// de Fibonacci. 

#include <stdio.h>

int main()
{
    int n;
    printf("Informe um numero inteiro N: ");
    scanf("%d", &n);

    int anterior = 0;
    int atual = 1;
    int novo = anterior + atual;

    while (novo <= n)
    {
        if (novo == n)
        {
            printf("Pertence a serie.");
            return 0;
        }
        anterior = atual;
        atual = novo;
        novo = anterior + atual;
    }
    printf("Nao pertence a serie.");
}