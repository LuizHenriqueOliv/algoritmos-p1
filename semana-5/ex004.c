// Escreva  um  programa  que  leia  vários  saques  e,  para  cada  valor  sacado,  informe  a 
// quantidade de cédulas que devem ser entregues de cada tipo. Para isso, considere que 
// o  caixa  eletrônico  tem  cédulas  de  R$  100,00,  R$  50,00,  R$  20,00  e  R$  10,00  e  que  a 
// quantidade  de  cada  tipo  de  cédula  é  infinita.  Em  cada  saque,  o  programa  deve  dar 
// preferência  ao  uso  de  cédulas  maiores.  Caso  o  usuário  informe  um  valor  que  não 
// possa ser sacado, o programa deve exibir uma mensagem informando que o saque não 
// poderá ser realizado. O processo de leitura deve ser encerrado quando o total de todos 
// os  saques  realizados  ultrapassar  R$  10.000,00.  Ao  fim  da  leitura,  o  programa  deve 
// informar o total de todos os saques realizados e o total de cédulas usadas de cada tipo.

#include <stdio.h>

int main()
{
    int qtd_saques = 0;
    float valor_sacado = 0;

    int ced_100_totais = 0, ced_50_totais = 0, ced_20_totais = 0, ced_10_totais = 0;
    do 
    {
        float valor_saque;
        printf("Informe o valor que voce deseja sacar: ");
        scanf("%f", &valor_saque);

        if ((int)valor_saque % 10 != 0)
        {
            printf("O valor não pode ser sacado.");
        }
        else
        {
            valor_sacado += valor_saque;

            int cedulas_100 = valor_saque / 100;
            valor_saque -= cedulas_100 * 100;
    
            int cedulas_50 = valor_saque / 50;
            valor_saque -= cedulas_50 * 50;
    
            int cedulas_20 = valor_saque / 20;
            valor_saque -= cedulas_20 * 20;
    
            int cedulas_10 = valor_saque / 10;
    
            printf("Cedulas de 100R$: %d\n", cedulas_100);
            printf("Cedulas de 50R$: %d\n", cedulas_50);
            printf("Cedulas de 20R$: %d\n", cedulas_20);
            printf("Cedulas de 10R$: %d\n", cedulas_10);
    
            ced_100_totais += cedulas_100;
            ced_50_totais += cedulas_50;
            ced_20_totais += cedulas_20;
            ced_10_totais += cedulas_10;
            qtd_saques++;
        }

    } while (valor_sacado <= 10000);

    printf("O valor total sacado foi: R$%.3f\n", valor_sacado);
    printf("A quantidade total de saques foi: %d", qtd_saques);
    return 0;
}