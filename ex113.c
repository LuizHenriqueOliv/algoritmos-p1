#include <stdio.h>

int main()
{
    int minimo, limite;
    printf("Informe dois numeros inteiros M e N, sendo M <= N: ");
    scanf("%d%d", &minimo, &limite);

    int divisores = 0;

    for (int i = minimo; i <= limite; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if (i % j == 0)
            {
                divisores++;
            }
        }
        
        if (divisores == 2)
        {
            printf("%d ", i);
        }

        divisores = 0;
    }
    return 0;
}