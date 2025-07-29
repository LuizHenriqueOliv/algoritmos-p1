// Escreva um programa que leia uma matriz 4x4 de números inteiros e, em seguida, leia 
// um número inteiro N e verifique em quantas colunas da matriz o número N aparece.

#include <stdio.h>
const int ordem = 4;
int main(){
    int matriz[ordem][ordem];
    for (int i = 0; i < ordem; i++){
        for (int j = 0; j < ordem ; j++){
            printf("Informe um numero: ");
            scanf("%d", &matriz[i][j]);
        }
    }

    int n;
    printf("Informe um numero inteiro: ");
    scanf("%d", &n);

    int count = 0;
    for (int j = 0; j < ordem; j++){
        for (int i = 0; i < ordem; i++){
            if (matriz[i][j] == n){
                count++;
                break;
            }
        }
    }

    printf("A quantidade de colunas que o numero N aparece eh: %d", count);
    return 0;
}