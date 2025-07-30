// O  IFPB  precisa  de  um  programa  que  faça  a  correção  automática  das  provas  do 
// seu  teste  de  seleção.  A  prova,  que  é  a  mesma  para  todos  os  alunos,  consiste  de 
// dez questões objetivas, cuja resposta deve ser (a, b, c, d ou e). O programa, que 
// deve  ser  escrito  na  linguagem  C,  deve  ler  o  gabarito  da  prova  e,  a  seguir,  as 
// opções  que  aparecem  no  cartão  de  respostas  de  um  candidato.  Depois  disso,  o 
// programa deve imprimir o número de questões que o candidato acertou. 

#include <stdio.h>

const int colunas = 10;

int main(){
    char gabarito_oficial[colunas];
    for (int j = 0; j < colunas; j++){
        printf("Gabarito oficial questao %d: ", j+1);
        scanf(" %c", &gabarito_oficial[j]);
    }

    char gabarito_candidato[colunas];
    for (int j = 0; j < colunas; j++){
        printf("Gabarito candidato questao %d: ", j+1);
        scanf(" %c", &gabarito_candidato[j]);
    }

    int acertos = 0;
    for (int j = 0; j < colunas; j++){
        if (gabarito_candidato[j] == gabarito_oficial[j]){
            acertos++;
        }
    }

    printf("Quantidade de acertos do candidato: %d", acertos);
    return 0;
}