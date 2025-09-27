// Escreva  um  programa  que  leia  um  número  inteiro  N  e  um  número  inteiro  K  e 
// identifique  o  k-ésimo  algarismo  (da  direita  para  a  esquerda)  do  número  N.  Caso  o 
// valor  de  k  seja  maior  do  que  a  quantidade  de  algarismos  de  N,  a  resposta  do 
// programa deve ser 0. 

#include <stdio.h>

int main(){
    int numero;
    printf("Informe um numero: ");
    scanf("%d", &numero);

    int k;
    printf("informe um numero inteiro k: ");
    scanf("%d", &k);

    for (int i = 0; i < k - 1; i++){
        numero /= 10;
    }

    printf("%d", numero % 10);
    return 0;
}