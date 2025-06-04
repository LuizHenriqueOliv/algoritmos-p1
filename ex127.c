// Escreva  um  programa  que  leia  várias  palavras  e,  para  cada  palavra  lida,  determine  o 
// seu número de letras. O processamento deverá ser encerrado quando forem lidas duas 
// palavras de cinco letras.  

#include <stdio.h>
#include <string.h>

int main()
{
    char palavra[25];
    
    int qtde_palavras = 0; // quantidade de palavras com 5 letras
    while (qtde_palavras < 2)
    {
        printf("Informe uma palavra: ");
        scanf("%s", palavra);

        int tamanho = strlen(palavra);
        printf("%d letras\n", tamanho);
        if (tamanho == 5)
        {
            qtde_palavras++;
        }
    }
    return 0;
}