#include <stdio.h>

int main()
{
    int mes, ano;
    printf("Informe o valor do mes(1-12) e ano: ");
    scanf("%d%d", &mes, &ano);
    if (mes > 12 || mes < 1)
    {
        printf("Numero do mes invalido.");
        return 1;
    }

    if (mes == 2)
    {
        // se ano for bissexto, fevereiro tem 29 dias.
        if (ano % 4 == 0 && (ano % 100 != 0 || ano % 400 == 0))
        {
            printf("29 dias.");
        }
        else
        {
            printf("28 dias.");
        }
    }
    else if (mes == 4 || mes == 6 || mes == 9 || mes == 11)
    {
        printf("30 dias.");
    }
    else
    {
        printf("31 dias.");
    }

    return 0;
}