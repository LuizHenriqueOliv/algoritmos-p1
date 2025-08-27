#include <stdio.h>

int calcularKesimoTermo(int numero, int k){
    if (k == 1){
        return numero % 10;
    }
    return calcularKesimoTermo(numero / 10, k - 1);
}

int main(){
    int numero, k;
    printf("Informe um numero: ");
    scanf("%d", &numero);
    printf("Informe um numero K: ");
    scanf("%d", &k);
    int kesimo_termo = calcularKesimoTermo(numero, k);
    printf("O kesimo termo %d eh %d.", k, kesimo_termo);
    return 0;
}