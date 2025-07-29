#include <math.h>
#include <stdio.h>

void main(){
    float vetU[3], vetV[3];
    for (int i = 0; i < 3; i++){
        printf("Informe os valores para o vetor U: ");
        scanf("%f", &vetU[i]);
    }
    for (int i = 0; i < 3; i++){
        printf("Informe os valores para o vetor V: ");
        scanf("%f", &vetV[i]);
    }

    float UV = 0;
    for (int i = 0; i < 3; i++){
        UV += vetU[i] * vetV[i];
    }

    float U = sqrt(pow(vetU[0], 2) + pow(vetU[1], 2) + pow(vetU[2], 2));
    float V = sqrt(pow(vetV[0], 2) + pow(vetV[1], 2) + pow(vetV[2], 2));

    float cosseno = UV / (U * V);
    printf("O cosseno formado pelos dois vetores eh: %.2f", cosseno);

}