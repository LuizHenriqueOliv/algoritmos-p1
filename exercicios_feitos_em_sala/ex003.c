// escreva um programa que leia 3 numeros reais e calcule a média aritmética
#include <stdio.h>

int main(){
    float n1, n2, n3, media;
    printf("Informe tres numeros: ");
    scanf("%f%f%f", &n1, &n2, &n3);

    media = (n1 + n2 + n3) / 3;
    printf("A media eh: %f\n", media);
    return 0;
}