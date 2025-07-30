// O  IFPB  precisa  de  um  programa  que  faça  a  correção  automática  das  provas  do 
// seu  teste  de  seleção.  A  prova,  que  é  a  mesma  para  todos  os  alunos,  consiste  de 
// dez questões objetivas, cuja resposta deve ser (a, b, c, d ou e). O programa, que 
// deve  ser  escrito  na  linguagem  C,  deve  ler  o  gabarito  da  prova  e,  a  seguir,  as 
// opções  que  aparecem  no  cartão  de  respostas  de  um  candidato.  Depois  disso,  o 
// programa deve imprimir o número de questões que o candidato acertou.

#include <stdio.h>

const int questoes = 10;

int main(){
    char gabarito_oficial[questoes], gabarito_candidato[questoes];
    for (int i = 0; i < questoes; i++){
        printf("Gabarito Oficial Questao %d: ", i+1);
        scanf(" %c", &gabarito_oficial[i]);
    }

    for (int i = 0; i < questoes; i++){
        printf("Gabarito do Candidato Questao %d: ", i+1);
        scanf(" %c", &gabarito_candidato[i]);
    }

    int acertos = 0;
    for (int i = 0; i < questoes; i++){
        if (gabarito_candidato[i] == gabarito_oficial[i]){
            acertos++;
        }
    }

    printf("Quantidade de acertos: %d", acertos);
}