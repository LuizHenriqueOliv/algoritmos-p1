#include <stdio.h>

void main()
{
    float nota1, nota2, nota3;
    printf("Insira a nota 1: ");
    scanf("%f", &nota1);
    printf("Insira a nota 2: ");
    scanf("%f", &nota2);
    printf("Insira a nota 3: ");
    scanf("%f", &nota3);

    float media = (nota1 + nota2 + nota3) / 3;
    printf("A media aritmetica eh: %.2f", media);
}
