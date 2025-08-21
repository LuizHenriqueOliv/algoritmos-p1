// Escreva um programa que leia uma matriz quadrada de ordem 4 de números inteiros e calcule 
// a quantidade de números primos que existem em cada coluna da matriz. O  programa deve 
// ter um subprograma que calcula a quantidade de números primos que existem em uma linha 
// específica da matriz.
#include <stdio.h>

const int ordem = 4;

int ehPrimo(int numero){
    int divisores = 0;
    for (int i = 1; i < numero; i++){
        if (numero % i == 0){
            divisores++;
        }
    }

    if (divisores == 2){
        return 1;
    } else {
        return 0;
    }
}

int calcularQtdeNumerosPrimos(int matriz[ordem][ordem], int linha){
    int quantidadePrimos = 0;
    for (int j = 0; j < ordem; j++){
        if (ehPrimo(matriz[linha][j]) == 1){
            quantidadePrimos++;
        }
    }

    return quantidadePrimos;
}

int main(){
    int matriz[ordem][ordem];
    for (int i = 0; i < ordem; i++){
        for (int j = 0; j < ordem; j++){
            printf("Informe um numero: ");
            scanf("%d", &matriz[i][j]);
        }
    }

    for (int i = 0; i < ordem; i++){
        printf("A quantidade de primos na linha %d eh: %d.\n", i + 1, calcularQtdeNumerosPrimos(matriz, i));
    }
    return 0;   
}