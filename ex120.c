// Escreva  um  programa  que  leia  um  número  inteiro  positivo  N  e  imprima  a  maior 
// quantidade  possível  de  números  inteiros  positivos  de  forma  que  a  soma  de  todos  os 
// números impressos seja menor ou igual a N

#include <stdio.h>

int main()
{
    int n;
    printf("Informe um numero inteiro positivo: ");
    scanf("%d", &n);

    int soma = 0;
    for (int i = 1; soma + i <= n; i++)
    {
        printf("%d ", i);
        soma += i;
    }
}