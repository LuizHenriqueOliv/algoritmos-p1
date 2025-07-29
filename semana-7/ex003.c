// Escreva  um  programa  que  leia  duas  matrizes  quadradas  de  ordem  3  de  números 
// inteiros e gere uma terceira matriz representando a soma das duas matrizes 
// informadas. 

#include <stdio.h>

const int ordem = 3;

int main(){
    int matrizA[ordem][ordem], matrizB[ordem][ordem], matrizSoma[ordem][ordem];
    for (int i = 0; i < ordem; i++){
        for (int j = 0; j < ordem; j++){
            printf("Informe um numero para a matriz A: ");
            scanf("%d", &matrizA[i][j]);
        }
    }

    for (int i = 0; i < ordem; i++){
        for (int j = 0; j < ordem; j++){
            printf("Informe um numero para a matriz B: ");
            scanf("%d", &matrizB[i][j]);
        }
    }

    for (int i = 0; i < ordem; i++){
        for (int j = 0; j < ordem; j++){
            matrizSoma[i][j] = matrizA[i][j] + matrizB[i][j];
            printf("%d ", matrizSoma[i][j]);
        }
        printf("\n");
    }
    return 0;
}

