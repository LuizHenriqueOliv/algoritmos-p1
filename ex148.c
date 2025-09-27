// Escreva um programa que permita que o usuário jogue o jogo do “arrochado”. Neste 
// jogo, o programa gera um número aleatório entre 1 e 100 e o usuário deve 
// “arrochar” o número gerado pelo computador. A cada jogada, os limites do jogo vão 
// se estreitando de acordo com os valores digitados pelo usuário. O jogo acaba quando 
// o  usuário  consegue  imprensar  o  número  gerado  pelo  computador  (neste  caso  ele 
// ganha)  ou  quando  o  usuário  entra  com  o  número  gerado  pelo  computador  (neste 
// caso  ele  perde).  Em  pascal,  use  a  função  random  ou  randomize  para  a  geração  de 
// números aleatórios. 

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(0));
    int random_number = (rand() % 100) + 1;    
    int n, min = 1, max = 100;
    
    while (1){
        if (min == random_number - 1 && max == random_number + 1){
            printf("Win! The random number was %d.", random_number);
            return 0;
        }
        printf("Enter a number: ");
        scanf("%d", &n);

        if (n > random_number){
            max = n;
            printf("[%d, %d]", min, max);
        }
        else if (n < random_number){
            min = n;
            printf("[%d, %d]", min, max);
        }
        else {
            printf("Lose! You Say The Random Number: %d", random_number);
            return 0;
        }
    } 

    return 0;
}