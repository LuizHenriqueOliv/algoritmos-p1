#include <stdio.h>

void main()
{
    int number;
    printf("Informe um numero inteiro entre 1000 e 9999: ");
    scanf("%d", &number);

    int dig1 = number / 1000;
    int dig2 = (number % 1000) / 100;
    int dig3 = ((number % 1000) % 100) / 10;
    int dig4 = ((number % 1000) % 100) % 10;

    if (dig1 == dig4 && dig2 == dig3)
    {
        printf("o numero informado eh um palindromo");
    }
    else 
    {
        printf("o numero informado nao eh um palindromo");
    }
}