#include <stdio.h>

int main()
{
    float n1, n2, n3, n4;
    printf("Informe 4 numeros reais: ");
    scanf("%f%f%f%f", &n1, &n2, &n3, &n4);

    if ((n2 - n1 == n3 - n2 && n3 - n2 == n4 - n3) && (n2 / n1 == n3 / n2 && n3 / n2 == n4 / n3))
    {
        printf("Sao os dois tipos de progressao.\n");
    }
    else if (n2 / n1 == n3 / n2 && n3 / n2 == n4 / n3)
    {
        printf("eh uma PG.\n");
    }
    else if (n2 - n1 == n3 - n2 && n3 - n2 == n4 - n3)
    {
        printf("eh uma PA.");
    }
    else
    {
        printf("Nao eh nem um tipo de progressao.");
    }


}