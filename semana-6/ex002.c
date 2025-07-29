#include <stdio.h>

void main(){
    int vetor[10];
    for (int i = 0; i < 10; i++){
        printf("Informe um numero inteiro: ");
        scanf("%d", &vetor[i]);
    }

    int n;
    printf("Agora informe um numero inteiro N: ");
    scanf("%d", &n);

    for (int i = 0; i < 10; i++){
        if (n == vetor[i]) {
            printf("%d ", i + 1);
        }
    }
}