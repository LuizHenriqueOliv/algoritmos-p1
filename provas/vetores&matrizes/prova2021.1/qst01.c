// Escreva um programa em C que leia um vetor dez caracteres e verifique se o vetor é ou 
// não  um  palíndromo.  A  verificação  deve  ser  feita  por  meio  de  um  comando  de 
// repetição.

#include <stdio.h>

const int tamanho = 10;

int main(){
    int vetor[tamanho];
    for (int i = 0; i < tamanho; i++){
        printf("Informe um numero: ");
        scanf("%d", &vetor[i]);
    }

    for (int i = 0; i < tamanho/2; i++){
        if (vetor[i] != vetor[tamanho-1-i]){
            printf("Nao eh um palindromo.");
            return 0;
        }
    }
    printf("Eh um palindromo.");
    return 0;
}