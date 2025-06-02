#include <stdio.h>

int main()
{
    float termo_inicial, razao;
    printf("Informe o termo inicial e a razao da PA: ");
    scanf("%f%f", &termo_inicial, &razao);
    
    int n;
    printf("Informe um numero inteiro N: ");
    scanf("%d", &n);
    
    for (int i = 1; i <= n; i++)
    {
        int an = termo_inicial + (i - 1) * razao;
        printf("%d ", an);
    }
    return 0;
}