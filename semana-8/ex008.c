// Escreva um programa que leia cinco números inteiros do intervalo entre 1000 e 9999 e, para 
// cada número, verifique se ele é ou não um palíndromo. A verificação deve ser feita por meio 
// de um subprograma.

#include <stdio.h>

int verificaPalindromo(int numero){
    int primeiro_dig = numero / 1000;
    int segundo_dig = (numero / 100) % 10;
    int terceiro_dig = (numero / 10) % 10;
    int quarto_dig = numero % 10;

    if (primeiro_dig == quarto_dig && segundo_dig == terceiro_dig){
        return 1;
    } else {
        return 0;
    }
}

int main(){
    int numero;
    for (int i = 0; i < 5; i++){
        printf("Informe um numero: ");
        scanf("%d", &numero);
        if (verificaPalindromo(numero) == 1){
            printf("Eh um palindromoo.\n");
        } else {
            printf("Nao eh um palindromo.\n");
        }
    }
}