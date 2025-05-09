#include <stdio.h>

void main()
{
    float lado_1, lado_2, lado_3;
    printf("Informe o valor dos lados 1, 2 e 3 respectivamente: ");
    scanf("%f%f%f", &lado_1, &lado_2, &lado_3);
    
    if (lado_1 == lado_2 && lado_2 == lado_3)
    {
        printf("Triangulo equilatero");
    }
    else if (lado_1 != lado_2 && lado_2 != 3 && lado_1 != lado_3)
    {
        printf("Triangulo escaleno");
    }
    else 
    {
        printf("Triangulo isosceles");
    }
}