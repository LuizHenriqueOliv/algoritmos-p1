#include <stdio.h>

void main()
{
    int n;
    printf("Informe um numero inteiro: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf(" ");
        }
        for (int k = n - i; k > 0; k--)
        {
            printf("*");
        }
        printf("\n");
    }
}