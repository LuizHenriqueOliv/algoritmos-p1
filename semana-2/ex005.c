#include <stdio.h>
#include <string.h>

void main()
{
    char verbo[20];
    printf("Informe o verbo: ");
    scanf("%s", verbo);

    int tamanho_verbo = strlen(verbo);
    char radical[20]; 
    strncpy(radical, verbo, tamanho_verbo - 2);
    radical[tamanho_verbo - 2] = '\0';

    // verifica se a última letra termina em 'r', se sim: verbo no infinitivo
    if (verbo[tamanho_verbo - 1] == 'r' || verbo[tamanho_verbo - 1] == 'R')
    {
        // verifica qual a penúltima letra para saber a conjugação
        if (verbo[tamanho_verbo - 2] == 'a' || verbo[tamanho_verbo - 2] == 'A')
        { 
            printf("Eu %so\n", radical);
            printf("Tu %sas\n", radical);
            printf("ele/ela %sa\n", radical);
            printf("Nos %samos\n", radical);
            printf("Vos %sais\n", radical);
            printf("eles/elas %sam", radical);
        }
        else if (verbo[tamanho_verbo - 2] == 'e' || verbo[tamanho_verbo - 2] == 'E')
        { 
            printf("Eu %so\n", radical);
            printf("Tu %ses\n", radical);
            printf("ele/ela %se\n", radical);
            printf("Nos %semos\n", radical);
            printf("Vos %seis\n", radical);
            printf("eles/elas %sem", radical);
        }
        else if (verbo[tamanho_verbo - 2] == 'i' || verbo[tamanho_verbo - 2] == 'I')
        { 
            printf("Eu %so\n", radical);
            printf("Tu %ses\n", radical);
            printf("ele/ela %se\n", radical);
            printf("Nos %simos\n", radical);
            printf("Vos %sis\n", radical);
            printf("eles/elas %sem", radical);
        }
    }
}