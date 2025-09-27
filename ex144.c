// Escreva  um  programa  que  leia  um  número  inteiro  N  e  calcule  o  primeiro  número 
// natural cujo fatorial é maior do que N.

#include <stdio.h>

int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    int k = 1;
    int factorial_number = 1;

    while (factorial_number <= n){
        k++;
        factorial_number *= k; 
    }

    printf("%d", k);
    return 0;
}