#include <stdio.h>
#include <string.h>

void trocarCaracteres(char palavra[], char c1, char c2){
    int tamanhoPalavra = strlen(palavra);
    for (int i = 0; i < tamanhoPalavra; i++){
        if (palavra[i] == c1){
            palavra[i] = c2;
        }
    }
}

int main(){
    char palavra[20], c1, c2;
    printf("Informe uma palavra: ");
    fgets(palavra, 20, stdin);

    printf("Informe um caractere: ");
    scanf(" %c", &c1);

    printf("Informe outro caractere: ");
    scanf(" %c", &c2);

    printf("Antes da troca: %s", palavra);
    trocarCaracteres(palavra, c1, c2);
    printf("Depois da troca: %s", palavra);
    return 0;
}
