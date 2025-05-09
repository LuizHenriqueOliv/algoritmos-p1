#include <stdio.h>

void main()
{
    int time1, time2;
    printf("informe quantos gols fez o time 1 e quantos gols fez o time 2: ");
    scanf("%d%d", &time1, &time2);

    if (time1 == time2)
    {
        printf("Empate");
    }
    else if (time1 > time2)
    {
        printf("Vitoria do time da casa");
    }
    else
    {
        printf("Vitoria do time de fora");
    }
}