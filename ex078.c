#include <stdio.h>

void main()
{
    float preco_gasolina, preco_alcool;
    printf("Informe o valor do litro da gasolina e do litro de alcool: ");
    scanf("%f%f", &preco_gasolina, &preco_alcool);
    
    if (preco_gasolina * 0.7 <= preco_alcool)
    {
        printf("Abasteca com gasolina");
    }
    else 
    {
        printf("Abasteca com alcool");
    }
}