#include <stdio.h>

int main()
{
    int abaixo_do_peso = 0;
    int acima_do_peso = 0; 
    int peso_adequado = 0;

    for (int i = 0; i < 10; i++)
    {
        float altura, peso;
        printf("Informe a altura e o peso: ");
        scanf("%f%f", &altura, &peso);

        float IMC = peso / (altura * altura);

        if (IMC < 18)
        {
            abaixo_do_peso++;
        }
        else if (IMC > 25)
        {
            acima_do_peso++;
        }
        else
        {
            peso_adequado++;
        }
    }

    float perc_AbaixoDoPeso = (abaixo_do_peso / 10.0) * 100;
    float perc_AcimaDoPeso = (acima_do_peso / 10.0) * 100;
    float perc_PesoAdequado = (peso_adequado / 10.0) * 100;

    printf("Abaixo do peso: %.2f%%\n", perc_AbaixoDoPeso);
    printf("Acima do peso: %.2f%%\n", perc_AcimaDoPeso);
    printf("Peso adequado: %.2f%%\n", perc_PesoAdequado);
}