#include <stdio.h>

int main(){
    int n;
    printf("Informe o numero de linhas e colunas: ");
    scanf("%d", &n);

    int tabuleiro[n][n];
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if (i == 0 && j == 0){
                tabuleiro[i][j] = 1;
            } else if (j == 0) {
                tabuleiro[i][j] = tabuleiro[i-1][n-1] * 2;
            } else {
                tabuleiro[i][j] = tabuleiro[i][j-1] * 2;
            }
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }
    return 0;
}