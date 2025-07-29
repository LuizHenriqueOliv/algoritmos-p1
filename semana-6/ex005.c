#include <stdio.h>

const int qtd_questoes = 10;
const int qtd_candidatos = 5;

void main(){
    char gabarito[10];
    for (int i = 0; i < qtd_questoes; i++){
        printf("Questao %d: ", i + 1);
        scanf(" %c", &gabarito[i]);
    }

    char candidato[qtd_candidatos][qtd_questoes];
    for (int i = 0; i < qtd_candidatos; i++){
        for (int j = 0; j < qtd_questoes; j++){
            printf("Candidato %d, Questao %d: ", i + 1, j + 1);
            scanf(" %c", &candidato[i][j]);
        }
    }

    int acertos[qtd_candidatos] = {0};

    for (int i = 0; i < qtd_candidatos; i++){
        for (int j = 0; j < qtd_questoes; j++){
            if (candidato[i][j] == gabarito[j]){
                acertos[i] += 1;
            }
        }
    }

    for (int i = 0; i < qtd_candidatos; i++){
        printf("Acertos do candidato %d: %d\n", i + 1, acertos[i]);
    }
}