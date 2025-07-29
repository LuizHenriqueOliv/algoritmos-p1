// Escreva um programa que leia uma matriz 6x10 de caracteres, na qual a primeira linha 
// representa o gabarito de uma prova e cada uma das demais linhas representa o cartão 
// de respostas de um candidato, e calcule o número de acertos de cada candidato

#include <stdio.h>
const int linhas = 6;
const int colunas = 10;
int main(){
    char matriz[linhas][colunas];
    for (int i = 0; i < linhas; i++){
        for (int j = 0; j < colunas; j++){
            printf("Informe uma letra: ");
            scanf(" %c", &matriz[i][j]);
        }
    }

    for (int i = 1; i < linhas; i++){
        int acertos = 0;
        for (int j = 0; j < colunas; j++){
            if (matriz[i][j] == matriz[0][j]){
                acertos++;
            }
        }
        printf("Quantidade de acertos do Candidato %d: %d\n", i, acertos);
    }
    return 0;
}