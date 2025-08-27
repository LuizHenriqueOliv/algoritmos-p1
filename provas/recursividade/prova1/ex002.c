#include <stdio.h>

const int questoes = 10;

char lerVetores(char vetor[]){
    for (int i = 0; i < questoes; i++){
        printf("Informe a resposta: ");
        scanf(" %c", &vetor[i]);
    }
}

int calcularAcertos(char gab_oficial[questoes], char gab_candidato[questoes]){
    int acertos = 0;
    for (int i = 0; i < questoes; i++){
        if (gab_oficial[i] == gab_candidato[i]){
            acertos++;
        }
    }
    return acertos;
}

int main(){
    char gabarito_oficial[questoes], gabarito_candidato[questoes];
    printf("Leitura do Gabarito:\n");
    lerVetores(gabarito_oficial); 
    for (int i = 0; i < 10; i++){
        printf("Leitura Respostas Candidato %d\n", i + 1);
        lerVetores(gabarito_candidato);
        int acertos = calcularAcertos(gabarito_oficial, gabarito_candidato);
        printf("Candidato %d, acertos: %d\n", i + 1, acertos);
    }
    return 0;
}