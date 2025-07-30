// Escreva  um  programa  em  C  que  leia  uma  matriz  quadrada  de  ordem  5  de 
// números  reais  e  calcule  o  valor  da  soma  dos  elementos  de  cada  uma  de  suas 
// colunas.

#include <stdio.h>

const int ordem = 5;
int main(){
    float matriz[ordem][ordem];
    for (int i = 0; i < ordem; i++){
        for (int j = 0; j < ordem; j++){
            printf("Informe um numero: ");
            scanf("%f", &matriz[i][j]);
        }
    }

    for (int j = 0; j < ordem; j++){
        float soma = 0;
        for (int i = 0; i < ordem; i++){
            soma += matriz[i][j];
        }
        printf("Soma dos elementos da coluna %d eh: %.2f\n", j+1, soma);
    }
    return 0;
}