// Escreva um programa que leia uma matriz 3x4 e imprima a posição do maior número 
// de cada uma das linhas da matriz informada.

#include <stdio.h>

const int linhas = 3;
const int colunas = 4;
int main(){
    int matriz[linhas][colunas];
    for (int i = 0; i < linhas; i++){
        for (int j = 0; j < colunas; j++){
            printf("Informe um numero: ");
            scanf("%d", &matriz[i][j]);
        }
    }

    for (int i = 0; i < linhas; i++){
        int maior_numero = matriz[i][0];
        for (int j = 0; j < colunas; j++){
            if (matriz[i][j] > maior_numero){
                maior_numero = matriz[i][j]; 
            }
        }
        printf("O maior numero da linha %d eh: %d\n", i+1, maior_numero);
    }
    return 0;
}