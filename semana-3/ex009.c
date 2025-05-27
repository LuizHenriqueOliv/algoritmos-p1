#include <stdio.h>
#include <string.h>

int main()
{
    // ler um texto
    char texto[50], X;
    printf("Informe o texto: ");
    fgets(texto, 50, stdin);
    fflush(stdin);
    // ler um caractere x
    printf("Informe um caractere X: ");
    scanf(" %c", &X);
    // remover todas as ocorrências do caracter x do texto.
        // criar um loop para tornar cada caractere que deve ser removido como zero. 
        int tamanho_palavra = strlen(texto);
        char PalavraNova[50];
        int j = 0;
        for (int i = 0; i < tamanho_palavra; i++)
        {
            if (texto[i] != X)
            {
                PalavraNova[j] = texto[i];
                j++;
            }
        }

        PalavraNova[j] = '\0';
        printf("%s", PalavraNova);

        return 0;
}