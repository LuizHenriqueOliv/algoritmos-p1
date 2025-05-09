#include <stdio.h>

const float kg_pessoa = 0.250; 

void main()
{
    int pessoas;
    printf("informe a quantidade de pessoas: ");
    scanf("%d", &pessoas);

    if (pessoas <= 0)
    {
        printf("informe um numero de pessoas valido");
        return;
    }

    float kg_carne = pessoas * kg_pessoa;
    printf("a quantidade de carne necessaria eh: %.2fkgs", kg_carne);
}