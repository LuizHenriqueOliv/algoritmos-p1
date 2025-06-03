// Escreva  um  programa  que  leia  vários  itens  de  uma  compra  feita  pelo  usuário.  Para 
// cada  item,  o  usuário deve  informar  o  seu  nome,  o  seu  preço  unitário e  a quantidade 
// comprada.  Após  cada  leitura,  o  programa  deve  perguntar  ao  usuário  se  ele  deseja 
// adicionar um novo item ou fechar a conta. O programa deve considerar que o usuário 
// irá  digitar  pelo  menos  um  item.  Após  terminar  a  leitura,  o  programa  deve  mostrar  o 
// valor da conta à vista e o valor da conta a prazo. O valor da conta a prazo corresponde 
// à  soma  do  valor  total  de  cada  item  digitado  pelo  usuário.  O  valor  da  conta  à  vista 
// corresponde ao valor da conta a prazo com um desconto de 15%. 

#include <stdio.h>

int main()
{
    float valor_conta = 0;
    char resposta;

    do
    {
        char nome[10];
        float preco;
        int quantidade;
        printf("Informe o nome do item, o preco e a quantidade: ");
        scanf("%s%f%d", nome, &preco, &quantidade);
        
        valor_conta += quantidade * preco;

        printf("Digite S para adicionar um novo item, e N para fechar a conta: ");
        scanf(" %c", &resposta);

    } while (resposta == 'S'|| resposta == 's');

    float valor_conta_vista = valor_conta * 0.85;

    printf("Valor da conta a prazo: %f\n", valor_conta);
    printf("Valor da conta a vista: %f", valor_conta_vista);
    return 0;
}