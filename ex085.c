#include <stdio.h>

void main()
{
    int number1, number2;
    char operador;
    printf("Informe 2 numeros e um operador(+, -, /, *): ");
    scanf("%d%d %c", &number1, &number2, &operador);

    switch (operador)
    {
        case '+':
        {
            int soma = number1 + number2;
            printf("%d + %d = %d", number1, number2, soma); break;
        } 

        case '-': 
        {
            int diferenca = number1 - number2;
            printf("%d - %d = %d", number1, number2, diferenca); break;
        }

        case '/':
        {
            if (number2 == 0)
            {
                printf("informe um denominador valido!");
                return;
            } 
            float quociente = number1 / (float)number2; 
            printf("%d / %d = %f", number1, number2, quociente); break;
        }

        case '*': 
        {
            int multiplicacao = number1 * number2;
            printf("%d * %d = %d", number1, number2, multiplicacao); break;
        }

        default: printf("Insira um operador valido");
    }
}