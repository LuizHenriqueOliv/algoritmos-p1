// Escreva  um  programa  que leia o  número  inteiro  positivo  e  calcule  o  seu  dobro, o seu 
// triplo, o seu quadrado, o seu cubo e a sua raiz quadrada. 
#include <stdio.h>
#include <math.h>

void main()
{
    float number; 
    // ler um número
    printf("Insira um número: ");
    scanf("%f", &number);
    // calcule o dobro, triplo, quadrado, cubo e raiz quadrada
    float double_number = number*2;
    float triple_number = number*3;
    float square_number = number*number;
    float cube_number = number*number*number;
    float square_root_number = sqrt(number);
    // imprima o valor de cada um
    printf("Dobro: %.2f\n", double_number);
    printf("Triplo: %.2f\n", triple_number);
    printf("Quadrado: %.2f\n", square_number);
    printf("Cubo: %.2f\n", cube_number);
    printf("Raíz quadrada: %.2f\n", square_root_number);
}
