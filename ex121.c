// Escreva um programa que leia o termo inicial e a razão de uma progressão aritmética e 
// um número inteiro N e imprima todos os termos da progressão menores ou iguais a N 
// (caso a razão seja positiva) ou todos os termos maiores ou iguais a N (caso a razão seja 
// negativa).

#include <stdio.h>

int main()
{
    int n;
    float termo_inicial, razao;
    printf("Informe o termo inicial e a razao da PA: ");
    scanf("%f%f", &termo_inicial, &razao);
    printf("Informe um numeiro inteiro N: ");
    scanf("%d", &n);

    float an = termo_inicial;
    if (razao > 0)
    {
        for (int i = 2; an <= n ;i++)
        {
            printf("%.2f ", an);
            an = termo_inicial + (i - 1) * razao;
        }
    }
    else 
    {
        for (int i = 2; an >= n ;i++)
        {
            printf("%.2f ", an);
            an = termo_inicial + (i - 1) * razao;
        }
    }

    return 0;
}