#include <stdio.h>

int main()
{
    int n;
    printf("Informe um Numero inteiro positivo N: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        printf("%d\n", i * 2);
    }
}