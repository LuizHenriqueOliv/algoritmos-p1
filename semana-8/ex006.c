// Escreva  um  programa  que  leia  dois  números  inteiros  não  negativos  M  e  N  e  calcule  Mn.  O 
// cálculo da potenciação deve ser feito por meio de um subprograma.

#include <stdio.h>

int calcularPotenciacao(int m, int n){
    int potencia = 1;
    for (int i = 0; i < n; i++){
        potencia *= m;
    }

    return potencia;
}

int main(){
    int m, n;
    printf("Informe o valor de M e N: ");
    scanf("%d%d", &m, &n);

    int potencia = calcularPotenciacao(m, n);
    printf("%d elevado a %d eh: %d", m, n, potencia);
}