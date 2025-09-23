#include <stdio.h>

int main(){
    int num;
    printf("Informe o valor de um numero inteiro: ");
    scanf("%d", &num);
    int resto = num % 2;
    if (resto == 0){
        printf("o numero %d eh par.", num);
    } else {
        printf("O numero %d eh impar.", num);
    }
}