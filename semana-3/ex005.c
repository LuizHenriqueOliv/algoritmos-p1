#include <stdio.h>

void main()
{
    int termo_anterior = 0;
    int termo_atual = 1;
    int termo_novo = termo_anterior + termo_atual;

    int n;
    printf("Informe o valor de N: ");
    scanf("%d", &n);

    int enesimo_termo = termo_novo;

    if (n == 1 || n == 2)
    {
        printf("%d", enesimo_termo);
        return;
    }

    for (int i = 2; i < n; i++)
    {
        termo_anterior = termo_atual;
        termo_atual = termo_novo;
        termo_novo = termo_anterior + termo_atual;
        
        enesimo_termo = termo_novo;
    }

    printf("%d", enesimo_termo);
}