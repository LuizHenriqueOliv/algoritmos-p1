#include <stdio.h>

void main()
{
    int num1, num2, num3;
    printf("Informe 3 numeros distintos: ");
    scanf("%d%d%d", &num1, &num2, &num3);

    if (num1 > num2 && num1 > num3)
    {
        if (num2 < num3)
        {
            printf("Numero do meio: %d", num3);
        }
        else 
        {
            printf("Numero do meio: %d", num2);
        }
    }
    else if (num2 > num1 && num2 > num3)
    {
        if (num1 < num3)
        {
            printf("Numero do meio: %d", num3);
        }
        else 
        {
            printf("Numero do meio: %d", num1);
        }
    }
    else
    {
        if (num1 < num2)
        {
            printf("Numero do meio: %d", num2);
        }
        else 
        {
            printf("Numero do meio: %d", num1);
        }
    }
}