#include <stdio.h>

void main()
{
    char letra1, letra2, letra_argumento;
    printf("Informe dois caracteres e depois o caracter que deseja modificar: ");
    scanf(" %c %c %c", &letra1, &letra2, &letra_argumento); 
    
    int chave = letra2 - letra1;
    
    char letra_criptografada = (((letra_argumento - 'A' + chave + 26) % 26) + 'A'); 
    
    printf("%c", letra_criptografada);
}