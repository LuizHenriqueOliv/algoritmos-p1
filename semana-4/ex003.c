#include <stdio.h>

int main()
{
    float soma = 0;
    int contador = 0;
    do 
    {
        int n;
        printf("Informe um numero inteiro: ");
        scanf("%d", &n);

        soma += n;
        contador++;
    } while (soma <= 50);

    float media = soma / contador;
    
    printf("A media eh: %.2f", media);
}