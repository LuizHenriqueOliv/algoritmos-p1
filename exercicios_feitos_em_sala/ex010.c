// strings
#include <stdio.h>
#include <string.h>

int main(){
    char nome[50];
    printf("informe o nome: ");
    gets(nome);
    printf("Olá, %s", nome);
    return 0;
}