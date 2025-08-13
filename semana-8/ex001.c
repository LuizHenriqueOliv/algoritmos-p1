// Escreva  um  programa  que  leia  três  números  inteiros  e  calcule  a  sua  média  aritmética.  O 
// cálculo da média deve ser realizado através de um subprograma

#include <stdio.h>

float calcularMediaAritmetica(int n1, int n2, int n3){
    float media = (n1 + n2 + n3) / 3.0;
    return media;
}

int main(){
    int n1, n2, n3;
    printf("Informe tres numeros inteiros: ");
    scanf("%d%d%d", &n1, &n2, &n3);

    float mediaAritmetica = calcularMediaAritmetica(n1, n2, n3);
    printf("A media aritmetica dos 3 numeros eh: %f", mediaAritmetica);  
    
    return 0;  
}