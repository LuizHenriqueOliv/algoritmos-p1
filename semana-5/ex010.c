// Escreva  um  programa  que  leia  três  números  inteiros  positivos  e  utilize  o  método  da 
// fatoração para calcular o mínimo múltiplo comum desses números

#include <stdio.h>

int main()
{
    int n1, n2, n3;
    printf("Informe tres numeros inteiros positivos: ");
    scanf("%d%d%d", &n1, &n2, &n3);

    int MMC = 1;
    int p = 2;

    while (n1 != 1 || n2 != 1 || n3 != 1)
    {
        do 
        {
            if (n1 % p == 0 || n2 % p == 0 || n3 % p == 0)
            {
                MMC *= p;
            }
            if (n1 % p == 0)
            {
                n1 /= p;
            }
            if (n2 % p == 0)
            {
                n2 /= p;
            }
            if (n3 % p == 0)
            {
                n3 /= p;
            }
        } 
        while (n1 % p == 0 || n2 % p == 0 || n3 % p == 0);

        for (int i = p + 1; ; i++)
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
                p = i;
                break;
            }
        }
    }

    printf("O MMC eh: %d\n", MMC);
    return 0;
}