#include <stdio.h>

void main()
{
    float raio, area, comprimento;
    // ler o valor do raio
    printf("Insira o valor do raio: ");
    scanf("%f", &raio);

    // calcular área
    area = 3.14*(raio*raio);
    comprimento = 2*3.14*raio;

    // imprimir area e comprimento
    printf("area: %.2f\n", area);
    printf("comprimento: %.2f", comprimento); 
}