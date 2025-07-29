#include <stdio.h>
#include <math.h>

void main(){
    int n;
    printf("Informe um numero inteiro entre 0 e 255: ");
    scanf("%d", &n);

    for (int i = 7; i >= 0; i--){
        if (n - pow(2, i) >= 0){
            printf("1");
            n -= pow(2, i);
        } else {
            printf("0");
        }
    }
}
