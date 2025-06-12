#include <stdio.h>

void main()
{
    int n;
    printf("Informe um numero inteiro: ");
    scanf("%d", &n);

    int anterior = 0;
    int atual = 1;
    int novo = anterior + atual;

    while (novo <= n)
    {
        if (novo == n)
        {
            printf("Pertence.");
            return;
        }
        anterior = atual;
        atual = novo;
        novo = anterior + atual;
    }
    printf("Nao pertence.");
}