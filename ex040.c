// Escreva um programa que leia o valor total que um cliente consumiu em um 
// restaurante  e  determine  o  valor  final  da  sua  conta,  considerando  que  o  restaurante 
// cobra uma taxa de serviço de 10 % e uma taxa de couvert artístico de R$ 10,00.
#include <stdio.h>

void main()
{
    float val_consumo, val_total;
    printf("Informe o valor consumido: ");
    scanf("%f", &val_consumo);

    val_total = (val_consumo * 1.1) + 10;

    printf("O valor total foi de: %.2fR$", val_total);
}