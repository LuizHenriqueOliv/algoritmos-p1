#include <stdio.h>

int main()
{
    int maria = 0, francisco = 0, marta = 0, joao = 0;

    while (maria < 10 && francisco < 10 && marta < 10 && joao < 10)
    {
        int voto;
        printf("Informe seu voto: ");
        scanf("%d", &voto);

        switch (voto)
        {
            case 1: maria++; break;
            case 2: francisco++; break;
            case 3: marta++; break;
            case 4: joao++; break;
            default: printf("Informe um numero valido.");
        }
    }

    printf("Candidato | Votos\n");
    printf("Maria: %d votos.\n", maria);
    printf("Francisco: %d votos.\n", francisco);
    printf("Marta: %d votos.\n", marta);
    printf("Joao: %d votos.\n", joao);

    if (maria == 10)
    {
        printf("Vencedora: Maria.");
    }
    else if (francisco == 10)
    {
        printf("Vencedor: Francisco.");
    }
    else if (marta == 10)
    {
        printf("Vencedora: Marta.");
    }
    else 
    {
        printf("Vencedor: Joao");
    }
}