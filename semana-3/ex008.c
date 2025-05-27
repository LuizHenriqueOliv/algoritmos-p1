#include <stdio.h>
#include <string.h>

void main()
{
    char texto[100];
    printf("Informe um texto: ");
    fgets(texto, 100, stdin);

    int tamanho_do_texto = strlen(texto);
    for (int i = 0; i < tamanho_do_texto; i++)
    {
        if (texto[i] >= 'A' && texto[i] <= 'Z')
        {
            texto[i] += 32;  
        }
    }

    printf("%s", texto);
}