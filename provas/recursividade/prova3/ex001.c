#include <stdio.h>

int calcularAlgarismos(int numero){
    if (numero / 10 == 0){
        return 1;
    }

    return 1 + calcularAlgarismos(numero / 10);
}

int main(){
    int numero;
    printf("Informe um numero: ");
    scanf("%d", &numero);

    int algarismos = calcularAlgarismos(numero);
    printf("Quantidade de algarismos: %d", algarismos);
}