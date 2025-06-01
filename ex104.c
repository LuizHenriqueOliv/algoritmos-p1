#include <stdio.h>

int main()
{
    int n;
    printf("Informe um numero positivo: ");
    scanf("%d", &n);

    int soma_dos_divisores = 0;
    for (int i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            soma_dos_divisores += i;
        }
    }

    if (soma_dos_divisores == n)
    {
        printf("Numero perfeito.");
    }
    else 
    {
        printf("Nao eh perfeito.");
    }

    return 0;
}