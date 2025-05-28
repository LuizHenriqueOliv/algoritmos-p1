#include <stdio.h>

int main()
{
    int pares = 0, impares = 0;
    for (int i = 0; i < 10; i++)
    {
        int number;
        scanf("%d", &number);
        if (number % 2 == 0)
        {
            pares++;
        }
        else 
        {
            impares++;
        }
    }

    printf("Pares: %d\nImpares: %d", pares, impares);
    return 0;
}