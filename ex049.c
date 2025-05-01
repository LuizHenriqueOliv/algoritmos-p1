#include <stdio.h>

const float IPI = 0.20;
const float ICMS = 0.17;
const float margem_lucro = 0.20;

void main()
{
    float valor_atual, valor_compra, valor_promocional;
    printf("Informe o valor atual do veiculo: ");
    scanf("%f", &valor_atual);

    valor_compra = valor_atual / (1 + IPI + ICMS + margem_lucro);
    valor_promocional = valor_compra * (1 + ICMS + margem_lucro);

    printf("O valor promocional sera de: %.3fR$", valor_promocional);
}