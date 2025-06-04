// Escreva  um  programa  que  leia  um  valor  em  KB  e  calcule  o  seu  valor  correspondente 
// em bits, bytes, MB e GB.
#include <stdio.h>

void main()
{
    float kb, bits, bytes, mb, gb; 
    printf("Informe o valor em kb: ");
    scanf("%f", &kb);

    bits = kb*1024*8;
    bytes = kb*1024;
    mb = kb/1024;
    gb = kb/(1024*1024);

    printf("O valor em bits é: %.2f\n", bits);
    printf("O valor em bits é: %.2f\n", bytes);
    printf("O valor em bits é: %.2f\n", mb);
    printf("O valor em bits é: %.2f", gb);
}