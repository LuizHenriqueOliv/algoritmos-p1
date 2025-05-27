#include <stdio.h>

const float taxa_de_juros = 1.07;
int main()
{
    float valor_financiado;
    int qtd_prestacoes;
    printf("Informe o valor a ser financiado e a quantidade de prestacoes: ");
    scanf("%f%d", &valor_financiado, &qtd_prestacoes);

    float primeira_prestacao = valor_financiado / qtd_prestacoes;
    printf("1a: R$ %.2f\n", primeira_prestacao);

    float prestacao_anterior = primeira_prestacao;
    float nova_prestacao;
    float valor_total = primeira_prestacao;

    for (int i = 2; i <= qtd_prestacoes; i++)
    {
        nova_prestacao = prestacao_anterior * taxa_de_juros;

        printf("%da: R$ %.2f\n", i, nova_prestacao);

        valor_total += nova_prestacao;   
        prestacao_anterior = nova_prestacao;  
    }

    float diferenca = valor_total - valor_financiado;

    printf("Valor total pago: R$ %.2f\n", valor_total);
    printf("Diferenca entre o valor financiado: R$ %.2f", diferenca);
    return 0;
}