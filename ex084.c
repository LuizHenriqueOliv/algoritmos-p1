#include <stdio.h>
#include <math.h>

void main()
{
    float peso, altura;
    printf("Informe o peso e altura(em metros): ");
    scanf("%f%f", &peso, &altura);

    float IMC = peso / pow(altura, 2);

    if (IMC >= 18 && IMC <= 25)
    {
        printf("Está na faixa de peso ideal!");
    }
    else if (IMC < 18)
    {
        float peso_ideal = 18 * pow(altura, 2);  
        printf("Está abaixo do peso! Precisa ganhar %.2fKg(s)", peso_ideal - peso);
    }
    else 
    {
        float peso_ideal = 25 * pow(altura, 2);
        printf("Está acima do peso! Precisa perder %.2fKg(s)", peso - peso_ideal);
    }
}