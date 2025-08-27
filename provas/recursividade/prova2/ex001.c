#include <stdio.h>

const int questoes = 10;

void lerVetores(char vetor[]){
    for (int i = 0; i < questoes; i++){
        printf("Informe a alternativa: ");
        scanf(" %c", &vetor[i]);
    }
}

void imprimirVetores(char vetor[]){
    for (int i = 0; i < questoes; i++){
        printf("%c ", vetor[i]);
    }
}

int calcularAcertos(char gabarito[], char respostas[]){
    int acertos = 0;
    for (int i = 0; i < questoes; i++){
        if (gabarito[i] == respostas[i]){
            acertos++;
        }
    }
    return acertos;
}

int main(){
    char gabarito[questoes], respostas[questoes];
    printf("Leitura do Gabarito:\n");
    lerVetores(gabarito);
    
    printf("Leitura das Respostas:\n");
    lerVetores(respostas);

    int acertos = calcularAcertos(gabarito, respostas);
    printf("Acertos: %d", acertos);
    return 0;
}
