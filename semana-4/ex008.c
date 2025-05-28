#include <stdio.h>

int main()
{
    char texto[500];
    printf("Informe um texto: ");
    scanf("%s", texto);

    int qtd_caracteres = 0;
    int i = 0;

    while (texto[i] != '\0')
    {
        qtd_caracteres++;
        i++;
    }

    printf("Quantidade de caracteres: %d", qtd_caracteres);

}