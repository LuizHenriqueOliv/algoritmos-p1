// Escreva  um  programa  que  leia  o  nome  e  o  peso  de  20  bois  que  participam  de  uma 
// exposição e imprima o nome do boi mais leve e o nome do boi mais pesado. Para isso, 
// suponha que todos os bois têm pesos distintos.

#include <stdio.h>
#include <string.h>

int main()
{
    char nome[20];
    float peso;
    printf("Informe o nome e o peso do boi: ");
    scanf("%s%f", nome, &peso);

    char mais_pesado[20], mais_leve[20];
    strcpy(mais_pesado, nome);
    strcpy(mais_leve, nome);

    float maior_peso = peso, menor_peso = peso;
    for (int i = 0; i < 19; i++)
    {
        printf("Informe o nome e o peso do boi: ");
        scanf(" %s%f", nome, &peso);
        
        if (peso > maior_peso)
        {
            maior_peso = peso;
            strcpy(mais_pesado, nome);
        }
        if (peso < menor_peso)
        {
            menor_peso = peso;
            strcpy(mais_leve, nome);
        }
    }

    printf("O boi mais pesado eh: %s\n", mais_pesado);
    printf("O boi mais leve eh: %s\n", mais_leve);

    return 0;
}