#include <stdio.h>

int main()
{
    char DNA[11];
    printf("Informe a sequencia de cromossomos: ");
    scanf("%s", DNA);

    for (int i = 0; i <= 7; i++)
    {
        if (DNA[i] == 'A' && DNA[i + 1] == 'D' && DNA[i + 2] == 'S')
        {
            printf("Aptidao alta.");
            return 0;
        }
    }

    int posicao_a = 0;
    int posicao_d = 0;
    int posicao_s = 0;

    for (int i = 0; i < 10; i++)
    {
        switch (DNA[i])
        {
            case 'A': posicao_a = i; break;
            case 'D': posicao_d = i; break;
            case 'S': posicao_s = i; break;
        }
    }

    if (posicao_a < posicao_d && posicao_d < posicao_s)
    {
        printf("Aptidao Media.");
    }
    else 
    {
        printf("Aptidao baixa.");
    }
}