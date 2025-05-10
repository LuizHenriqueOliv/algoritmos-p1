#include <stdio.h>

void main()
{
    float ponto_x, ponto_y;
    printf("Informe as coordenadas X e Y: ");
    scanf("%f%f", &ponto_x, &ponto_y);

    if (ponto_x > 0 && ponto_y > 0)
    {
        printf("1 quadrante");
    }
    else if (ponto_x < 0 && ponto_y > 0)
    {
        printf("1 quadrante");
    }
    else if (ponto_x < 0 && ponto_y < 0)
    {
        printf("1 quadrante");
    }
    else if (ponto_x > 0 && ponto_y < 0)
    {
        printf("1 quadrante");
    }
    else if (ponto_x != 0 && ponto_y == 0)
    {
        printf("2 quadrantes");
    }
    else if (ponto_x == 0 && ponto_y != 0)
    {
        printf("2 quadrantes");
    }
    else
    {
        printf("4 quadrantes");
    }
}