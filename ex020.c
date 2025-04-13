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