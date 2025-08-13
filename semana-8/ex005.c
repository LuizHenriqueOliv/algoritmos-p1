// Escreva  um  programa  que  leia  dois  números  inteiros  positivos  M  e  N  e  imprima  todos  os 
// números  primos  que  existem  no  intervalo  [M,  N].  Um  subprograma  deve  ser  usado  para 
// verificar se um determinado número inteiro é primo ou não.

#include <stdio.h>

int verificarPrimo(int numero){
    int divisores = 0;
    for (int i = 1; i <= numero; i++){
        if (numero % i == 0) {
            divisores++;
        }
    }
    if (divisores == 2) {
        return 1;
    } else {
        return 0;
    }
}

int main(){
    int min, max;
    printf("Informe o minimo e o maximo do intervalo: ");
    scanf("%d%d", &min, &max);

    for (int i = min; i <= max; i++){
        if (verificarPrimo(i) == 1){
            printf("%d ", i);
        }   
    }
}