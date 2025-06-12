#include <stdio.h>

void main()
{
    int certas, erradas, branco, pontos; 
    printf("Informe quantas questoes voce acertou, errou e deixou em branco: ");
    scanf("%d%d%d", &certas, &erradas, &branco);
    
    pontos = certas*5 + erradas * (-3) + branco * 0;
    
    printf("A pontuacao total foi: %d", pontos);
}