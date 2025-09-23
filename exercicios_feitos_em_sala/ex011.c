#include <stdio.h>
#include <string.h>

int main(){
    char nome[50];
    printf("Informe o nome: ");
    gets(nome);
    int ultima_letra = strlen(nome) - 1;
    printf("A ultima letra eh: %c", nome[ultima_letra]);
    return 0;
}