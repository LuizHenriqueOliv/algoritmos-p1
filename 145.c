// Escreva  um  programa  que  leia  um  número  inteiro  N  e,  a  seguir  leia  vários  números 
// inteiros.  O  processo  de  leitura  deve  ser  encerrado  quando  a  soma  dos  números 
// digitados pelo usuário (excluindo-se o valor de N) for superior ao valor de N. 

#include <stdio.h>

int main()
{
    int n;
    printf("Enter a integer n: ");
    scanf("%d", &n);

    int sum = 0;
    while (sum <= n){
        int k;
        printf("Enter a number k: ");
        scanf("%d", &k);
        sum += k;
    }

    printf("Sum: %d", sum);
    return 0;
}
