// Escreva  um  programa  que  leia  dois  strings  de  até  10  caracteres  e  copie  o  valor  do 
// segundo  string  para  o  primeiro.  O  programa  deve  ser  resolvido  sem  a  utilização  de 
// qualquer função para a manipulação de strings. 

#include <stdio.h>

int main()
{
    char string1[11], string2[11];
    printf("Informe duas palavras de até 10 caracteres: ");
    scanf("%s%s", string1, string2);

    int i;
    for (i = 0; string2[i] != '\0'; i++)
    {
        string1[i] = string2[i];
    }

    string1[i] = '\0';  
    
    printf("Primeiro string agora eh: %s", string1);

    return 0;
}