#include <stdio.h>

void main()
{
    int number;
    printf("Informe um numero: ");
    scanf("%d", &number);

    if (number > 0)
    {
        int val_absoluto = number;
        printf("o valor absoluto eh: %d", val_absoluto);
    }
    else if (number < 0) 
    {
        int val_absoluto = number * (-1);
        printf("o valor absoluto eh: %d", val_absoluto);
    }
    else
    {
        int val_absoluto = 0;
        printf("o valor absoluto eh: %d", val_absoluto);
    }
}