#include <stdio.h>
#include <math.h>

void main()
{
    float coeficiente_a, coeficiente_b, coeficiente_c;
    printf("informe o valor dos coeficientes a, b e c: ");
    scanf("%f%f%f", &coeficiente_a, &coeficiente_b, &coeficiente_c);

    float delta = pow(coeficiente_b, 2) - 4 * coeficiente_a * coeficiente_c;

    if (delta >= 0)
    {
        float X1 = (-coeficiente_b + sqrt(delta)) / (2 * coeficiente_a);
        if (delta > 0)
        {
            float X2 = (-coeficiente_b - sqrt(delta)) / (2 * coeficiente_a);
            printf("X1 = %f\nX2 = %f", X1, X2);
        } 
        else 
        {
            printf("X1: %f", X1);        
        }
    }
    else 
    {
        printf("Nao tem raizes reais");
    }
}