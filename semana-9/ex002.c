// Escreva um programa que leia um vetor de 10 números inteiros e calcule a média de todos os 
// seus números. O cálculo da média deve ser realizado por meio de uma função. 
#include <stdio.h>

const int tamanho = 10;

int calcularMedia(int vetor[tamanho]){
    int soma = 0;
    for (int i = 0; i < tamanho; i++){
        soma += vetor[i];
    }

    float media = soma / (float)tamanho;
    return media;
}

int main(){
    int vetor[tamanho];
    for (int i = 0 ; i < tamanho; i++){
        printf("Informe um numero: ");
        scanf("%d", &vetor[i]);
    }

    int media = calcularMedia(vetor);
    printf("A media dos numeros no vetor eh: %d.", media);
    return 0;
}