#include <stdio.h>

int main()
{
    int minimo, limite, X;
    printf("Informe dois numeros inteiros M e N: ");
    scanf("%d%d", &minimo, &limite);

    printf("Informe um numero inteiro X: ");
    scanf("%d", &X);

    for (int i = minimo; i <= limite; i++)
    {
        if (X % i == 0)
        {
            printf("%d\n", i);
        }
    }
    return 0;
}