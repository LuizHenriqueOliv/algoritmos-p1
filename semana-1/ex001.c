#include <stdio.h>

int main()
{
    int m, n; 
    printf("Informe o numero inteiro N e M para saber se N eh multiplo de M: ");
    scanf("%d%d", &n, &m);

    if (n % m == 0)
    {
        printf("eh multiplo!");
    }
    else
    {
        printf("nao eh multiplo!");
    }
    return 0;
}   