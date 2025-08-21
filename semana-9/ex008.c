// Escreva um programa que leia um texto de até 20 caracteres e, em seguida, leia um caractere 
// e verifique quantas vezes esse caractere apareceu no texto informado. A verificação deve ser 
// feita por meio de uma função.

#include <stdio.h>
const int tamanho = 20;

int calcularCaracteresNumTexto(char texto[tamanho], char caractere){
    int contador = 0;
    for (int i = 0; i < tamanho; i++){
        if (texto[i] == caractere){
            contador++;
        }
    }
    return contador;
}

int main(){
    char texto[20], caractere;
    printf("Informe um texto: ");
    fgets(texto, 20, stdin);
    printf("Informe um caractere: ");
    scanf("%c", &caractere);

    int qtdeCaractere = calcularCaracteresNumTexto(texto, caractere);
    printf("A quantidade de caracteres %c no texto eh: %d.", caractere, qtdeCaractere);
    return 0;
}