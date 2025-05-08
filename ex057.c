#include <stdio.h>

void main()
{
    float valor_passagem_reais, valor_passagem_milhas;
    printf("Informe o valor da passagem em reais e depois o valor da passagem em milhas: ");
    scanf("%f%f", &valor_passagem_reais, &valor_passagem_milhas);

    float passagem_caio_reais;
    printf("Informe agora o valor da passagem que Caio deseja comprar: ");
    scanf("%f", &passagem_caio_reais);

    // cálculo de quantas milhas ele vai precisar
    float milhas_necessarias = (passagem_caio_reais * valor_passagem_milhas) / valor_passagem_reais;

    printf("O valor necessario de milhas eh: %.0f", milhas_necessarias);
}