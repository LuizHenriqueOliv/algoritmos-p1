#include <stdio.h>

int main(){
    int certas, erradas, total;
    printf("Informe quantas você acertou e quantas errou: ");
    scanf("%d%d", &certas, &erradas);
    total = (certas * 5) - (erradas * 3);
    printf("A pontuação final foi: %d", total);

    return 0;
}