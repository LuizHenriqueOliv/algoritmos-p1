#include <stdio.h>

void main()
{
    int number;
    printf("Informe um numero: ");
    scanf("%d", &number);

    if (number % 2 == 0)
    {
        printf("numero par");
    }
    else
    {
        printf("numero impar");
    }
}