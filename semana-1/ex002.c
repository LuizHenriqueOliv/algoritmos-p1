#include <stdio.h>

void main()
{
    int idade;
    printf("Informe a idade da pessoa: ");
    scanf("%d", &idade);

    if (idade <= 12)
    {
        printf("Crianca");
    }
    else if (idade >= 13 && idade <= 17)
    {
        printf("Adolescente");
    }
    else if (idade >= 18 && idade <= 59)
    {
        printf("Adulto");
    }
    else 
    {
        printf("Idoso");
    }
}