// O Banco do Povo está realizando uma grande promoção em seus financiamentos. Ele 
// financia qualque1 < qtd_parcelas || r valor em até 240 prestações. O valor da primeira prestação>
// corresponde  ao  valor  do  empréstimo  dividido  pelo  número  de  parcelas.  Os  valores 
// das demais prestações correspondem ao valor da parcela anterior acrescido de uma 
// taxa  de  juros  de  7%.  Escreva  um  programa  que  leia o  valor  a  ser  financiado  por  um 
// cliente  e  o  número  de  prestações  desejadas  e  calcule:  o  valor  de  cada  prestação,  o 
// valor total que o cliente vai pagar pelo empréstimo e  a diferença entre o valor a ser 
// pago e o valor financiado. 

#include <stdio.h>

const float taxa = 1.07;

int main(){
    float valor_financiado;
    printf("Informe o valor do empréstimo: ");
    scanf("%f", &valor_financiado);

    int qtd_parcelas;
    do {
        printf("Informe agora em quantas vezes deseja parcelar: ");
        scanf("%d", &qtd_parcelas);
    } while (1 > qtd_parcelas || qtd_parcelas > 240);

    float primeira_parcela = valor_financiado / qtd_parcelas;
    printf("Parcela 1: %.2f\n", primeira_parcela);

    float ultima_parcela = primeira_parcela;
    float valor_total_pago = primeira_parcela;

    for (int i = 2; i <= qtd_parcelas; i++){
        float parcela_atual = ultima_parcela * taxa;
        valor_total_pago += parcela_atual;

        printf("Parcela %d: %.2f\n", i, parcela_atual);

        ultima_parcela = parcela_atual;
    }

    float diferenca = valor_total_pago - valor_financiado;

    printf("Valor total pago: %.2f\n", valor_total_pago);
    printf("Diferenca: %.2f", diferenca);

    return 0;
}