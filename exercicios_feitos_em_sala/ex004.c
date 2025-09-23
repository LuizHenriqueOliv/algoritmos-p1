// escreva um programa que leia os valores dos dois catetos de um triangulo e calcule a hipotenusa
#include <stdio.h>
#include <math.h>

int main(){
    float cateto_a, cateto_b, hipotenusa;
    printf("Insira o valor dos catetos: ");
    scanf("%f%f", &cateto_a, &cateto_b);

    hipotenusa = sqrt(cateto_a * cateto_a + cateto_b * cateto_b);

    printf("Hipotenusa: %f", hipotenusa);
    return 0;
}