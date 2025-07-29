#include <stdio.h>

void main(){
    int vetorA[10], vetorB[10];
    for (int i = 0; i < 10; i++)
    {
        printf("Informe um numero para o vetor A: ");
        scanf("%d", &vetorA[i]);
    }

    for (int i = 0; i < 10; i++)
    {
        printf("Informe um numero para o vetor B: ");
        scanf("%d", &vetorB[i]);
    }

    int vetorC[10];
    for (int i = 0; i < 10; i++)
    {
        vetorC[i] = vetorA[i] + vetorB[i];
    }

    for (int i = 0; i < 10; i++)
    {
        printf("Vetor C posicao %d: %d\n", i + 1, vetorC[i]);
    }

}