#include <stdio.h>

void main()
{
    float ang_1, ang_2, ang_3;
    printf("Informe o valor dos 3 angulos: ");
    scanf("%f%f%f", &ang_1, &ang_2, &ang_3);

    if (ang_1 == 90 || ang_2 == 90 || ang_3 == 90)
    {
        printf("Eh um triangulo retangulo");
    }
    else
    {
        printf("Nao eh um triangulo retangulo");
    }

}