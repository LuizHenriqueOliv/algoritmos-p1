#include <stdio.h>

void main()
{
    char texto[50];
    printf("Informe um texto: ");
    fgets(texto, 50, stdin);
    
    int maiusculas = 0;
    int minusculas = 0;
    int numerais = 0;
    int demais_caracteres = 0;

    for (int i = 0; texto[i] != '\0'; i++)
    {
        if (texto[i] >= 'A' && texto[i] <= 'Z')
        {
            maiusculas++;
        }
        else if (texto[i] >= 'a' && texto[i] <= 'z')
        {
            minusculas++;
        }
        else if (texto[i] >= '0' && texto[i] <= '9')
        {
            numerais++;
        }
        else
        {
            demais_caracteres++;
        }
    }

    printf("Maiusculas: %d\nMinusculas: %d\nNumerais: %d\nOutros caracteres: %d", maiusculas, minusculas, numerais, demais_caracteres);
}