#include <stdio.h>

const float mensalidade_fixa = 80;

void main()
{
    float qtd_dados;
    printf("Informe a quantidade de dados utilizados: ");
    scanf("%f", &qtd_dados);

    float taxa_adicional = (qtd_dados - 100) * 5;

    float valor = mensalidade_fixa + taxa_adicional;

    printf("O valor da conta sera de: %.2fR$", valor);
}