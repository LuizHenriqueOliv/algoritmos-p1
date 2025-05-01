#include <stdio.h>

void main()
{
    float peso, altura, imc; 
    printf("Informe o valor do peso (KG) e altura (M): ");
    scanf("%f%f", &peso, &altura);
    
    imc = peso / (altura * altura);
    printf("O seu IMC eh: %.2f", imc);
}