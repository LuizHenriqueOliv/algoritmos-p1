#include <stdio.h>
#include <math.h>

void main()
{
    float seno, cosseno;

    // ler o valor do seno
    printf("Informe o valor do Seno (entre -1 e 1): ");
    scanf("%f", &seno);

    // calcular o valor do cosseno
    cosseno = sqrtf(1 - powf(seno, 2));
    printf("O valor do cosseno eh: %.2f\n", cosseno);
}