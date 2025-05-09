#include <stdio.h>

void main()
{
    int num1, num2, num3;
    printf("Informe os 3 numeros: ");
    scanf("%d%d%d", &num1, &num2,  &num3);

    if (num1 == num2 || num1 == num3 || num2 == num3)
    {
        printf("Informe numeros diferentes");
    }
    else if (num1 > num2 && num1 > num3)
    {
        printf("O numero %d eh o maior\n", num1);
        if (num2 < num3)
        {
            printf("O numero %d eh o menor", num2);
        }
        else 
        {
            printf("O numero %d eh o menor", num3);
        }
    }
    else if (num2 > num1 && num2 > num3)
    {
        printf("O numero %d eh o maior\n", num2);
        if (num1 < num3)
        {
            printf("O numero %d eh o menor", num1);
        }
        else 
        {
            printf("O numero %d eh o menor", num3);
        }
    }
    else 
    {
        printf("O numero %d eh o maior\n", num3);
        if (num1 < num2)
        {
            printf("O numero %d eh o menor", num1);
        }
        else 
        {
            printf("O numero %d eh o menor", num2);
        }
    }
}