#include <stdio.h>

int main()
{
    int base, expoente;
    printf("Informe dois numeros inteiros M e N: ");
    scanf("%d%d", &base, &expoente);

    int resultado = 1;

    for (int i = 1; i <= expoente; i++)
    {
        resultado *= base;
    }

    printf("%d", resultado);
    return 0;
}