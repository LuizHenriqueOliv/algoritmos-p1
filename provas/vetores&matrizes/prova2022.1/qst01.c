// Jogos  de  tabuleiro  são  atividades  comuns  de  entretenimento  na  vida  cotidiana  das 
// pessoas.  Uma  de  suas  características  é  a  necessidade  do  uso  de  um  tabuleiro  com 
// localizações bem definidas para o posicionamento de peças, podendo indicar também 
// as  fases  do  jogo.  No  livro  O  Homem  que  Calculava,  de  Malba  Tahan  (São  Paulo: 
// Record,  2002,  p.  120),  há  uma  história  na  qual  um  rei  deveria  efetuar  o  pagamento 
// pelos serviços de  um de seus conselheiros, dando-lhe uma certa quantidade  de grãos 
// de  trigo a ser calculada da seguinte forma: coloca-se 1 grão de  trigo na primeira casa 
// do tabuleiro, 2 na segunda casa, 4 na terceira casa, 8 na quarta casa e assim dobrando-
// se  sucessivamente  até  a  última  casa.  Considerando  um  tabuleiro  4  x  4,  no  qual  a 
// posição das casas é definida inicialmente  da esquerda para a direita e depois de cima 
// para  baixo,  escreva  um  programa  em  C  que  represente  o  tabuleiro  por  meio  de  uma 
// matriz. A geração do tabuleiro deve ser feita por meio de um comando de repetição. 

#include <stdio.h>
const int ordem = 4;
int main(){
    int tabuleiro[ordem][ordem];
    for (int i = 0; i < ordem; i++){
        for (int j = 0; j < ordem; j++){
            if (i == 0 && j == 0){
                tabuleiro[i][j] = 1;
            } else if (j == 0){
                tabuleiro[i][j] = tabuleiro[i-1][ordem-1] * 2;
            } else {
                tabuleiro[i][j] = tabuleiro[i][j-1] * 2;
            }
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }
    return 0;
}