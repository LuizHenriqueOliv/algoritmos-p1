// Escreva um programa que leia dez números inteiros do intervalo entre 1000 e 9999 e, para 
// cada  número,  informe  o  seu  reverso.  O  cálculo  do  reverso  deve  ser  feito  por  meio  de  um 
// subprograma.

#include <stdio.h>

int calcularReverso(int numero){
    int primeiro_dig = numero / 1000;
    int segundo_dig = (numero / 100) % 10;
    int terceiro_dig = (numero / 10) % 10;
    int quarto_dig = numero % 10;

    int reverso = (quarto_dig * 1000) + (terceiro_dig * 100) + (segundo_dig * 10) + (primeiro_dig);
    return reverso;
}

int main(){
    int numero;
    for (int i = 0; i < 10; i++){
        printf("Informe um numero: ");
        scanf("%d", &numero);
        int reverso = calcularReverso(numero);
        printf("%d\n", reverso);
    }
}