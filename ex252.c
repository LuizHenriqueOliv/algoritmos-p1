// Escreva  um  subprograma  recursivo  que  receba  como  parâmetros  de  entrada  dois 
// números inteiros M e N e calcule a soma de todos os números do intervalo [M, N]. 
#include <stdio.h>

int calcularSomaIntervalo(int min, int max){
    if (min == max){
        return min;
    }

    return min + calcularSomaIntervalo(min + 1, max);
}

int main(){
    int min, max;
    printf("Informe o minimo e o maximo do intervalo: ");
    scanf("%d%d", &min, &max);

    int somaDoIntervalo = calcularSomaIntervalo(min, max);
    printf("A soma do intervalo eh: %d", somaDoIntervalo);
}