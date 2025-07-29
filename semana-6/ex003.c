#include <stdio.h>

void main(){
    int vetor[10];
    for (int i = 0; i < 10; i++){
        printf("Informe um numero: ");
        scanf("%d", &vetor[i]);
    }

    int contador = 0;

    for (int i = 0; i < 5; i++){
        if (vetor[i] == vetor[9 - i]){
            contador++;
        }
    }

    if (contador == 5){
        printf("Eh um palindromo.");
    } else {
        printf("Nao eh um palindromo.");
    }
}