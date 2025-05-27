#include <stdio.h>
#include <string.h>

void main()
{
    // ler um texto
    char texto[20], X, Y;
    printf("Informe um texto: ");
    scanf("%s", &texto); 
    // ler um caractere X e um caractere Y.
    printf("Informe um caractere X e um caractere Y: ");
    scanf(" %c %c", &X, &Y);


    // fazer a troca de todos os caracteres X no texto pelo caractere Y
    int tamanho_do_texto = strlen(texto);
    for (int i = 0; i < tamanho_do_texto; i++)
    {
        if (texto[i] == X)
        {
            texto[i] = Y;
        }
    }

    printf("%s", texto);
}