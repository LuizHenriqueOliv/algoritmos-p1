#include <stdio.h>

void main()
{  
    // Jaoão (1), Maria (2), Marcos (3), Ana (4).
    // ler 20 votos
    int votos_ana = 0, votos_joao = 0, votos_maria = 0, votos_marcos = 0;

    for (int i = 0; i < 20; i++)
    {
        int numero_candidato;
        printf("Informe o numero do candidato: ");
        scanf("%d", &numero_candidato);

        switch (numero_candidato)
        {
            case 1: votos_joao++; break;
            case 2: votos_maria++; break;
            case 3: votos_marcos++; break;
            case 4: votos_ana++; break;
            default: printf("Informe um numero valido.");
        }
    }
    // calcular o percentual de votos de cada candidato
    float perc_ana = (votos_ana / (float)20) * 100;
    float perc_joao = (votos_joao / (float)20) * 100;
    float perc_maria = (votos_maria / (float)20) * 100;
    float perc_marcos = (votos_marcos / (float)20) * 100;

    printf("Ana: %d votos (%.2f%%)\n", votos_ana, perc_ana);
    printf("Joao: %d votos (%.2f%%)\n", votos_joao, perc_joao);
    printf("Maria: %d votos (%.2f%%)\n", votos_maria, perc_maria);
    printf("Marcos: %d votos (%.2f%%)\n", votos_marcos, perc_marcos);
    
}