// Escreva  um  programa  em  C  que  leia  uma  matriz  quadrada  de  ordem  5  de 
// números inteiros e um número inteiro N e verifique em quantas linhas da matriz 
// o número N aparece.

#include <stdio.h>

const int ordem = 5;
int main(){
    int matriz[ordem][ordem];
    for (int i = 0; i < ordem; i++){
        for (int j = 0; j < ordem; j++){
            printf("Informe um numero: ");
            scanf("%d", &matriz[i][j]);
        }
    }
    int n;
    printf("Informe um numero inteiro N: ");
    scanf("%d", &n);

    int contador = 0;
    for (int i = 0; i < ordem; i++){
        for (int j = 0; j < ordem; j++){
            if (n == matriz[i][j]){
                contador++;
                break;
            }
        }
    }

    printf("O numero N aparece em %d linha(s).", contador);
    return 0;
}