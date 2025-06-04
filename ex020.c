// Em  uma  determinada  cidade,  cada  m2  de  um  terreno  está  avaliado  em  R$  300,00. 
// Escreva  um  programa  que  leia  o  comprimento  e  a  largura  de  um  terreno  localizado 
// nesta cidade e calcule o seu valor de mercado.
#include <stdio.h>

void main()
{
    float comprimento, largura, area, valor;
    printf("Informe o comprimento e a largura: ");
    scanf("%f%f", &comprimento, &largura);
    area = comprimento*largura;
    valor = area*300;

    printf("O valor desse terreno eh: %.2f", valor);
}