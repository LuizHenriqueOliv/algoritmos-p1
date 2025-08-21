// Escreva um programa que leia um vetor de 10 números inteiros e calcule a soma de todos os 
// seus números. O cálculo da soma deve ser realizado por meio de uma função.
#include <stdio.h>

const int tamanho = 10;

int somarNumeros(int vetor[tamanho]){
    int soma = 0;
    for (int i = 0; i < tamanho; i++){
        soma += vetor[i];
    }
    return soma;
}

int main(){
    int vetor[tamanho];
    for (int i = 0; i < tamanho; i++){
        printf("Informe um numero: ");
        scanf("%d", &vetor[i]);
    }

    int somaVetor = somarNumeros(vetor);
    printf("A soma de todos os numeros no vetor eh: %d.", somaVetor);
    return 0;
}