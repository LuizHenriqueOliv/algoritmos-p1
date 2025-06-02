#include <stdio.h>

int main()
{
    int n;
    printf("Informe um numero inteiro N: ");
    scanf("%d", &n);

    int anterior = 0;
    int atual = 1;
    int novo = anterior + atual;

    for (int i = 3; i <= n; i++)
    {
        anterior = atual;
        atual = novo;
        novo = anterior + atual;
    }

    printf("%d", novo);
    return 0;
}