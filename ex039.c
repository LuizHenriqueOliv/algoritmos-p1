// Escreva um programa que leia  o tamanho de um arquivo em MB e a taxa de 
// transmissão da rede em KB/s e calcule o tempo aproximado necessário para a 
// transmissão do arquivo. A resposta deve ser dada através de uma mensagem na forma 
// X horas, Y minutos e Z segundos.  
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