#include <stdio.h>

const int qtd_numeros = 10;

void main()
{
    int numeros[10];
    for (int i = 0; i < qtd_numeros; i++){
        printf("Informe um numero: ");
        scanf("%d", &numeros[i]);
    }

    int n;
    printf("Informe um numero inteiro n: ");
    scanf("%d", &n);

    printf("O %dº numero eh: %d", n, numeros[n-1]);
}