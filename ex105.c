#include <stdio.h>

int main()
{
    int minimo, limite;
    printf("Informe dois numeros inteiros M e N: ");
    scanf("%d%d", &minimo, &limite);

    int soma_do_intervalo = 0;
    for (int i = minimo; i <= limite; i++)
    {
        soma_do_intervalo += i;
    }

    printf("Soma do intervalo: %d", soma_do_intervalo);
    return 0;
}