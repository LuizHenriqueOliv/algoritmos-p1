// Escreva um programa que leia a área de uma casa e o valor cobrado por um arquiteto 
// por  cada  metro  quadrado  de  um  projeto  arquitetônico  e  calcule  o  custo  final  do 
// projeto. 
#include <stdio.h>

void main(void)
{
    float area, custo, valor_total;
    printf("Informe a área da casa em metros quadrados e o valor por metro quadrado do projeto: ");
    scanf("%f%f", &area, &custo);
    valor_total = area * custo;
    printf("O custo total eh: %.2fR$\n", valor_total);
}