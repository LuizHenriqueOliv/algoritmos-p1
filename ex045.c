#include <stdio.h>

void main()
{
    // tentando usar mais variáveis
    float leitura_atual, leitura_anterior, valor_energia;
    printf("informe o valor da leitura atual e da leitura anterior: ");
    scanf("%f%f", &leitura_atual, &leitura_anterior);
    
    float kw_mes = leitura_atual - leitura_anterior;
    float valor_consumo = kw_mes * 0.35;
    float valor_icms = valor_consumo * 0.17;
    float taxa_iluminacao = 15;

    valor_energia = valor_consumo + valor_icms + taxa_iluminacao;

    printf("O valor da conta eh: %.2fR$", valor_energia);
}