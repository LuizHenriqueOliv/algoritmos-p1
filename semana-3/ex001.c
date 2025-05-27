#include <stdio.h>

void main()
{
    // ler um numero inteiro N
    int n;
    printf("Informe um numero inteiro N: ");
    scanf("%d", &n);

    int soma_dos_multiplos = 0;
    // verificar se ele é perfeito = verificar se ele é igual a soma dos seus divisores exatos
        // descobrir quem são seus divisores exatos e somá-los a uma variável
        for (int i = 1; i < n; i++)
        {
            if (n % i == 0) // eh multiplo
            {
                soma_dos_multiplos += i;
            }
        }
        // verificar se a soma dos divisores exatos é igual ao numero inteiro N
        if (soma_dos_multiplos == n)
        {
            printf("%d eh um numero perfeito.", n);
        }
        else 
        {
            printf("%d nao eh um numero perfeito.", n);
        }
}