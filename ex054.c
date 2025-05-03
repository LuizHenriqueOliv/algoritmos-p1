#include <stdio.h>

// tempo de viagem em minutos para cada cidade
const int tempo_sousa = 50;
const int tempo_patos = 120;
const int tempo_campina = 150;
const int tempo_jp = 120;

void main()
{
    int horas_saida, minutos_saida;
    printf("Informe o horario de saida (horas e minutos): ");
    scanf("%d%d", &horas_saida, &minutos_saida);  

    // horário de chegada em sousa
    int minutos_chegada_sousa = (minutos_saida + tempo_sousa) % 60;
    int horas_chegada_sousa = (((minutos_saida + tempo_sousa) / 60) + horas_saida) % 24; 

    minutos_saida = minutos_chegada_sousa + 20;
    horas_saida = horas_chegada_sousa;

    // horário de chegada em patos
    int minutos_chegada_patos = (minutos_saida + tempo_patos) % 60;
    int horas_chegada_patos = (((minutos_saida + tempo_patos) / 60) + horas_saida) % 24; 

    minutos_saida = minutos_chegada_patos + 20;
    horas_saida = horas_chegada_patos;

    // horário de chegada em campina
    int minutos_chegada_campina = (minutos_saida + tempo_campina) % 60;
    int horas_chegada_campina = (((minutos_saida + tempo_campina) / 60) + horas_saida) % 24; 

    minutos_saida = minutos_chegada_campina + 20;
    horas_saida = horas_chegada_campina;

    // horário de chegada em joão pessoa
    int minutos_chegada_jp = (minutos_saida + tempo_jp) % 60;
    int horas_chegada_jp = (((minutos_saida + tempo_jp) / 60) + horas_saida) % 24; 

    printf("Chegada em Sousa: %02d:%02d\n", horas_chegada_sousa, minutos_chegada_sousa);
    printf("Chegada em Patos: %02d:%02d\n", horas_chegada_patos, minutos_chegada_patos);
    printf("Chegada em Campina: %02d:%02d\n", horas_chegada_campina, minutos_chegada_campina);
    printf("Chegada em Joao Pessoa: %02d:%02d", horas_chegada_jp, minutos_chegada_jp);
}