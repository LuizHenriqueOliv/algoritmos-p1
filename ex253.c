// Escreva  um  subprograma  recursivo  que  receba  como  entrada  um  número  inteiro  N 
// positivo e provoque um salto de N linhas na tela do usuário. 
#include <stdio.h>

void printarLinhas(int n){
    if (n == 1){
        printf("\n");
        return;
    }

    printf("\n");
    printarLinhas(n - 1);
}

int main(){
    int n;
    printf("Informe um numero: ");
    scanf("%d", &n);

    printarLinhas(n);
    return 0;
}