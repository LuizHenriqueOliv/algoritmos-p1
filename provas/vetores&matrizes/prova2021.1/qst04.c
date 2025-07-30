// Escreva um programa em C que leia dois vetores de 5 números inteiros e cada e 
// imprima  os  números  que  aparecem  no  primeiro  vetor  mas  não  aparecem  no 
// segundo.  Você  pode  supor  que  dentro  de  um  mesmo  vetor  não  há  números 
// repetidos

#include <stdio.h>

const int tamanho = 5;

int main(){
    int vetorA[tamanho], vetorB[tamanho];
    for (int i = 0; i < tamanho; i++){
        printf("Vetor A: ");
        scanf("%d", &vetorA[i]);
    }

    for (int i = 0; i < tamanho; i++){
        printf("Vetor B: ");
        scanf("%d", &vetorB[i]);
    }

    for (int i = 0; i < tamanho; i++){
        int igual = 0;
        for (int j = 0; j < tamanho; j++){
            if (vetorA[i] == vetorB[j]){
                igual = 1;
                break;
            }
        }
        if (igual == 0){
            printf("%d ", vetorA[i]);
        }
    }
    return 0;
}