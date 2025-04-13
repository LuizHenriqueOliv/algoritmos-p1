#include <stdio.h>

void main()
{
    int k;
    char palavra[100]; // como tornar esse valor dinâmico? para não usar memória demais e nem de menos?
    printf("Insira uma palavra e um número inteiro: ");
    scanf("%s%d", &palavra, &k);

    // calcular
    printf("%c\n", palavra[k-1]);
}