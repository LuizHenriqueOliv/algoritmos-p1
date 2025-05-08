#include <stdio.h>

void main()
{
    int n1, n2, n3;
    printf("Informe tres numeros inteiros: ");
    scanf("%d%d%d", &n1, &n2, &n3);
    
    if (n1 > n2 && n1 > n3)
    {
        printf("%d eh o maior numero", n1);
    }
    else if (n2 > n1 && n2 > n3)
    {
        printf("%d eh o maior numero", n2);
    }
    else if (n3 > n2 && n3 > n1)
    {
        printf("%d eh o maior numero", n3);
    }
    else 
    {
        printf("nao ha um numero maior que todos");
    }
}