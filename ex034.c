#include <stdio.h>

void main()
{
    int dia_compra, mes_compra, prazo_entrega, dia_entrega, mes_entrega;
    printf("Informe o dia da compra, o mes e o prazo de entrega: ");
    scanf("%d%d%d", &dia_compra, &mes_compra, &prazo_entrega);
    
    int total_dias = dia_compra + prazo_entrega;
    dia_entrega = (total_dias) % 30;
    mes_entrega = (((total_dias) / 30) + mes_compra) % 12;  

    printf("O dia de entrega eh: %d/%d", dia_entrega, mes_entrega);
}