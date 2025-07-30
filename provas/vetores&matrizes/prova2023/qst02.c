// Escreva um programa que leia um vetor de 20 caracteres e verifique se é ou não um palíndromo.

#include <stdio.h>

const int tamanho = 20;

int main(){
    int vetor[tamanho];
    for (int i = 0; i < tamanho; i++){
        printf("Informe um numero: ");
        scanf("%d", &vetor[i]);
    }

    for (int i = 0; i < tamanho/2; i++){
        if (vetor[i] != vetor[tamanho-1-i]){
            printf("Nao eh um palindromo.");
            return;
        }
    }
    printf("Eh um palindromo.");
    return 0;
}