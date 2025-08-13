// Escreva  um  programa  que  leia  um  número  inteiro  N  e  calcule  a  quantidade  de  algarismos 
// desse  número.  O  cálculo  da  quantidade  de  algarismos  deve  ser  feito  por  meio  de  um 
// subprograma.

#include <stdio.h>

int calcularAlgarismos(int numero){
    int n = 1, contador = 0;
    while (numero / n > 0){
        contador++;
        n *= 10;
    }

    return contador; 
}

int main(){
    int numero;
    printf("Informe um numero: ");
    scanf("%d", &numero);

    int qtde_algarismos = calcularAlgarismos(numero);

    printf("A quantidade de algarismos desse numero eh: %d", qtde_algarismos);
}