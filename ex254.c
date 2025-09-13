// Escreva um subprograma recursivo que receba como entrada dois números inteiros x 
// e y e calcule o valor do produto de x por y. 
#include <stdio.h>

int calcularProduto(int X, int Y){
    if (Y == 1){
        return X;
    }
    if (X == 1){
        return Y;
    }

    return X + calcularProduto(X, Y - 1);
}

int main(){
    int X, Y;
    printf("Informe dois numeros inteiros X e Y: ");
    scanf("%d%d", &X, &Y);

    int produto = calcularProduto(X, Y);
    printf("O produto de %d e %d eh: %d", X, Y, produto);
}