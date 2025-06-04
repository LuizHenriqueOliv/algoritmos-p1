// Escreva  um  programa  que  leia  um  número  N  e  imprima  os  N  primeiros  números 
// primos positivos. 

#include <stdio.h>

int main()
{
    int n;
    printf("Informe um numero inteiro N: ");
    scanf("%d", &n);

    int contador = 0;
    for (int i = 2; contador < n; i++)
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