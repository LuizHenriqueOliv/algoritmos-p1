#include <stdio.h>

void main()
{
    float tam_arq, taxa_trans; 
    int tempo, horas, minutos, segundos;
    printf("Informe o valor do tamanho do arquivo em Mb e a taxa de transferência em Kb: ");
    scanf("%f%f", &tam_arq, &taxa_trans);

    tempo = (tam_arq*1024)/taxa_trans;

    horas = (tempo / 60) / 60;
    minutos = (tempo / 60) % 60;
    segundos = tempo % 60;
    
    printf("O tempo para transmissao do arquivo sera de %d horas, %d minutos e %d segundos.\n", horas, minutos, segundos);

}