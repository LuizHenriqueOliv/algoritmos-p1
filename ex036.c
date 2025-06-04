// Escreva um programa que leia dois números inteiros e os armazene em duas variáveis 
// a  e  b.  Após  a  leitura,  o  programa  deve  permutar  os  valores  armazenados  nas  duas 
// variáveis.  O  programa  deve  imprimir  os  valores  das  duas  variáveis  antes  e  após  a 
// permutação.
#include <stdio.h>

void main()
{
    int a, b, tmp;
    printf("Informe o valor de A e o valor de B: ");
    scanf("%d%d", &a, &b);

    printf("A = %d e B = %d\n", a, b);

    tmp = a;
    a = b; 
    b = tmp; 

    printf("A = %d e B = %d", a, b);
}