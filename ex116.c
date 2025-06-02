// Escreva um programa que leia o nome, o sexo e a idade de um grupo de 20 pessoas e 
// calcule o percentual de mulheres que tem entre 18 e 21 anos.

#include <stdio.h>

int main()
{
    
    int qtd_mulheres = 0;
    for (int i = 0; i < 20; i++)
    {
        char sexo;
        int idade;
        printf("Informe idade e sexo(M/F): ");
        scanf("%d %c", &idade, &sexo);

        if (idade >= 18 && idade <= 21 && (sexo == 'F' || sexo == 'f'))
        {
            qtd_mulheres++;
        }
    }

    float perc_mulheres = (qtd_mulheres / (float)20) * 100;
    printf("O percentual de mulheres com idade entre 18 e 21 anos eh: %.2f%%", perc_mulheres);
    return 0;
}