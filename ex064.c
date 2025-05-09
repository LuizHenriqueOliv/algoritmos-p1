#include <stdio.h>

void main()
{
    int number;
    printf("Informe um numero: ");
    scanf("%d", &number);

    if (number == 0)
    {
        printf("Numero neutro");
    }
    else if (number > 0)
    {
        printf("Numero positivo");
    }
    else 
    {
        printf("Numero negativo");
    }
}
