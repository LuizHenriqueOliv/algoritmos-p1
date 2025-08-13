// Escreva  um  programa  que  leia  três  números  inteiros  e  calcule  o  mínimo  múltiplo  comum 
// desses números. O cálculo do MMC deve ser feito por meio de um subprograma. 

#include <stdio.h>

int calcularMMC(int n1, int n2, int n3){
    int minimo_multiplo, i = 1;
    do {
        minimo_multiplo = n1 * i;
        i++;
    }
    while (minimo_multiplo % n2 != 0 || minimo_multiplo % n3 != 0);

    return minimo_multiplo;
}

int main(){
    int n1, n2, n3;
    printf("Informe 3 numeros inteiros: ");
    scanf("%d%d%d", &n1, &n2, &n3);

    int mmc = calcularMMC(n1, n2, n3);
    printf("MMC: %d", mmc);
}