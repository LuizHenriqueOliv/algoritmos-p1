// Escreva um programa que leia o nome e a quantidade de votos recebidos por cada um 
// dos três candidatos a prefeito de uma cidade e calcule o percentual de votos recebidos 
// por  cada  candidato.  Para  resolver  esse  programa,  considere  que  não  houve  votos 
// brancos e nem nulos. 
#include <stdio.h>

void main()
{
    int cand1, cand2, cand3, votos_total;
    float perc1, perc2, perc3;
    char nome_cand1[50], nome_cand2[50], nome_cand3[50];

    printf("Informe o nome e a quantidade de votos do candidato 1: ");
    scanf("%s%d", &nome_cand1, &cand1);

    printf("Informe o nome e a quantidade de votos do candidato 2: ");
    scanf("%s%d", &nome_cand2, &cand2);

    printf("Informe o nome e a quantidade de votos do candidato 3: ");
    scanf("%s%d", &nome_cand3, &cand3);

    votos_total = cand1 + cand2 + cand3;

    perc1 = ((float)cand1/votos_total)*100;
    perc2 = ((float)cand2/votos_total)*100;
    perc3 = ((float)cand3/votos_total)*100;

    printf("O percentual de votos do candidato %s eh: %.2f%%\n", nome_cand1 ,perc1);
    printf("O percentual de votos do candidato %s eh: %.2f%%\n", nome_cand2 ,perc2);
    printf("O percentual de votos do candidato %s eh: %.2f%%\n", nome_cand3 ,perc3);
}