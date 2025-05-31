#include <stdio.h>

int main()
{
    int saque;
    printf("Informe o valor que deseja sacar: ");
    scanf("%d", &saque);

    if (saque > 1000)
    {
        printf("O valor maximo de saque eh: R$1.000");
        return 1;
    }

    int cedulas_100 = saque / 100;
    saque -= cedulas_100 * 100;

    int cedulas_50 = saque / 50;
    saque -= cedulas_50 * 50;

    int cedulas_20 = saque / 20;
    saque -= cedulas_20 * 20;

    int cedulas_10 = saque / 10;

    printf("Celulas de 100: %d\n", cedulas_100);
    printf("Celulas de 50: %d\n", cedulas_50);
    printf("Celulas de 20: %d\n", cedulas_20);
    printf("Celulas de 10: %d\n", cedulas_10);
}