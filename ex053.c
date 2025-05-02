#include <stdio.h>

void main()
{
    // ano e mês referente ao início, tempo e fim da pena.
    int ano_inicio, mes_inicio, ano_tempo, mes_tempo, ano_fim, mes_fim; 
    printf("Informe o ano e mes que o preso comecara a cumprir a pena: ");
    scanf("%d%d", &ano_inicio, &mes_inicio);
    printf("Agora informe a tempo da pena em anos e meses: ");
    scanf("%d%d", &ano_tempo, &mes_tempo);

    mes_fim = (((mes_inicio + mes_tempo) - 1) % 12) + 1;
    ano_fim = ano_inicio + ano_tempo + (((mes_inicio + mes_tempo) - 1) / 12); 

    printf("O detento terminara de cumprir sua sentenca em: %d/%d", mes_fim, ano_fim);
}