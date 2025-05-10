#include <stdio.h>
#include <math.h>

void main()
{
    float coeficiente_a, coeficiente_b, coeficiente_c;
    printf("Informe o valor dos coeficientes (a, b e c): ");
    scanf("%f%f%f", &coeficiente_a, &coeficiente_b, &coeficiente_c);

    float delta = pow(coeficiente_b, 2) - 4 * coeficiente_a * coeficiente_c;

    if (delta > 0)
    {
        printf("Possui duas (2) raizes reais");
    }
    else if (delta == 0)
    {
        printf("Possui uma raiz real");
    }
    else 
    {
        printf("Nao possui nenhuma raiz real");
    }
}