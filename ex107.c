#include <stdio.h>

int main()
{
    int minimo, limite;
    printf("Informe dois numeros inteiros M e N, sendo M <= N: ");
    scanf("%d%d", &minimo, &limite);

    int divisores = 0;
    int soma_dos_primos = 0;
    int qtd_primos = 0;
    
    for (int i = minimo; i <= limite; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if (i % j == 0)
            {
                divisores++;
            }
        }

        if (divisores == 2)
        {
            soma_dos_primos += i;
            qtd_primos++;
        }
        divisores = 0;
    }

    float media = (float)soma_dos_primos / qtd_primos;
    printf("A media eh: %f", media);
}