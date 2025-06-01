#include <stdio.h>

int main()
{
    int n;
    printf("Informe um numero positivo: ");
    scanf("%d", &n);

    int divisores = 0;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            divisores++;
        }
    }

    if (divisores == 2)
    {
        printf("Numero primo.");
    }
    else 
    {
        printf("Nao eh numero primo");
    }
}