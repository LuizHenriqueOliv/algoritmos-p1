#include <stdio.h>

void main()
{
    int M, N;
    printf("informe um numero N e M, para saber se N eh multiplo de M: ");
    scanf("%d%d", &N, &M);

    if (N % M == 0)
    {
        printf("%d eh multiplo de %d", N, M);
    }
    else
    {
        printf("%d nao eh multiplo de %d", N, M);
    }
}