#include <stdio.h>

int main()
{
    int anterior = 0;
    int atual = 1;
    int novo = anterior + atual;

    int n;
    printf("Informe um numero inteiro N: ");
    scanf("%d", &n);

    while (novo <= n)
    {
      anterior = atual;
      atual = novo;
      novo = anterior + atual;  
    }

    printf("%d", novo);

    return 0;
}