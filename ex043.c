#include <stdio.h>

void main()
{
    float val_atual, val_ant, var;
    printf("Informe o valor atual de uma acao e o valor anterior: ");
    scanf("%f%f", &val_atual, &val_ant);

    var = ((val_atual - val_ant) / val_ant) * 100;
    printf("A variacao foi de: %.2f%%", var);

}