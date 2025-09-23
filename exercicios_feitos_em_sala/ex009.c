// escreva um programa que leia o tamanho de arquivo em MB e a taxa de download em kb/s e calcule o tempo necessário para realizar o download do arquivo, o tempo deve ser informado no formato x horas, y minutos e z segundos.
#include <stdio.h>

int main(){
    int tamanho, taxa, tempo_total, horas, minutos, segundos;
    printf("informe o tamanho do arquivo e a taxa de download: ");
    scanf("%d%d", &tamanho, &taxa);
    tempo_total = (tamanho * 1024) / taxa;

    // calculo do tempo
    horas = tempo_total / 3600;
    minutos = (tempo_total % 3600) / 60;
    segundos = (tempo_total % 360) % 60;

    printf("Tempo: %d horas, %d minutos, %d segundos.", horas, minutos, segundos);
    return 0;
}