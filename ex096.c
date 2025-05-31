#include <stdio.h>

int main()
{
    int n1, n2, n3, n4, n5;
    printf("Informe 5 numeros inteiros: ");
    scanf("%d%d%d%d%d", &n1, &n2, &n3, &n4, &n5);

    int maior_numero = n1;
    int ordem_maior_numero = 1;

    if (n2 > maior_numero)
    {
        maior_numero = n2;
        ordem_maior_numero = 2;
    }
    if (n3 > maior_numero)
    {
        maior_numero = n3;
        ordem_maior_numero = 3;
    }
    if (n4 > maior_numero)
    {
        maior_numero = n4;
        ordem_maior_numero = 4;
    }
    if (n5 > maior_numero)
    {
        maior_numero = n5;
        ordem_maior_numero = 5;
    }

    printf("O maior numero eh: %d\n", maior_numero);
    printf("A ordem de entrada do maior numero foi: %d", ordem_maior_numero);
}