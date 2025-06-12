// Escreva um programa que leia o número de pessoas que irão participar de um evento, 
// no  qual  será  sorteado  um  prêmio,  e,  a  seguir,  leia  o  nome  e  o  número  do  bilhete 
// recebido por cada uma destas pessoas. O programa deve informar o nome do 
// ganhador do prêmio, que é a pessoa cuja ordem de chegada é igual ao número do seu 
// bilhete. Para isto, você poder supor que: a ordem de chegada de cada pessoa 
// corresponde  à  ordem  de  leitura  dos  seus  dados;  sempre  existe  uma  pessoa  cujo 
// número  do  bilhete  é  igual  a  sua  ordem  de  chegada;  este  caso  acontece  para  apenas 
// uma pessoa.

#include <stdio.h>
#include <string.h>

void main()
{
    int qtde_pessoas;
    printf("Informe a quantidade de pessoas que irao participar: ");
    scanf("%d", &qtde_pessoas);

    char ganhador[15];
    for (int i = 1; i <= qtde_pessoas; i++)
    {
        char nome[15];
        int numero_bilhete;
        printf("Informe o nome e o numero do bilhete: ");
        scanf(" %s%d", nome, &numero_bilhete);

        if (numero_bilhete == i)
        {
            strcpy(ganhador, nome);
        }
    }

    printf("O ganhador eh: %s", ganhador);
}