#include <stdio.h>
#include <string.h>
#include <windows.h>

int main()
{
    SetConsoleOutputCP(CP_UTF8);

    char verbo[20];
    printf("Informe um verbo: ");
    scanf("%s", verbo);

    int tamanho_do_verbo = strlen(verbo);
    char radical[tamanho_do_verbo - 1];
    
    strncpy(radical, verbo, tamanho_do_verbo - 2);
    radical[tamanho_do_verbo - 2] = '\0';

    if (verbo[tamanho_do_verbo - 2] == 'a' || verbo[tamanho_do_verbo - 2] == 'A')
    {
        printf("Presente do indicativo\n");
        printf("Eu %so\n", radical);
        printf("Tu %sas\n", radical);
        printf("Ele/Ela %sa\n", radical);
        printf("Nós %samos\n", radical);
        printf("Vós %sais\n", radical);
        printf("Eles/Elas %sam\n", radical);

        printf("\nPretérito perfeito\n");
        printf("Eu %sei\n", radical);
        printf("Tu %saste\n", radical);
        printf("Ele/Ela %sou\n", radical);
        printf("Nós %samos\n", radical);
        printf("Vós %sastes\n", radical);
        printf("Eles/Elas %saram\n", radical);

        printf("\nFuturo do presente\n");
        printf("Eu %sarei\n", radical);
        printf("Tu %sarás\n", radical);
        printf("Ele/Ela %sará\n", radical);
        printf("Nós %saremos\n", radical);
        printf("Vós %sareis\n", radical);
        printf("Eles/Elas %sarão\n", radical);
    }
    else if (verbo[tamanho_do_verbo - 2] == 'e' || verbo[tamanho_do_verbo - 2] == 'E')
    {
        printf("Presente do indicativo\n");
        printf("Eu %so\n", radical);
        printf("Tu %ses\n", radical);
        printf("Ele/Ela %se\n", radical);
        printf("Nós %semos\n", radical);
        printf("Vós %seis\n", radical);
        printf("Eles/Elas %sem\n", radical);

        printf("\nPretérito perfeito\n");
        printf("Eu %si\n", radical);
        printf("Tu %seste\n", radical);
        printf("Ele/Ela %seu\n", radical);
        printf("Nós %semos\n", radical);
        printf("Vós %sestes\n", radical);
        printf("Eles/Elas %seram\n", radical);

        printf("\nFuturo do presente\n");
        printf("Eu %serei\n", radical);
        printf("Tu %serás\n", radical);
        printf("Ele/Ela %será\n", radical);
        printf("Nós %seremos\n", radical);
        printf("Vós %sereis\n", radical);
        printf("Eles/Elas %serão\n", radical);
    }
    else
    {
        printf("Presente do indicativo\n");
        printf("Eu %so\n", radical);
        printf("Tu %ses\n", radical);
        printf("Ele/Ela %se\n", radical);
        printf("Nós %simos\n", radical);
        printf("Vós %sis\n", radical);
        printf("Eles/Elas %sem\n", radical);

        printf("\nPretérito perfeito\n");
        printf("Eu %si\n", radical);
        printf("Tu %siste\n", radical);
        printf("Ele/Ela %siu\n", radical);
        printf("Nós %simos\n", radical);
        printf("Vós %sistes\n", radical);
        printf("Eles/Elas %siram\n", radical);

        printf("\nFuturo do presente\n");
        printf("Eu %sirei\n", radical);
        printf("Tu %sirás\n", radical);
        printf("Ele/Ela %sirá\n", radical);
        printf("Nós %siremos\n", radical);
        printf("Vós %sireis\n", radical);
        printf("Eles/Elas %sirão\n", radical);
    }
}