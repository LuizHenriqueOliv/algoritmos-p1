#include <stdio.h>

void main()
{
    int idade;
    printf("Informe a idade: ");
    scanf("%d", &idade);

    if (idade <= 12)
    {
        printf("Crianca");
    }
    else if (idade <= 17)
    {
        printf("Adolescente");
    }
    else if (idade <= 59)
    {
        printf("Adulto");
    }
    else 
    {
        printf("Idoso");
    }
}