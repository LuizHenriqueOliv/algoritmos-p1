#include <stdio.h>

const int quantidade = 10;

void main(){
    int vetor[quantidade];
    for (int i = 0; i < quantidade; i++){
        printf("Informe um numero: ");
        scanf("%d", &vetor[i]);
    }

    int menor_numero = vetor[0];
    int maior_numero = vetor[0];

    for (int i = 0; i < quantidade; i++){
        if (vetor[i] < menor_numero){
            menor_numero = vetor[i];
        }
        if (vetor[i] > maior_numero){
            maior_numero = vetor[i];
        }
    }

    int distancia = maior_numero - menor_numero;
    printf("A distancia entre o maior e o menor eh: %d", distancia);
}