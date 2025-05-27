#include <stdio.h>

void main()
{
    for (int i = 2; i <= 100; i++)
    {
        int divisores = 0;
        for (int j = 1; j <= i; j++)
        {
            if (i % j == 0)
            {
                divisores++;
            }
        }
        if (divisores == 2)
        {
            printf("%d ", i);
        }
    }    
}