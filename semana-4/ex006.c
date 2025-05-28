#include <stdio.h>

int main()
{
    for (int i = 1000; i <= 9999; i++)
    {
        int dig_1 = i / 1000;
        int dig_2 = (i % 1000) / 100;
        int dig_3 = ((i % 1000) % 100) / 10;
        int dig_4 = ((i % 1000) % 100) % 10;

        if (dig_1 == dig_4 && dig_2 == dig_3)
        {
            printf("%d\n", i);
        }
    }
}