#include <stdio.h>

const int dias_de_obra = 180; 

void main()
{
    int pedreiros, ajudantes;
    float diaria_pedreiro;
    printf("Informe a quantidade de pedreiros, ajudantes e o valor da diaria do pedreiro: ");
    scanf("%d%d%f", &pedreiros, &ajudantes, &diaria_pedreiro);

    float diaria_ajudante = diaria_pedreiro / 2.0;
    float valor_mao_de_obra = ((pedreiros * diaria_pedreiro) + (ajudantes * diaria_ajudante)) * dias_de_obra;

    printf("O valor da mao de obra foi de: R$ %.2f", valor_mao_de_obra);
}