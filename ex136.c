// Escreva  um  programa  que  leia  um  número  inteiro  positivo  N  e  calcule  o  seu  valor 
// correspondente em binário. 

#include <stdio.h>

int main(){
    int numero, resto, binario = 0, posicao = 1;
    printf("Informe um numero: ");
    scanf("%d", &numero);

    while (numero > 0) {
        resto = numero % 2;
        binario += resto * posicao;
        numero /= 2;
        posicao *= 10;
    } 

    printf("Valor em Binario: %d", binario);

    return 0;
}