#include <stdio.h>

const float taxa = 0.04;
void main()
{
    float valor_financiado, valor_parcela;
    int qtd_parcelas; 
    printf("Informe o valor que deseja financiar e a quantidade de parcelas: ");
    scanf("%f%d", &valor_financiado, &qtd_parcelas);

    valor_parcela = (valor_financiado / qtd_parcelas) + (taxa * valor_financiado);

    printf("O valor da(s) %d parcela(s) sera de: %.2fR$", qtd_parcelas, valor_parcela);
}