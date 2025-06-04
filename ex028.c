//  Uma loja oferece três formas de pagamento para os seus clientes. Caso a compra seja 
// paga  à  vista,  a  loja  oferece  um  desconto  de  10%.  Caso  a  compra  seja  paga  em  três 
// parcelas no cartão de crédito, o cliente paga o preço original (sem descontos, mas sem 
// juros) da compra. Caso a compra seja paga em dez parcelas no cartão de crédito, a loja 
// acrescenta uma taxa  de juros de 20% sobre o valor da compra. Todas as dez parcelas 
// têm exatamente o mesmo valor. Com base nessas informações, escreva um programa 
// que leia o valor da compra de um cliente e informe: o valor da compra se ela for paga 
// à vista, o valor de cada parcela se a compra for paga no cartão e em três parcelas (por 
// exemplo, 3 parcelas de R$ 50,00) e o valor de cada parcela se a compra for paga com o 
// cartão de crédito e em dez parcelas.
#include <stdio.h>

int main()
{
    float val_compra, val_vista, val_3parcelas, val_10parcelas;
    printf("Informe o valor da compra: ");
    scanf("%f", &val_compra);

    // cálculo do valor a vista
    val_vista = val_compra*0.9;

    // parcelado em 3 vezes
    val_3parcelas = (val_compra/3.0);

    // parcelado em 10 vezes
    val_10parcelas = (val_compra*1.2)/10;

    printf("O valor da compra a vista eh: %.2fR$\n", val_vista);
    printf("Parcelado em 3 vezes ficam 3 parcelas de %.2fR$\n", val_3parcelas);
    printf("Parcelado em 10 vezes ficam 10 parcelas de %.2fR$", val_10parcelas);
    return 0;
}