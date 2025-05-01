#include <stdio.h>

void main()
{
    float valor_financiado, prest_1, prest_2, prest_3, prest_4, prest_5, valor_pago, juros;
    printf("informe o valor a ser financiado: ");
    scanf("%f", &valor_financiado);
    
    prest_1 = valor_financiado*0.20; // 20% do valor emprestado
    prest_2 = prest_1*1.07; // 107% da prestação anterior => +7% de juros
    prest_3 = prest_2*1.07;
    prest_4 = prest_3*1.07;
    prest_5 = prest_4*1.07;

    valor_pago = prest_1+prest_2+prest_3+prest_4+prest_5;
    juros = ((valor_pago - valor_financiado) / valor_financiado) * 100; // total de juros pago em porcentagem
    
    printf("Segue o valor das parcelas:\n");
    printf("1ª parcela: %.2f\n", prest_1);
    printf("2ª parcela: %.2f\n", prest_2);
    printf("3ª parcela: %.2f\n", prest_3);
    printf("4ª parcela: %.2f\n", prest_4);
    printf("5ª parcela: %.2f\n", prest_5);
    printf("O valor total pago foi de: %.2f\n", valor_pago);
    printf("O total de juros pagos foi de: %.2f%%\n", juros);
}