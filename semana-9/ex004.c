// Escreva um programa em c que leia dois vetores de dez números reais cada e calcule o 
// cosseno do ângulo formado pelos dois vetores. O cosseno do ângulo formado por dois vetores 
// u = (x1, x2, ..., xN) e v = (y1, y2, ..., yN) é calculado através da fórmula abaixo. O programa deve 
// ter pelo menos três subprogramas. O primeiro subprograma deve receber como parâmetro 
// de  entrada  um  vetor  de  três  dimensões  e  calcular  o  valor  do  seu  módulo.  O  segundo 
// subprograma deve receber como parâmetro de entrada dois vetores de três dimensões cada 
// e calcular o seu produto interno. O terceiro vetor deve receber como parâmetro de entrada 
// dois vetores de três dimensões e deve usar os dois primeiros subprogramas para calcular o 
// cosseno do ângulo formado pelos mesmos.  

#include <stdio.h>
#include <math.h>

float calcularModulo(float vetor[3]){
    float moduloVetor = sqrt(pow(vetor[0], 2) + pow(vetor[1], 2) + pow(vetor[2], 2));
    return moduloVetor; 
}

float calcularProdutoInterno(float vetorU[3], float vetorV[3]){
    float produtoInterno = ((vetorU[0]*vetorV[0]) + (vetorU[1]*vetorV[1]) + (vetorU[2]*vetorV[2]));
    return produtoInterno;   
}

float calcularCosseno(float vetorU[3], float vetorV[3]){
    float cosseno = (calcularProdutoInterno(vetorU, vetorV)) / (calcularModulo(vetorU)*calcularModulo(vetorV));
    return cosseno;
}

int main(){
    float vetorU[3], vetorV[3];
    for (int i = 0; i < 3; i++){
        printf("Informe um numero para o vetorU: ");
        scanf("%f", &vetorU[i]);
    }

    for (int i = 0; i < 3; i++){
        printf("Informe um numero para o vetorV: ");
        scanf("%f", &vetorV[i]);
    }
    
    float cossenoAngulo = calcularCosseno(vetorU, vetorV);
    printf("O cosseno do angulo formado pelos dois vetores eh: %f.", cossenoAngulo);

    return 0;
}