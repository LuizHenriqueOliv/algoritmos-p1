// O carro de João consegue percorrer em média 14 km consumindo 1 litro de 
// combustível. Escreva um programa que leia o valor da distância que João vai percorrer 
// durante  uma  viagem e  o  preço  atual  de  um  litro  de  combustível e  calcule  quanto  ele 
// deverá gastar com combustível durante a viagem.
#include <stdio.h>

void main()
{
    const float consumo_medio = 14;
    float dist, val_gas, gasto;
    printf("Informe a distancia que sera percorrida e o valor da gasolina: ");
    scanf("%f%f", &dist, &val_gas);

    gasto = (dist/consumo_medio)*val_gas;

    printf("O valor gasto sera de: %.2f", gasto);
}