// Escreva  um  programa  que  leia  o  valor  dos  dois  catetos  de  um  triângulo  retângulo  e 
// calcule o valor da hipotenusa.
#include <stdio.h>
#include <math.h>

void main()
{
    float cateto1, cateto2, hipotenusa;
    printf("Informe o valor dos dois catetos: ");
    scanf("%f%f", &cateto1, &cateto2);
    hipotenusa = sqrt(pow(cateto1, 2) + pow(cateto2, 2)); 
    printf("O valor da hipotenusa eh: %.1f", hipotenusa);
}