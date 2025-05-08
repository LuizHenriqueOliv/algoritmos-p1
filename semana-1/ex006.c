#include  <stdio.h>

void main()
{
    float n1, n2, n3, n4;
    printf("informe 4 numeros reais: ");
    scanf("%f%f%f%f", &n1, &n2, &n3, &n4);

    // verificação se é PA e PG ao mesmo tempo, só ocorre se todos os números forem iguais!
    if (n1 == n2 && n2 == n3 && n3 == n4)
    {
        printf("eh uma progressao aritmetica e geometrica");
        return;
    }

    if (n2 - n1 == n3 - n2 && n4 - n3 == n3 - n2)
    {
        printf("eh uma progressao aritmetica");
    }

    if ((n1 != 0 && n2 != 0 && n3 != 0 && n4 != 0) && (n2 / n1 == n3 / n2 && n4 / n3 == n3 / n2))
    {
        printf("eh uma prograssao geometrica");
    }
}