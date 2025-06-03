// Escreva um programa que leia um texto de até 150 caracteres e informe a quantidade 
// de  ocorrências  de  cada  letra  (dica:  use  um  vetor  para  armazenar  a  quantidade  de 
// ocorrências de cada letra). 

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char texto[150];
    printf("Informe um texto de até 150 caracteres: ");
    fgets(texto, 150, stdin);

    int qtd_letras[26] = {0};
    int tamanho_texto = strlen(texto);
    
    for (int i = 0; i < tamanho_texto; i++)
    {
        if (isalpha(texto[i]))
        {
            char letra = tolower(texto[i]); 
            qtd_letras[letra - 'a'] += 1;
        }
    }

    for (int i = 0; i < 26; i++)
    {
        printf("Quantidade de letras %c eh: %d\n", i + 'a', qtd_letras[i]);
    }

    return 0;   
}