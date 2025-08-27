#include <stdio.h>

void imprimirPiramides(int n){
    if (n == 1){
        printf("*\n");
        return;
    }

    imprimirPiramides(n - 1);

    for (int i = 0; i < n; i++){
        printf("*");
    }
    printf("\n");
}

int main(){
    int n;
    printf("Informe um numero: ");
    scanf("%d", &n);

    imprimirPiramides(n);
    return 0;
}