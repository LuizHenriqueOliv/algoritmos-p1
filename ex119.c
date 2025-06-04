// Escreva  um  programa  que  leia  um  número  inteiro  N  e  imprima  todos  os  termos  da 
// série de Fibonacci que são menores ou iguais a N. 

#include <stdio.h>

int main()
{
    int n;
    printf("Informe um numero inteiro N: ");
    scanf("%d", &n);

    int anterior = 0;
    int atual = 1;
    int novo = anterior + atual;
    
    if (n <= 0)
    {
        printf("Nenhum numero a imprimir.");
        return 0;
    }
    
    while (atual <= n)
    {
        printf("%d ", atual);
        anterior = atual;
        atual = novo;
        novo = anterior + atual;
    } 
}