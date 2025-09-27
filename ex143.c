// Escreva  um  programa  que  leia  dez  números  inteiros  e  calcule  a  diferença  entre  os 
// dois maiores números digitados pelo usuário. 

#include <stdio.h>

int main(){
    int maior_numero, segundo_maior, numero_atual;

    printf("Informe um numero: ");
    scanf("%d", &maior_numero);

    for (int i = 0; i < 9; i++){
        printf("Informe um numero: ");
        scanf("%d", &numero_atual);
        if (numero_atual > maior_numero){
            segundo_maior = maior_numero;
            maior_numero = numero_atual;
        }
    }

    int diferenca = maior_numero - segundo_maior;
    printf("%d", diferenca);

    return 0;
}