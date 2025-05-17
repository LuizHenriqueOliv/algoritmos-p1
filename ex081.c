#include <stdio.h>
#include <math.h>

void main()
{
    float circ_x, circ_y, raio;
    printf("Informe os valores (X e Y) do centro da circunferência e o valor do raio: ");
    scanf("%f%f%f", &circ_x, &circ_y, &raio);

    float coord_x, coord_y;
    printf("Informe os valores das coordenadas (X e Y) do ponto P: ");
    scanf("%f%f", &coord_x, &coord_y);

    // distância entre os pontos
    float distancia = sqrt(pow((circ_x - coord_x), 2) + pow((circ_y - coord_y), 2));
    
    if (distancia <= raio)
    {
        printf("esta dentro");
    }
    else 
    {
        printf("Esta fora");
    }
}