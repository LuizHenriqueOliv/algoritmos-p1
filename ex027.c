#include <stdio.h>

void main()
{
    float comp, larg, vol, alt;

    printf("Informe o valor do comprimento e da largura da cisterna em centimetros: ");
    scanf("%f%f", &comp, &larg);
    printf("Agora informe quantos litros você deseja armazenar na cisterna: ");
    scanf("%f", &vol);

    // alt = (litros * 1000) / larg*comp
    alt = (float)(vol*1000) / (larg*comp);
    printf("A altura do nivel da agua sera: %.2fcm", alt); 
}