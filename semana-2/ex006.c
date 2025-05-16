#include <stdio.h>

void main()
{
    int horas, minutos, fuso_horario;
    printf("Informe as horas, minutos e o fuso horario: ");
    scanf("%d%d%d", &horas, &minutos, &fuso_horario);

    if (horas + fuso_horario >= 0)
    {
        horas = (horas + fuso_horario) % 24;
    }
    else 
    {
        horas = (24 + (horas + fuso_horario)) % 24;
    }

    printf("%02d:%02d hs", horas, minutos);
}