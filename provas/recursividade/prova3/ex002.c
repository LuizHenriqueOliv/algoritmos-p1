#include <stdio.h>

int procurarAlgarismo(int numero, int K){
    if (K == 1){
        return numero % 10;
    }

    return procurarAlgarismo(numero / 10, K - 1);
}

int main(){
    int numero, K;
    printf("Informe um numero: ");
    scanf("%d", &numero);
    printf("Informe o termo que quer buscar: ");
    scanf("%d", &K);

    int algarismo = procurarAlgarismo(numero, K);
    printf("O termo %d do numero %d eh %d.", K, numero, algarismo);
}