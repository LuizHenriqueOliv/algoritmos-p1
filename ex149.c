// Escreva  um  programa  que  leia  vários  itens  de  uma  compra  feita  pelo  usuário.  Para 
// cada item, o usuário deve informar o seu nome, o seu preço unitário e a quantidade 
// comprada.  Após  cada  leitura,  o  programa  deve  perguntar  ao  usuário  se  ele  deseja 
// adicionar  um  novo  item  ou  fechar  a  conta.  O  programa  deve  considerar  que  o 
// usuário  irá  digitar  pelo  menos  um  item.  Após  terminar  a  leitura,  o  programa  deve 
// mostrar o valor da conta à vista e o valor da conta a prazo. O valor da conta a prazo 
// corresponde  à  soma  do  valor  total  de  cada  item  digitado  pelo  usuário.  O  valor  da 
// conta à vista corresponde ao valor da conta a prazo com um desconto de 15%. 

#include <stdio.h>

const float discount = 15; // in percentage 

int main(){
    char item[10];
    char answer = 'y';
    float total_value = 0, price;
    int quantity;

    while (answer != 'n'){
        printf("Item: ");
        scanf("%s", item);

        printf("Price: ");
        scanf("%f", &price);

        printf("Quantity: ");
        scanf("%d", &quantity);

        total_value += (price * quantity);

        printf("Do you want add more item? Enter 'y' for yes or 'n' for not: ");
        scanf(" %c", &answer);
    }

    float term_value = total_value;
    float cash_value = term_value * (1 - (discount/100));

    printf("Term Value: %f\n", term_value);
    printf("Cash value: %f", cash_value);
    return 0;
}