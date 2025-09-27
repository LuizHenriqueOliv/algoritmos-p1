// Escreva  um  programa  que  imprima  todos  os  palíndromos  existentes  no  intervalo 
// [1000, 9999]. Um número é  palíndromo quando o seu valor lido da esquerda para a 
// direita  é  idêntico  ao  valor  lido  da  direita  para  a  esquerda.  Exemplos:  1001,  2002, 
// 1221, 8888.

#include <stdio.h>

int main(){
    for (int i = 1; i < 10; i++){
        for (int j = 1; j < 10; j++){
            printf("%d%d%d%d\n", i, j, j, i);
        }
    }
    return 0;
}