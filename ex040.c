#include <stdio.h>

void main()
{
    float val_consumo, val_total;
    printf("Informe o valor consumido: ");
    scanf("%f", &val_consumo);

    val_total = (val_consumo * 1.1) + 10;

    printf("O valor total foi de: %.2fR$", val_total);
}