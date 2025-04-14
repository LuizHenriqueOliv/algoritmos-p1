#include <stdio.h>

void main()
{
    int primeiro, limite, maior_multiplo;
    printf("Informes os dois numeros: ");
    scanf("%d%d", &primeiro,  &limite);

    // calculando
    maior_multiplo = (limite/primeiro)*primeiro;

    printf("O maior multiplo eh: %d\n", maior_multiplo);
}