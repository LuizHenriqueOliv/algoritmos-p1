#include <stdio.h>

void main(){
    int vetA[5], vetB[5];
    for (int i = 0; i < 5; i++){
        printf("Informe um numero para preencher o vetor A: ");
        scanf("%d", &vetA[i]);
    }
    for (int i = 0; i < 5; i++){
        printf("Informe um numero para preencher o vetor B: ");
        scanf("%d", &vetB[i]);
    }

    int vetC[10];
    for (int i = 0; i < 10; i++){
        if (i % 2 == 0){
            vetC[i] = vetA[i / 2]; 
        } else {
            vetC[i] = vetB[i / 2];
        }
    }

    for (int i = 0; i < 10; i++){
        printf("%d ", vetC[i]);
    }
}