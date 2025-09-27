// Escreva um programa que leia dois números inteiros M e N e calcule os valores de M 
// div  N  e  M mod  N.  Os  valores  devem  ser  calculados  sem o  uso  dos operadores div  e 
// mod. 

#include <stdio.h>

int main(){
    int m, n;
    printf("Enter M and N: ");
    scanf("%d%d", &m, &n);
    int div = 0;
    do {
        m -= n;
        div += 1;
    } while (m - n >= 0);

    int mod = m;
    printf("Div: %d\n", div);
    printf("Mod: %d\n", mod);
    return 0;
}