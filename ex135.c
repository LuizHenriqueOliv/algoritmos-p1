// Escreva um programa que simule uma votação. O programa deve computar o voto de 
// 20  eleitores  e  depois  deve  imprimir  a  quantidade  e  o  percentual  de  votos  recebidos 
// por cada candidato, bem como a quantidade e o percentual de votos nulos. As opções 
// de voto são: 
// [1] João Borracheiro 
// [2] Zé do caminhão 
// [3] Maria da bodega 
// [4] Ana 

#include <stdio.h>

void main()
{
    int joao_borracheiro = 0, ze_do_caminhao = 0, maria_da_bodega = 0, ana = 0, nulos = 0;
    for (int i = 0; i < 20; i++)
    {
        int numero;
        printf("Informe seu voto: ");
        scanf("%d", &numero);

        switch (numero)
        {
            case 1: joao_borracheiro++; break;
            case 2: ze_do_caminhao++; break;
            case 3: maria_da_bodega++; break;
            case 4: ana++; break;
            default: nulos++;
        }
    }

    float perc_joao = (joao_borracheiro / (float)20) * 100;
    float perc_ze = (ze_do_caminhao / (float)20) * 100;
    float perc_maria = (maria_da_bodega / (float)20) * 100;
    float perc_ana = (ana / (float)20) * 100;
    float perc_nulos = (nulos / (float)20) * 100;

    printf("Joao borracheiro: %d votos (%.2f%%)\n", joao_borracheiro, perc_joao);
    printf("Ze do caminhao: %d votos (%.2f%%)\n", ze_do_caminhao, perc_ze);
    printf("Maria da bodega: %d votos (%.2f%%)\n", maria_da_bodega, perc_maria);
    printf("Ana: %d votos (%.2f%%)\n", ana, perc_ana);
    printf("Nulos: %d (%.2f%%)", nulos, perc_nulos);
}