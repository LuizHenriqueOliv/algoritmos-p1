#include <stdio.h>

void main()
{
    char texto[50], letra;
    printf("Informe um texto e uma letra: ");
    scanf("%s %c", texto, &letra);

    int counter = 0;

    for (int i = 0; texto[i] != '\0'; i++)
    {
        if (texto[i] == letra)
        {
            counter++;
        }
    }

    printf("A quantidade de letras '%c' no texto eh: %d", letra, counter);
}