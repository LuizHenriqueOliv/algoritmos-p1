// escreva um programa que leia 2 numeros M e N, e calcule o maior multiplo de N que é menor ou igual a M:
#include <stdio.h>

int main(){
    int primeiro, limite;
    printf("Informe o primeiro numero e o limite: ");
    scanf("%d%d", &primeiro, &limite);
    int maior_multiplo = (limite / primeiro) * primeiro;
    printf("%d", maior_multiplo);
    return 0;
}