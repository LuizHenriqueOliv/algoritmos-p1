// Escreva um programa que leia um número inteiro N e imprima os dez 
// primeiros termos da sua tabuada no formato abaixo. No exemplo abaixo, considerou-
// se que o valor de N é 5. 
 
// 5 x 1 = 5 
// 5 x 2 = 10 
// 5 x 3 = 15 
// .... 
// 5 x 10 = 50

#include <stdio.h>

int main()
{
    int n;
    printf("Informe um numeiro inteiro N: ");
    scanf("%d", &n);

    for (int i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d\n", n, i, n*i);
    }
    return 0;
}