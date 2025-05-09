#include <stdio.h>

const float parte_poupada = 0.25;

void main()
{
    float salario, val_entrada;
    printf("Informe o salario e o valor da entrada: ");
    scanf("%f%f", &salario, &val_entrada);

    float valor_poupado_mes = parte_poupada * salario; 
    float tempo_total = val_entrada / valor_poupado_mes; 
    int tempo_total_arredondado = (int)tempo_total;

    if (tempo_total - tempo_total_arredondado != 0)
    {
        tempo_total_arredondado += 1;
    }

    // if (tempo_total_arredondado <= 12)
    // {
    //     printf("Vai levar %d meses", tempo_total_arredondado);
    // }
    // else 
    // {
        int anos = tempo_total_arredondado / 12;
        int meses = tempo_total_arredondado % 12;
        printf("Vai levar %d anos e %d meses", anos, meses);
    // 
}