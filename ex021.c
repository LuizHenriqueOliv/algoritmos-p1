// Escreva  um  programa  que  leia  o  preço  de  produção  de  um  determinado  produto  e  a 
// margem  de  lucro  desejada  pelo  fabricante  e  calcule  qual  deve  ser  o  seu  preço  de 
// venda.
#include <stdio.h>

void main()
{
    float cust_prod, marg_lucro, valor_final;
    printf("Informe o custo de produção e quantos \% voce deseja lucrar: ");
    scanf("%f%f", &cust_prod, &marg_lucro);

    // transformando em porcentagem
    marg_lucro = marg_lucro/100;


    valor_final = (marg_lucro * cust_prod) + cust_prod;
    printf("%.2fR$\n", valor_final);
}