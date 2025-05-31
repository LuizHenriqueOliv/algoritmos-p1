#include <stdio.h>

int main()
{
    int mes;
    printf("Informe um numero entre 1 a 12, referente ao mes: ");
    scanf("%d", &mes);
    if (mes > 12 || mes < 1)
    {
        printf("Numero invalido.");
        return 1;
    }

    if (mes <= 3)
    {
        printf("1o trimestre.");
    }
    else if (mes <= 6)
    {
        printf("2o trimestre.");
    }
    else if (mes <= 9)
    {
        printf("3o trimestre.");
    }
    else
    {
        printf("4o trimestre.");
    }
    return 0;
}