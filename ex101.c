#include <stdio.h>

int main()
{
    int n;
    printf("Informe um numero inteiro positivo: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        printf("%d\n", (i * 2) - 1);
    }
    return 0;
}