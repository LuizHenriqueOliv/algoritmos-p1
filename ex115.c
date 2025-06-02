//  Escreva um programa que leia o peso e a altura de um grupo de 20 pessoas e calcule o 
//  percentual  de  pessoas  abaixo  do  peso,  o  percentual  de  pessoas  acima  do  peso  e  o 
//  percentual de pessoas que estão dentro da faixa de peso adequada. 

#include <stdio.h>

int main()
{
    int abaixo_do_peso = 0, acima_do_peso = 0, peso_adequado = 0;
    for (int i = 0; i < 20; i++)
    {
        float peso, altura;
        printf("Informe o peso e altura: ");
        scanf("%f%f", &peso, &altura);

        float IMC = peso / (altura*altura);

        if (IMC > 25)
        {
            acima_do_peso++;
        }
        else if (IMC < 18)
        {
            abaixo_do_peso++;
        }
        else 
        {
            peso_adequado++;
        }
    }

    float perc_acima_do_peso = ((float)acima_do_peso / 20) * 100;
    float perc_abaixo_do_peso = ((float)abaixo_do_peso / 20) * 100;
    float perc_peso_adequado = ((float)peso_adequado / 20) * 100;

    printf("Acima do Peso: %.2f%%\n", perc_acima_do_peso);
    printf("Abaixo do Peso: %.2f%%\n", perc_abaixo_do_peso);
    printf("Dentro da faixa de peso: %.2f%%\n", perc_peso_adequado);
    return 0;
}