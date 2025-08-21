// Escreva um programa que leia duas  palavras de  até 20 caracteres cada e  verifique  quantas 
// letras  essas  palavras  possuem  em  comum.  A  verificação  deve  ser  feita  por  meio  de  uma 
// função.

#include <stdio.h>
#include <string.h>

const int tamanho = 20;

int calcularLetrasEmComum(char palavraA[tamanho], char palavraB[tamanho]){
    int contador = 0;
    int tamanhoDaPalavraA = strlen(palavraA) - 1, tamanhoDaPalavraB = strlen(palavraB) - 1; 

    for (int i = 0; i < tamanhoDaPalavraA; i++){
        for (int j = 0; j < tamanhoDaPalavraB; j++){
            if (palavraA[i] == palavraB[j]){
                contador++;
                break;
            }
        } 
    }
    return contador;
}

int main(){
    char palavraA[tamanho], palavraB[tamanho];
    printf("Informe a palavra A: ");
    fgets(palavraA, 20, stdin);

    printf("Informe a palavra B: ");
    fgets(palavraB, 20, stdin);

    int letrasEmComum = calcularLetrasEmComum(palavraA, palavraB);
    printf("A quantidade de letras em comum eh: %d.", letrasEmComum);
    return 0;
}