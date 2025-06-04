// Escreva um programa que leia os valores das coordenadas X e Y e dois pontos P e Q e 
// determine a distância entre  estes dois pontos. A distância entre  dois pontos pode  ser 
// determinada através da distância euclidiana. 
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