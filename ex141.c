// Escreva  um  programa  que  leia  três  números  inteiros  positivos  e  calcule  o  MMC  dos 
// números lidos. 

#include <stdio.h>

int main(){
    int n1, n2, n3;
    printf("Informe 3 numeros inteiros: ");
    scanf("%d%d%d", &n1, &n2, &n3);

    int mmc = 1;
    int divisor_primo = 2;

    while (n1 > 1 || n2 > 1 || n3 > 1){
        while (n1 % divisor_primo == 0 || n2 % divisor_primo == 0 || n3 % divisor_primo == 0){
            mmc *= divisor_primo;

            if (n1 % divisor_primo == 0){
                n1 /= divisor_primo;
            }
            if (n2 % divisor_primo == 0){
                n2 /= divisor_primo;
            }
            if (n3 % divisor_primo == 0){
                n3 /= divisor_primo;
            }
        }
        // find the next prime number
        int divisores = 0, k = divisor_primo;
        while (divisores != 2){
            k += 1;
            divisores = 0;
            for (int i = 1; i <= k; i++){
                if (k % i == 0){
                    divisores++;
                }
            }
            if (divisores == 2){
                divisor_primo = k;
            }
        }   
    }
    
    printf("MMC: %d", mmc);
    return 0;
}