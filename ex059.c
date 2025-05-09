#include <stdio.h>

void main()
{
    float num1, num2;
    printf("informe 2 numeros: ");
    scanf("%f%f", &num1, &num2);

    if (num1 > num2)
    {
        printf("o numero: %.1f eh o maior", num1);
    }
    else if (num2 > num1)
    {
        printf("O numero: %.1f eh o maior", num2);
    }
    else
    {
        printf("os dois numeros sao iguais");
    }
}