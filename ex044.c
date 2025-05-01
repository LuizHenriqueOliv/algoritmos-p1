#include <stdio.h>
#include <math.h>

void main()
{
    int number, dig_4, dig_3, dig_2, dig_1, valor; 
    printf("informe o numero binario: ");
    scanf("%d", &number);

    dig_4 = number / 1000;
    dig_3 = (number % 1000) / 100;
    dig_2 =  ((number % 1000) % 100) / 10;
    dig_1 = (((number % 1000) % 100) % 10); 

    valor = dig_4 * pow(2, 3) + dig_3 * pow(2, 2) + dig_2 * pow(2, 1) + dig_1 * pow(2, 0);
    
    printf("O valor real eh: %d", valor);
}