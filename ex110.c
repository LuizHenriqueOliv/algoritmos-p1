#include <stdio.h>

int main()
{
    int n;
    printf("Informe um numero inteiro N: ");
    scanf("%d", &n);

    int fatorial = 1;

    for (int i = 0; i < n; i++)
    {
        fatorial *= n - i;
    }

    printf("O fatorial de %d eh %d", n, fatorial);
    return 0;
}