#include <stdio.h>

void main()
{
    float nota_1, nota_2, nota_3;
    printf("Informe as 3 notas: ");
    scanf("%f%f%f", &nota_1, &nota_2, &nota_3);

    float media = (nota_1 + nota_2 + nota_3) / 3;

    if (media >= 7)
    {
        printf("Aprovado por media!");
    }
    else if (media < 7 && media >= 4)
    {
        float pontos_pv_final = (25 - (3 * media)) / 2;
        printf("Devera fazer final, precisando de %.1f pontos.", pontos_pv_final);
    } 
    else 
    {
        printf("Aluno reprovado!");
    }
}