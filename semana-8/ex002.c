// Escreva um programa que leia o valor do lado de um quadrado e calcule a sua área e o seu 
// perímetro. O programa deve ter um subprograma para calcular a área e outro para calcular o 
// perímetro.
#include <stdio.h>

float calcularArea(float lado){
    float area = lado * lado;
    return area;
}

float calcularPerimetro(float lado){
    float perimetro = lado * 4;
    return perimetro;
}

int main(){
    float lado;
    printf("Informe o lado do quadradado: ");
    scanf("%f", &lado);

    float perimetro = calcularPerimetro(lado);
    float area = calcularArea(lado);

    printf("Perimetro: %f\n", perimetro);
    printf("Area: %f", area);

    return 0;   
}