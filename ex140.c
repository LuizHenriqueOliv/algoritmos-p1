// Escreva um programa que leia vários números inteiros e calcule a média dos 
// números pares e a média dos números ímpares. O processamento deverá ser 
// encerrado quando for lido o valor 0, que não deverá ser processado.

#include <stdio.h>

int main(){
    float sm_pares = 0, sm_impares = 0;
    int numero, qtd_pares = 0, qtd_impares = 0;
    while (numero != 0) {
        printf("Informe um numero: ");
        scanf("%d", &numero);
        if (numero % 2 == 0){
            sm_pares += numero;
            qtd_pares++; 
        } else {
            sm_impares += numero;
            qtd_impares++;
        }
    }
    float media_pares = sm_pares / qtd_pares;
    float media_impares = sm_impares / qtd_impares;

    printf("A media dos numeros pares eh: %f\n", media_pares);
    printf("A media dos numeros impares eh: %f.", media_impares);
    return 0;
}