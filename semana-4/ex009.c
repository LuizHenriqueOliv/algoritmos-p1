#include <stdio.h>
#include <string.h>

int main()
{
    char texto[120];
    printf("Informe um texto: ");
    fgets(texto, 120, stdin);

    int tamanho_texto = strlen(texto);

    for (int i = 0; i < 26; i++)
    {
        int contador = 0;
        for (int j = 0; j < tamanho_texto; j++)
        {
            if (texto[j] == i + 65 || texto[j] == i + 97)
            {
                contador++;
            }
        }
        printf("Letras %c: %d\n", i + 65, contador);
    }

}