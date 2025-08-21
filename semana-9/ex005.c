// Escreva  um programa que leia  dois  vetores  de  cinco  números  inteiros  cada  e  verifique  quantos números estão presentes nos dois vetores. Você pode supor que dentro de cada vetor não há números repetidos. 
// A verificação deve ser feita por meio de um subprograma.

#include <stdio.h>

const int tamanho = 5;

int calcularNumerosPresentes(int vetorA[tamanho], int vetorB[tamanho]){
    int numerosAmbipresentes = 0;
    for (int i = 0; i < tamanho; i++){
        for (int j = 0; j < tamanho; j++){
            if (vetorA[i] == vetorB[j]){
                numerosAmbipresentes++;
                break;
            }
        }
    }
    return numerosAmbipresentes;
}

int main(){
    int vetorA[tamanho], vetorB[tamanho];
    for (int i = 0; i < tamanho; i++){
        printf("Informe um numero para o vetor A: ");
        scanf("%d", &vetorA);
    }

    for (int i = 0; i < tamanho; i++){
        printf("Informe um numero para o vetor B: ");
        scanf("%d", &vetorB);
    }

    int numerosPresentes = calcularNumerosPresentes(vetorA, vetorB);
    printf("A quantidade de numeros que aparece nos dois vetores eh: %d.", numerosPresentes);
    return 0;
}