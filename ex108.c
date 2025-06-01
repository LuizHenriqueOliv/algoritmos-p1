#include <stdio.h>

int main()
{
    int PT = 0, PTB = 0, PMDB = 0, DEM = 0, PSDB = 0, PCdoB = 0;
    for (int i = 0; i < 20; i++)
    {
        int numero_cand;
        printf("Informe o numero do candidato: ");
        scanf("%d", &numero_cand);

        int numero_partido = numero_cand / 1000;

        switch (numero_partido)
        {
            case 13: PT++; break;
            case 14: PTB++; break;
            case 15: PMDB++; break;
            case 25: DEM++; break;
            case 45: PSDB++; break;
            case 65: PCdoB++; break;
            default: printf("Numero invalido.\n");
        }
    }

    printf("PT: %d\n", PT);
    printf("PTB: %d\n", PTB);
    printf("PMDB: %d\n", PMDB);
    printf("DEM: %d\n", DEM);
    printf("PSDB: %d\n", PSDB);
    printf("PCdoB: %d\n", PCdoB);

    return 0;
}