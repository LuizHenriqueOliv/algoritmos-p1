// Escreva um subprograma recursivo que receba como entrada um número inteiro não 
// negativo e calcule o seu fatorial.

#include <stdio.h>
int calcularFatorial(int numero){
    if (numero == 1 || numero == 2){
        return numero;
    }

    return numero * calcularFatorial(numero - 1);
}

int main(){
    int numero;
    printf("Informe um numero: ");
    scanf("%d", &numero);

    int fatorial = calcularFatorial(numero);
    printf("O fatorial de %d eh: %d.", numero, fatorial);
}