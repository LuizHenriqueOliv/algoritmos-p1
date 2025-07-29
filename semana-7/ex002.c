// Escreva um programa que leia uma matriz quadrada de ordem 3 de números inteiros 
// e um número inteiro N e multiplique a matriz informada pelo número N.
#include <stdio.h>

const int ordem = 3;
int main(){
    int matriz[ordem][ordem], n;
    for (int i = 0; i < ordem; i++){
        for (int j = 0; j < ordem; j++){
            printf("Informe um numero: ");
            scanf("%d", &matriz[i][j]);
        }
    }
    printf("Informe um numero N: ");
    scanf("%d", &n);
    for (int i = 0; i < ordem; i++){
        for (int j = 0; j < ordem; j++){
            matriz[i][j] *= n;
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    return 0;
}