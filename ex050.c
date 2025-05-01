#include <stdio.h>

void main()
{
    int hora_chegada, minutos_chegada, senha;
    printf("Informe a hora chegada, o minuto de chegada e a senha recebida: ");
    scanf("%d%d%d", &hora_chegada, &minutos_chegada, &senha);

    int tempo_espera = (senha - 1) * 25; // tempo de espera em minutos

    int hora_espera = tempo_espera / 60;
    int minutos_espera = tempo_espera % 60;

    int hora_atendimento = (hora_chegada + hora_espera + ((minutos_chegada + minutos_espera) / 60)) % 24;
    int minuto_atendimento = (minutos_chegada + minutos_espera) % 60;

    printf("O horario de atendimento eh: %d:%d", hora_atendimento, minuto_atendimento);
}