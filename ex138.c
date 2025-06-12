// Escreva um programa que leia um número inteiro positivo e calcule a soma de todos 
// os seus algarismos. 

#include <stdio.h>

void main()
{
    int n;
    printf("Informe um numero inteiro positivo: ");
    scanf("%d", &n);

    int soma = 0;
    while (n > 0)
    {
        soma += n % 10;
        n /= 10;
    }

    printf("A soma dos algarismos eh: %d", soma);
    
}