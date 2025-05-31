#include <stdio.h>

int main()
{
    int horas, minutos, fuso_horario;
    printf("Informe as horas e os minutos no formato (hh mm): ");
    scanf("%d%d", &horas, &minutos);

    printf("Informe o fuso horario: ");
    scanf("%d", &fuso_horario);

    horas += fuso_horario;
    horas = (horas + 24) % 24;

    printf("Horário corrigido: %02d:%02d", horas, minutos);
}