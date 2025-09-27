// Escreva um programa que leia dois números inteiros positivos N e M e use o método 
// das  aproximações  sucessivas  de  Newton  para  determinar  a  raiz  enésima  de  M.  De 
// acordo  com  o  método  de  Newton,  são  calculados  diversos  elementos  xk,  de  acordo 
// com  as  equações  abaixo.  Inicialmente,  deve  ser  calculado  o  valor  de  x1.  Se  for 
// necessário,  devem  ser  calculados  os  valores  de  x2,  x3  e  assim  sucessivamente.  O 
// cálculo dos números deve ser encerrado quando for gerado um valor xk de forma que 
// o valor absoluto da diferença entre o valor de xk e o valor de xk-1 seja menor do que a 
// precisão desejada. Quando isso acontece, o último xk gerado corresponde ao valor da 
// raiz. Para calcular a raiz, considere x0 = 1 e a precisão de 0,0001.

#include <stdio.h>
#include <math.h>

const float precision = 0.0001;

int main(){
    int M, N;
    printf("Enter M and N: ");
    scanf("%d%d", &M, &N);
    
    float x_anterior = 1;
    float x_atual = x_anterior - ((pow(x_anterior, N) - M) / (N * pow(x_anterior, N - 1)));

    while (fabs(x_atual - x_anterior) >= precision){
        x_anterior = x_atual;
        x_atual = x_anterior - ((pow(x_anterior, N) - M) / (N * pow(x_anterior, N - 1)));
    }

    printf("Root: %f", x_atual);

    return 0;
}