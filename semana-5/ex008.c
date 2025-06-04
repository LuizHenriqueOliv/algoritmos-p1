// Escreva um programa que leia dois números inteiros positivos N e M e use o método 
// das  aproximações  sucessivas  de  Newton  para  determinar  a  raiz  enésima  de  M.  De 
// acordo  com  o método de  Newton,  são  calculados diversos  elementos xk,  de  acordo 
// com  as  equações  abaixo.  Inicialmente,  deve  ser  calculado  o  valor  de  x1.  Se  for 
// necessário,  devem  ser  calculados  os  valores  de  x2,  x3  e  assim  sucessivamente.  O 
// cálculo dos números deve ser encerrado quando for gerado um valor xk de forma que 
// o valor absoluto da diferença entre o valor de xk e o valor de xk-1 seja menor do que a 
// precisão desejada. Quando isso acontece, o último xk gerado corresponde ao valor da 
// raiz. Para calcular a raiz, considere x0 = 1 e a precisão de 0,0001.

#include <stdio.h>
#include <math.h>

int main()
{
    int indice, radicando;
    printf("Informe dois inteiros N e M: ");
    scanf("%d%d", &indice, &radicando);

    float y = 1, x, temp;
    do
    {
        temp = y;
        x = y - ((pow(y, indice) - radicando) / (pow(indice * y, indice - 1)));
        y = x;
    } while (fabs(x - temp) >= 0.0001);

    printf("A raiz de %d com indice %d eh %.2f", radicando, indice, x);
}