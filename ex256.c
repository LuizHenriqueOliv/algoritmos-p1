// Escreva  um  subprograma  recursivo  que  receba  como  entrada  uma  matriz  quadrada 
// de  ordem  5  de  números  reais  e  um  número  inteiro  N  (entre  1  e  5)  e  imprima  os  N 
// primeiros números da diagonal principal.
#include <stdio.h>

const int ordem = 5;

void imprimirNtermosDaDiagonal(int matriz[ordem][ordem], int n){
    if (n <= 0) {
        return;
    }

    imprimirNtermosDaDiagonal(matriz, n - 1);

    printf("%d ", matriz[n - 1][n - 1]);
}

int main(){
    int matriz[ordem][ordem], n;
    for (int i = 0; i < ordem; i++){
        for (int j = 0; j < ordem; j++){
            printf("Informe um numero: ");
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("Informe o valor de N: ");
    scanf("%d", &n);

    imprimirNtermosDaDiagonal(matriz, n);
    return 0;
}