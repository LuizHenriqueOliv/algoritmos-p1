#include <stdio.h>

void main()
{
    float ponto_x, ponto_y;
    printf("Informe as coordenadas (X e Y) do ponto: ");
    scanf("%f%f", &ponto_x, &ponto_y);

    if (ponto_x > 0 && ponto_y > 0)
    {
        printf("1o quadrante");
    }
    else if (ponto_x < 0 && ponto_y > 0)
    {
        printf("2o quadrante");
    }
    else if (ponto_x < 0 && ponto_y < 0)
    {
        printf("3o quadrante");
    }
    else if (ponto_x > 0 && ponto_y < 0)
    {
        printf("4o quadrante");
    }
}