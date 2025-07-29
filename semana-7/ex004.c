// Escreva um programa que leia uma matriz quadrada de ordem 3 de números inteiros e 
// verifique quantas linhas nulas existem na matriz.

#include <stdio.h>

const int ordem = 3;

int main(){
    int matriz[ordem][ordem];
    for (int i = 0; i < ordem; i++){
        for (int j = 0; j < ordem; j++){
            printf("Informe um numero: ");
            scanf("%d", &matriz[i][j]);
        }
    }

    int linhas_nulas = 0;
    for (int i = 0; i < ordem; i++){
        int nula = 1;
        for (int j = 0; j < ordem; j++){
            if (matriz[i][j] != 0){
                nula = 0;
                break;
            }
        }
        if (nula == 1){
            linhas_nulas++;
        }
    }

    printf("A quantidade de linhas nulas na matriz eh: %d", linhas_nulas);
    return 0;
}