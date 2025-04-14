#include <stdio.h>

void main()
{
    int number;
    printf("Informe um número: ");
    scanf("%d", &number);
    
    printf("1 * %d = %d\n", number, number*1);
    printf("2 * %d = %d\n", number, number*2);
    printf("3 * %d = %d\n", number, number*3);
    printf("4 * %d = %d\n", number, number*4);
    printf("5 * %d = %d\n", number, number*5);
}