// Escreva um programa que leia uma matriz quadrada de ordem 4 de números inteiros e, em 
// seguida,  leia  um  número  inteiro  N  e  verifique  em  quantas  linhas  da  matriz  o  número  N 
// aparece. A verificação deve ser feita por meio de uma função.

#include <stdio.h>

const int ordem = 4;

int calcularAparicoesDoNumeroNnaMatriz(int matriz[ordem][ordem], int n){
    int contador = 0;
    for (int i = 0; i < ordem; i++){
        for (int j = 0; j < ordem; j++){
            if (n == matriz[i][j]){
                contador++;
                break;
            }
        }
    }
    return contador;
}

int main(){
    int matriz[ordem][ordem];
    for (int i = 0; i < ordem; i++){
        for (int j = 0; j < ordem; j++){
            printf("Informe um numero: ");
            scanf("%d", &matriz[i][j]);
        }
    }

    int n;
    printf("Informe um numero N: ");
    scanf("%d", &n);
    int aparicoesN = calcularAparicoesDoNumeroNnaMatriz(matriz, n);
    printf("A quantidade de linhas que o numero N aparece eh: %d", aparicoesN);
    return 0;
}