#include <stdio.h>

void main()
{
    float coord_x, coord_y;
    printf("Informe as coordenadas (x e y) do ponto: ");
    scanf("%f%f", &coord_x, &coord_y);

    if (coord_y == 2*coord_x + 1)
    {
        printf("Pertence a reta");
    }
    else
    {
        printf("Nao pertence a reta");
    }
}