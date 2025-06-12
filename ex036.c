#include <stdio.h>

void main()
{
    int a, b, tmp;
    printf("Informe o valor de A e o valor de B: ");
    scanf("%d%d", &a, &b);

    printf("A = %d e B = %d\n", a, b);

    tmp = a;
    a = b; 
    b = tmp; 

    printf("A = %d e B = %d", a, b);
}