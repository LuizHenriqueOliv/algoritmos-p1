// Escreva  um  programa  que  leia  10  números  reais  distintos  e  calcule  o  segundo  maior 
// número lido.

#include <stdio.h>

void main()
{
    float n, maior_num, segundo_maior;

    printf("Informe um numero: ");
    scanf("%f", &n);
    maior_num = n;
    
    printf("Informe um numero: ");
    scanf("%f", &n);
    segundo_maior = n;
    
    if (segundo_maior > maior_num)
    {
        float temp = maior_num;
        maior_num = segundo_maior;
        segundo_maior = temp;
    }

    for (int i  = 0; i < 8; i++)
    {
        printf("Informe um numero: ");
        scanf("%f", &n);

        if (n > maior_num)
        {
            segundo_maior = maior_num;
            maior_num = n;
        }
        else if (n > segundo_maior)
        {
            segundo_maior = n;
        }   
    }    
    printf("%.2f", segundo_maior);
}