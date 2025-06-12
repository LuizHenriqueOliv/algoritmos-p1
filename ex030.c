#include <stdio.h>
#include <math.h>

void main()
{
    float px, py, qx, qy, dist;
    printf("Informe as coordenadas (X e Y) do ponto P: ");
    scanf("%f%f", &px, &py);
    printf("Informe as coordenadas (X e Y) do ponto Q: ");
    scanf("%f%f", &qx, &qy);

    dist = sqrt(pow(px - qx, 2) + pow(py - qy, 2));
    printf("A distancia entre os dois pontos eh: %.2f", dist);
}