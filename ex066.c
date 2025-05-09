#include <stdio.h>

const float kg_pessoa = 0.250;

void main()
{
    int pessoas;
    printf("Informe a quantidade de pessoas que vao participar: ");
    scanf("%d", &pessoas);

    float kg_carne = pessoas * kg_pessoa;
    int kg_carne_inteiro = (int)kg_carne;
    if ((kg_carne - kg_carne_inteiro) != 0)
    {
        kg_carne_inteiro += 1;  
    }

    printf("A quantidade de carne necessaria em KG inteiros sera: %dKGs", kg_carne_inteiro);
}