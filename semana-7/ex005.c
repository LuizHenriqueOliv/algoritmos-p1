// Escreva um programa que leia uma matriz quadrada de números inteiros e verifique se 
// ela é simétrica. A matriz é considerada simétrica se Aij = Aji para todos os seus 
// elementos.

#include <stdio.h>

int main(){
    int ordem;
    printf("Informe a ordem da matriz quadrada: ");
    scanf("%d", &ordem);

    int matriz[ordem][ordem];
    for (int i = 0; i < ordem; i++){
        for (int j = 0; j < ordem; j++){
            printf("Informe um numero: ");
            scanf("%d", &matriz[i][j]);
        }
    }

    for (int i = 0; i < ordem; i++){
        for (int j = i+1; j < ordem; j++){
            if (matriz[i][j] != matriz[j][i]){
                printf("A matriz nao eh simetrica.");
                return 0;
            }
        }
    }
    printf("A matriz eh simetrica.");

    return 0;
}