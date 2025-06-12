#include <stdio.h>

void main()
{
    float n1, n2, n3;
    float peso1, peso2, peso3;

    // ler 3 números
    printf("Insira o número 1: ");
    scanf("%f", &n1);
    printf("Insira o peso equivalente: ");
    scanf("%f", &peso1);

    printf("Insira o número 2: ");
    scanf("%f", &n2);
    printf("Insira o peso equivalente: ");
    scanf("%f", &peso2);

    printf("Insira o número 3: ");
    scanf("%f", &n3);
    printf("Insira o peso equivalente: ");
    scanf("%f", &peso3);

    // calcular a média ponderada
    float soma_dos_pesos = peso1 + peso2 + peso3;
    float media = (n1*peso1 + n2*peso2 + n3*peso3)/soma_dos_pesos;

    // imprimir o valor da média ponderada
    printf("%.2f\n", media);
}