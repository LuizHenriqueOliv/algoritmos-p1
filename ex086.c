#include <stdio.h>

void main()
{
    char caractere;
    printf("Informe um caractere: ");
    scanf("%c", &caractere);

    if (caractere >= 'a' && caractere <= 'z')
    {
        printf("letra minuscula");
    }
    else if (caractere >= 'A' && caractere <= 'Z')
    {
        printf("Letra maiuscula");
    }
    else if (caractere >= '0' && caractere <= '9')
    {
        printf("Numeral");
    }
    else 
    {
        printf("Outros tipos de caractere");
    }
}