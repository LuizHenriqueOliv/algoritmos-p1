#include <stdio.h>

const float INSS = 0.11; // taxa de desconto do INSS

void main()
{
    float salario_bruto, salario_liquido;
    printf("Informe o valor do salario bruto: ");
    scanf("%f", &salario_bruto);

    float salario_descontado_inss = salario_bruto * (1 - INSS);

    if (salario_bruto <= 1.90398)
    {
        salario_liquido = salario_descontado_inss;
    }
    else if (salario_bruto <= 2.82665)
    {
        float imposto_de_renda = 0.075;
        salario_liquido = salario_descontado_inss * (1 - imposto_de_renda);
    }
    else if (salario_bruto <= 3.75105)
    {
        float imposto_de_renda = 0.15;
        salario_liquido = salario_descontado_inss * (1 - imposto_de_renda);
    }
    else if (salario_bruto <= 4.66468)
    {
        float imposto_de_renda = 0.225;
        salario_liquido = salario_descontado_inss * (1 - imposto_de_renda);
    }
    else 
    {
        float imposto_de_renda = 0.275;
        salario_liquido = salario_descontado_inss * (1 - imposto_de_renda);
    }

    printf("O valor do salario liquido eh: R$%.2f", salario_liquido);

    // salario_liquido = salario_descontado_inss * (100 - imposto_de_renda);
}