// Escreva  um  subprograma  recursivo  que  receba  como  entrada  o  termo  inicial  e  a 
// razão  de  uma  progressão  aritmética  e  um  número  inteiro  positivo  N  e  calcule  o 
// enésimo termo da progressão.
#include <stdio.h>

int calcularEnesimoTermo(int termo_inicial, int razao, int n){
    if (n == 1){
        return termo_inicial;
    }

    return razao + calcularEnesimoTermo(termo_inicial, razao, n - 1);
}

int main(){
    int termo_inicial, razao, n;
    printf("Informe o termo inicial e a razao da PA: ");
    scanf("%d%d", &termo_inicial, &razao);
    printf("Informe o termo que quer descobrir: ");
    scanf("%d", &n);

    int enesimoTermo = calcularEnesimoTermo(termo_inicial, razao, n);
    printf("O enesimo termo eh: %d", enesimoTermo);
}