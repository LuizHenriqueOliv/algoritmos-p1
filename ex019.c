#include <stdio.h>

void main()
{
    float ang1, ang2, ang3;
    printf("Informe o valor dos 2 primeiros ângulos: ");
    scanf("%f%f", &ang1, &ang2);
    
    ang3 = 180 - ang1 - ang2;
    printf("O valor do terceiro ângulo eh: %.2f",  ang3);
}