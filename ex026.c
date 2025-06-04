// Escreva um programa que leia o peso e a altura dos atletas das quatro duplas que vão 
// participar  de  um  torneio  de  vôlei  de  praia  e  calcule  o  peso  e  a  altura  média  de  cada 
// dupla e o peso e a altura média de todos os jogadores do torneio. 
#include <stdio.h>

int main()
{
    // peso dos atletas
    float p_atleta11, p_atleta21, p_atleta12, p_atleta22, p_atleta13, p_atleta23, p_atleta14, p_atleta24;
    // altura dos atletas
    float alt_atleta11, alt_atleta21, alt_atleta12, alt_atleta22, alt_atleta13, alt_atleta23, alt_atleta14, alt_atleta24;

    // dupla 1
    printf("Informe a altura e peso do Atleta 1 da Dupla 1: ");
    scanf("%f%f", &alt_atleta11, &p_atleta11);
    printf("Informe a altura e peso do Atleta 2 da Dupla 1: ");
    scanf("%f%f", &alt_atleta21, &p_atleta21);

    // dupla 2
    printf("Informe a altura e peso do Atleta 1 da Dupla 2: ");
    scanf("%f%f", &alt_atleta12, &p_atleta12);
    printf("Informe a altura e peso do Atleta 2 da Dupla 2: ");
    scanf("%f%f", &alt_atleta22, &p_atleta22);

    // dupla 3
    printf("Informe a altura e peso do Atleta 1 da Dupla 3: ");
    scanf("%f%f", &alt_atleta13, &p_atleta13);
    printf("Informe a altura e peso do Atleta 2 da Dupla 3: ");
    scanf("%f%f", &alt_atleta23, &p_atleta23);
    
    // dupla 4
    printf("Informe a altura e peso do Atleta 1 da Dupla 4: ");
    scanf("%f%f", &alt_atleta14, &p_atleta14);
    printf("Informe a altura e peso do Atleta 2 da Dupla 4: ");
    scanf("%f%f", &alt_atleta24, &p_atleta24);

    // cálculo das médias
        // dupla 1 
        float alt_1 = (alt_atleta11+alt_atleta21)/2.0;
        float p_1 = (p_atleta11+p_atleta21)/2.0;

        // dupla 2
        float alt_2 = (alt_atleta12+alt_atleta22)/2.0;
        float p_2 = (p_atleta12+p_atleta22)/2.0;

        // dupla 3
        float alt_3 = (alt_atleta13+alt_atleta23)/2.0;
        float p_3 = (p_atleta13+p_atleta23)/2.0;

        // dupla 4
        float alt_4 = (alt_atleta14+alt_atleta24)/2.0;
        float p_4 = (p_atleta14+p_atleta24)/2.0;

        // media geral
        float alt_geral = (alt_1+alt_2+alt_3+alt_4)/4;
        float p_geral = (p_1+p_2+p_3+p_4)/4;
    
    printf("Dupla: 1 | Altura Media: %.2f | Peso Medio: %.2f\n", alt_1, p_1);
    printf("Dupla: 2 | Altura Media: %.2f | Peso Medio: %.2f\n", alt_2, p_2);
    printf("Dupla: 3 | Altura Media: %.2f | Peso Medio: %.2f\n", alt_3, p_3);
    printf("Dupla: 4 | Altura Media: %.2f | Peso Medio: %.2f\n", alt_4, p_4);
    
    printf("Altura média geral: %.2f\n", alt_geral);
    printf("Peso médio geral: %.2f", p_geral);
    
    return 0;
}