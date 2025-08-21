// Escreva  um  programa  que  leia  um  texto  de  até  20  caracteres  e  verifique  quantas  letras 
// minúsculas foram informadas no texto. A verificação deve ser feita por meio de uma função.

#include <stdio.h>

const int tamanho = 20;

int calcularLetrasMaiusculas(char texto[tamanho]){
    int contador = 0;
    for (int i = 0; i < tamanho; i++){
        if (texto[i] >= 65 && texto[i] <= 90){
            contador++;
        }
    }
    return contador;
}

int main(){
    char texto[tamanho];
    printf("Informe um texto: ");
    fgets(texto, 20, stdin);

    int quantidadeLetrasMaiusculas = calcularLetrasMaiusculas(texto);
    printf("A quantidade de letras maiusculas eh: %d.", quantidadeLetrasMaiusculas);
}