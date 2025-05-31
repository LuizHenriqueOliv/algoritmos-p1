#include <stdio.h>

int main()
{
    int number;
    printf("Informe um numero entre 1000 e 9999: ");
    scanf("%d", &number);

    if (number > 9999 || number < 1000)
    {
        printf("Informe um numero valido.");
        return 1;
    }

    int dig1 = number / 1000;
    int dig2 = (number % 1000) / 100;
    int dig3 = ((number % 1000) % 100) / 10;
    int dig4 = number % 10;

    if (dig1 == dig4 && dig2 == dig3)
    {
        printf("Eh um palindromo.");
    }
    else 
    {
        printf("Nao eh um palindromo.");
    }
}