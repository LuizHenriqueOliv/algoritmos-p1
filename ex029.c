#include <stdio.h>
#include <locale.h>

void main()
{
    setlocale(LC_ALL, "pt-BR.UTF-8"); // Configura o suporte a UTF-8

    int quest, certas, erradas;
    float perc_acertos, perc_erros;

    printf("Informe quantas questoes tinha a prova e quantas voce acertou: ");
    scanf("%d%d", &quest, &certas);

    erradas = quest - certas;
    perc_acertos = ((float)certas / quest) * 100;
    perc_erros = ((float)erradas / quest) * 100;

    printf("Seu percentual de acertos foi: %.2f%% e o seu percentual de erros foi: %.2f%%\n", perc_acertos, perc_erros);
}