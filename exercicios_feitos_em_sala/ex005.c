// escreva um programa que leia o raio de uma circunferência e calcule sua área e comprimento

#include <stdio.h>
const float PI = 3.14;
int main(){
    float raio, comprimento, area;
    printf("Informe o valor do raio: ");
    scanf("%f", &raio);

    area = PI * (raio * raio);
    comprimento = 2 * PI * raio;

    printf("Valor da area: %f\n", area);
    printf("Valor do comprimento: %f", comprimento);
}