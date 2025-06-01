#include <stdio.h>

int main()
{
    int minimo, limite;
    printf("Informe 2 numeros inteiros M e N sendo M <= N: ");
    scanf("%d%d", &minimo, &limite);

    int soma_do_intervalo = 0;
    for (int i = minimo; i <= limite; i++)
    {
        soma_do_intervalo += i;
    }

    float media_do_intervalo = (float)soma_do_intervalo / (limite - minimo + 1);

    printf("A media eh: %f", media_do_intervalo);
    return 0;
}