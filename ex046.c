#include <stdio.h>

void main()
{
    int number, centena, dezena, unidade, reverso;
    printf("Informe o numero: ");
    scanf("%d", &number);

    centena = number / 100;
    dezena = (number % 100) / 10; 
    unidade = ((number % 100) % 10); 

    reverso = unidade*100 + dezena*10 + centena;

    printf("%d", reverso);
}