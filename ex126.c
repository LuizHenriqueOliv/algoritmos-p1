// Escreva um programa que leia o termo inicial e a razão de uma PA e, a seguir, leia um 
// número N e verifique se o número N pertence à progressão. 

#include <stdio.h>

int main()
{
    float a1, r, n;
    printf("Informe o termo inicial e a razao da PA: ");
    scanf("%f%f", &a1, &r);
    printf("Informe um numero: ");
    scanf("%f", &n);

    float an = 0;
    for (int i = 1; an <= n; i++)
    {
        if (n == an)
        {
            printf("Pertence a PA.");
            return 0;
        }
        an = a1 + (i - 1) * r;
    }
    printf("nao pertence a PA.");
    return 0;
}