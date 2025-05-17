#include <stdio.h>

void main()
{
    int numero_candidato;
    printf("Informe o numero do candidato (10000 - 99999): ");
    scanf("%d", &numero_candidato);

    int numero_partido = numero_candidato / 1000;

    switch (numero_partido)
    {
        case 13: printf("%d PT", numero_partido); break;
        case 14: printf("%d PTB", numero_partido); break;
        case 15: printf("%d PMDB", numero_partido); break;
        case 25: printf("%d DEM", numero_partido); break;
        case 45: printf("%d PSDB", numero_partido); break;
        case 65: printf("%d PCdoB", numero_partido); break;
        default: printf("Informe um numero valido!");
    }
}