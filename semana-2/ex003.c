#include <stdio.h>

void main()
{
    char estado_civil;
    printf("Informe seu estado civil (C - Casado / S - Solteiro / D - Divorciado / V - Viúvo): ");
    scanf("%c", &estado_civil);

    if (estado_civil == 'c' || estado_civil == 'C')
    {
        printf("Casado");
    }
    else if (estado_civil == 's' || estado_civil == 'S')
    {
        printf("Solteiro");
    }
    else if (estado_civil == 'd' || estado_civil == 'D')
    {
        printf("Divorciado");
    }
    else if (estado_civil == 'v' || estado_civil == 'V')
    {
        printf("Viuvo");
    }
}