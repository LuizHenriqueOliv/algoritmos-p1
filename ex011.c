// Escreva  um  programa  que  leia  um  valor em  real,  a  cotação  atual  do  dólar  e  calcule  o 
// valor informado pelo usuário em dólares. 
#include <stdio.h>

void main()
{
    float real, dolar, cotacao;
    printf("Informe o valor em reais: ");
    scanf("%f", &real);
    printf("Informe o valor da cotacao atual: ");
    scanf("%f", &cotacao);

    dolar =  real*cotacao;
    printf("O valor em dolar eh: %.3f", dolar);
}