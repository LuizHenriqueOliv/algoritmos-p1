// Em um determinado concurso público, para cada questão que um candidato acerta ele 
// ganha  5  pontos,  para  cada  questão  que  ele  erra  ele  perde  3  pontos  e  para  cada 
// questão  que  ele  deixa  em  branco  ele  não  ganha  e  nem  perde  pontos.  Escreva  um 
// programa  que  leia  o  número  de  questões  que  um  candidato  acertou,  o  número  de 
// questões que ele errou e o número de questões que ele deixou em branco e 
// determine a sua pontuação final.
#include <stdio.h>

void main()
{
    int certas, erradas, branco, pontos; 
    printf("Informe quantas questoes voce acertou, errou e deixou em branco: ");
    scanf("%d%d%d", &certas, &erradas, &branco);
    
    pontos = certas*5 + erradas * (-3) + branco * 0;
    
    printf("A pontuacao total foi: %d", pontos);
}