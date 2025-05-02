#include <stdio.h>

const int tempo_atendimento = 15; // tempo de atendimento de cada guichê
const int qtd_guiches = 5; 

void main()
{
    // pegando a posição do usuário na fila
    int posicao;
    printf("Informe a sua posicao na fila: ");
    scanf("%d", &posicao);

    // cálculo do guichê que será atendido
    int guiche = ((posicao - 1) % qtd_guiches) + 1;

    // cálculo do tempo de atendimento ****Necessita de correção
    int tempo_espera = ((posicao - 1) / qtd_guiches) * tempo_atendimento; // tempo de espera em minutos 

    // transformação do tempo em minutos totais para horas e minutos.
    int horas_espera = tempo_espera / 60;
    int minutos_espera = tempo_espera % 60;

    printf("Seu guiche eh o numero: %d e seu tempo de espera sera de: %dh%dmin", guiche, horas_espera, minutos_espera);
}