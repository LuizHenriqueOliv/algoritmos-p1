#include <stdio.h>

void main()
{
    // ler o termo inicial e a razão da PA
    float termo_inicial, razao;
    printf("Informe o termo inicial e a razao da PA: ");
    scanf("%f%f", &termo_inicial, &razao);
    // ler um número positivo N 
    int N; 
    printf("Informe um numero positivo N: ");
    scanf("%d", &N);
    // imprimir os N primeiros termos da PA.
    for (int i = 1; i <= N; i++)
    {
        float termo = termo_inicial + (i - 1) * razao;
        printf("%.1f, ", termo); 
    }
}