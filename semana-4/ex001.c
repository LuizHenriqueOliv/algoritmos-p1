#include <stdio.h>

int main()
{
    int n;
    printf("Informe N: ");
    scanf("%d", &n);

    int soma = 0;

    for (int i = 1; i <= n; i++)
    {
        soma += i;
    }

    printf("%d", soma);

    return 0;
}