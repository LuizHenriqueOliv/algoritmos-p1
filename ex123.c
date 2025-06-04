// Escreva  um  programa  que  leia  dois  números  inteiros  M  e  N  e  calcule  os  N  primeiros 
// números primos maiores ou iguais a M.

#include <stdio.h>

int main()
{
    int M, N;
    printf("Informe dois numeros inteiros M e N: ");
    scanf("%d%d", &M, &N);

    int contador = 0;
    for (int i = M; contador < N; i++)
    {
        int divisor = 0;
        for (int j = 1; j <= i; j++)
        {
            if (i % j == 0)
            {
                divisor++;
            }
        }
        if (divisor == 2)
        {
            printf("%d ", i);
            contador++;
        }
    }
}