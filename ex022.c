// Escreva  um  programa  que  leia  dois  números  inteiros  a  e  b  e  determine  o  maior 
// múltiplo de a que é menor ou igual a b. Por exemplo, o maior múltiplo de 3 menor ou 
// igual a 50 é 48.  
#include <stdio.h>

void main()
{
    int primeiro, limite, maior_multiplo;
    printf("Informes os dois numeros: ");
    scanf("%d%d", &primeiro,  &limite);

    // calculando
    maior_multiplo = (limite/primeiro)*primeiro;

    printf("O maior multiplo eh: %d\n", maior_multiplo);
}