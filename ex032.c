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