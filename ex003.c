#include <stdio.h>

void main()
{
  float lado;
  // ler o lado do quadrado
  printf("Lado: ");
  scanf("%f", &lado);
  // calcular a área e perímetro
  float area = lado*lado;
  float perimetro = lado*4;
  printf("area: %.2f\n", area);
  printf("area: %.2f\n", perimetro);
}
