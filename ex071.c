#include <stdio.h>

void main()
{
    int number1, number2, number3;
    printf("Informe os tres numeros: ");
    scanf("%d%d%d", &number1, &number2, &number3);

    if (number1 == number2 || number2 == number3 || number1 == number3)
    {
        printf("Insira numeros diferentes");
    }
    else if (number1 > number2 && number1 > number3)
    {
        printf("O numero %d eh o maior", number1);
    }
    else if (number2 > number1 && number2 > number3)
    {
        printf("O numero %d eh o maior", number2);
    }
    else if (number3 > number2 && number3 > number1)
    {
        printf("O numero %d eh o maior", number3);
    }
}