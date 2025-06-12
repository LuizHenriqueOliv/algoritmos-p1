#include <stdio.h>
#include <string.h>

void main()
{ 
    char palavra[100];
    printf("Insira uma palavra: ");
    scanf("%s", &palavra);
    int tamanho = strlen(palavra);

    printf("O comprimento da palavra eh: %d", tamanho);
}