// Escreva  um  programa  que  leia  uma  matriz  quadrada  de  ordem  4  de  números  inteiros  e 
// verifique  quantas  linhas  nulas  existem  na  matriz.  O  programa  deve  ter  uma  função  para 
// verificar  se  uma  determinada  linha  da matriz é  nula ou  não.  Uma  linha  da matriz  é  nula  se 
// todos os seus números forem iguais a 0.

#include <stdio.h>

const int ordem = 4;

int calcularLinhasNulas(int matriz[ordem][ordem]){
    int quantidadeLinhasNulas = ordem;

    for (int i = 0; i < ordem; i++){
        for (int j = 0; j < ordem; j++){
            if (matriz[i][j] != 0){
                quantidadeLinhasNulas--;
                break;
            }
        }
    }

    return quantidadeLinhasNulas;
}

int main(){
    int matriz[ordem][ordem];
    for (int i = 0; i < ordem; i++){
        for (int j = 0; j < ordem; j++){
            printf("Informe um numero: ");
            scanf("%d", &matriz[i][j]);
        }
    }

    int QuantidadeLinhasNulas = calcularLinhasNulas(matriz);
    printf("A quantidade de linhas nulas eh: %d", QuantidadeLinhasNulas);
    return 0;
}