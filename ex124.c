// Escreva um programa que imprima os seis primeiros pares de números primos 
// gêmeos.  Dois  números  são  chamados  de  primos  gêmeos  se  eles  forem  primos  e  a 
// diferença entre os dois for igual a 2. (Por exemplo, 11 e 13 são primos gêmeos).

#include <stdio.h>

int main()
{
    int contador = 0;
    for (int i = 2; contador < 6; i++)
    {
        int divisor1 = 0, divisor2 = 0;
        for (int j = 1; j <= i; j++)
        {
            if (i % j == 0)
            {
                divisor1++;
            }
        }

        for (int j = 1; j <= i + 2; j++)
        {
            if ((i + 2) % j == 0)
            {
                divisor2++;
            }
        }

        if (divisor1 == 2 && divisor2 == 2)
        {
            printf("%d e %d\n", i, i + 2);
            contador++;
        }
    }
}