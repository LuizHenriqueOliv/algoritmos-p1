// Escreva um programa que leia dois strings de até 10 caracteres e concatene esses dois 
// valores  em  um  terceiro  string.  O  programa  deve  ser  resolvido  sem  a  utilização  de 
// qualquer função para a manipulação de strings. 

#include <stdio.h>

int main()
{
    char string1[11], string2[11], string3[21];
    printf("Informe duas strings de ate 10 caracteres: ");
    scanf("%10s%10s", string1, string2);

    int i;
    for (i = 0; string1[i] != '\0'; i++)
    {
        string3[i] = string1[i]; 
    }

    for (int j = 0; string2[j] != '\0'; j++, i++)
    {
        string3[i] = string2[j];
    }

    string3[i] = '\0';

    printf("A string3 eh: %s", string3);
}