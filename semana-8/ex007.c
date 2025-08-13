// Escreva um programa que leia cinco números inteiros positivos e, para cada valor, verifique 
// se ele pertence (ou não) à série de Fibonacci. A verificação deve ser feita por meio de uma 
// função,  que  deve  retornar  o  valor  1  (quando  o  número  pertencer  à  série)  ou  0  (quando  o 
// número não pertencer à série). 

#include <stdio.h>

int verificaFibonacci(int numero){
    int anterior = 0;
    int atual = 1;
    int proximo = anterior + atual;
    while (proximo <= numero){
        if (numero == proximo){
            return 1;
        }
        anterior = atual;
        atual = proximo;
        proximo = anterior + atual;
    }

    return 0;
}

int main(){
    int numero;
    for (int i = 0; i < 5; i++){
        printf("Informe um numero: ");
        scanf("%d", &numero);
        if (verificaFibonacci(numero) == 1){
            printf("Pertence a serie.\n");
        } else {
            printf("Nao pertence a serie.\n");
        }
    }
}