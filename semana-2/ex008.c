#include <stdio.h>

void main()
{
    int M, N;
    printf("Informe os valores (M e N): ");
    scanf("%d%d", &M, &N);

    int soma = 0; 
    
    while (M <= N)
    {
        soma += M;
        M++; 
    }

    printf("%d", soma);
}