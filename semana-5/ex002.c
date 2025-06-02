// Escreva  um  programa  que  leia  10  números  inteiros  e,  para  cada  valor  informado, 
// informe  se  ele  é  positivo,  negativo  ou  neutro.  Ao  fim  da  leitura,  o  programa  deve 
// informar qual dessas categorias teve uma maior quantidade de números informados.

#include <stdio.h>

int main()
{
    int positivos = 0, neutros = 0, negativos = 0;
    for (int i = 0; i < 10; i++)
    {
        int n;
        printf("Informe um numero inteiro: ");
        scanf("%d", &n);

        if (n > 0)
        {
            printf("Numero positivo.\n");
            positivos++;
        }
        else if (n < 0)
        {
            printf("Numero negativo.\n");
            negativos++;
        }
        else
        {
            printf("Numero neutro.\n");
            neutros++;
        }
    }

    if (positivos > negativos && positivos > neutros)
    {
        printf("Maior quantidade: Positivos.");
    }
    else if (negativos > positivos && negativos > neutros)
    {
        printf("Maior quantidade: Negativos.");
    }
    else if (neutros > positivos && neutros > negativos)
    {
        printf("Maior quantidade: Neutros.");
    }
    else
    {
        printf("Quantidades iguais.");
    }
    return 0;
}