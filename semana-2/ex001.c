#include <stdio.h>

void main()
{
    float ang1, ang2, ang3;
    printf("Informe os valores dos 3 angulos internos: ");
    scanf("%f%f%f", &ang1, &ang2, &ang3);

    if (ang1 + ang2 + ang3 != 180) 
    {
        printf("Nao eh um triangulo valido!");
        return;
    }

    if (ang1 == 90 || ang2 == 90 || ang3 == 90)
    {
        printf("Triangulo retangulo");
    }
    else
    {
        printf("Nao eh triangulo retangulo");
    }
}
