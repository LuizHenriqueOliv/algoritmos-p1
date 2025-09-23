// escreva um programa que leia o valor do lado de um quadrado e calcule o valor da área
#include <stdio.h>

int main(){
    float lado;
    printf("Informe o valor do lado: ");
    scanf("%f", &lado);
    float area = lado * lado;
    printf("A area eh: %f", area);
}
