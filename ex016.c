// Escreva  um  programa  que  leia  uma  letra  minúscula  e  imprima  a  sua  letra  maiúscula 
// correspondente. 
#include <stdio.h>

void main()
{
    char letra_minuscula, letra_maiuscula;
    // lendo a letra 
    printf("Informe uma letra minúscula: ");
    scanf("%c", &letra_minuscula);

    // transformando em maiúscula pela tabela ASCII:
    letra_maiuscula = letra_minuscula - 32;

    // imprimindo a letra maiúscula
    printf("%c", letra_maiuscula);
}