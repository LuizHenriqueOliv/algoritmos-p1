#include <stdio.h>

void main()
{
    int horas, horas_extras;
    float val_hora, val_simples, val_extra, val_pagamento;
    printf("Informe a quantidade de horas trabalhadas num mes e o valor da hora: ");
    scanf("%d%f", &horas, &val_hora);

    val_simples = val_hora * 160;
    horas_extras = horas - 160;
    val_extra = horas_extras * (val_hora * 1.5);
    val_pagamento = val_simples + val_extra;

    printf("O valor de pagamento eh: %.2fR$", val_pagamento);
}