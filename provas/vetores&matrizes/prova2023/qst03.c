// Escreva um programa que leia uma matriz quadrada de ordem 100 de números reais e identifique a posição do maior número de cada linha da matriz

#include <stdio.h>
const int ordem = 100;
int main(){
    float matriz[ordem][ordem];
    for (int i = 0; i < ordem; i++){
        for (int j = 0; j < ordem; j++){
            printf("Informe um numero: ");
            scanf("%f", &matriz[i][j]);
        }
    }

    for (int i = 0; i < ordem; i++){
        float maior_numero = matriz[i][0];
        int posicao = 1;
        for (int j = 1; j < ordem; j++){
            if (matriz[i][j] > maior_numero){
                maior_numero = matriz[i][j];
                posicao = j+1;
            }
        }
        printf("Posicao do maior numero da linha %d eh: %d\n", i+1, posicao);
    }
    return 0;
}