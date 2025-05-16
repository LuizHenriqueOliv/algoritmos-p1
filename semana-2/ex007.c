#include <stdio.h>

void main()
{
    int M, N;
    printf("Informe dois numeros (M e N): ");
    scanf("%d%d", &M, &N);

    while (M <= N)
    {
        printf("%d ", M);
        M++;
    }
}