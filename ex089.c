#include <stdio.h>

void main()
{
    int number;
    printf("Informe um numero entre 1 e 999: ");
    scanf("%d", &number);

    // calcular quantas letras de cada algarismo vão ser necessárias
    int qtd_D = number / 500;
    int qtd_C = (number % 500) / 100;
    int qtd_L = ((number % 500) % 100) / 50;
    int qtd_X = (((number % 500) % 100) % 50) / 10;
    int qtd_V = ((((number % 500) % 100) % 50) % 10) / 5;
    int qtd_I = (((((number % 500) % 100) % 50) % 10) % 5);

    // casos que envolvem a subtração
    switch (number)
    {
        case 4: printf("IV"); return;
        case 9: printf("IX"); return;
        case 40: printf("XL"); return;
        case 90: printf("XC"); return;
        case 400: printf("CD"); return;
        case 900: printf("CM"); return;
    }


    // printar a quantidade de letras de acordo com a quantidade necessária na ordem: do Maior para o menor.
    switch (qtd_D)
    {
        case 3: printf("D");
        case 2: printf("D");
        case 1: printf("D");
    }
    switch (qtd_C)
    {
        case 3: printf("C");
        case 2: printf("C");
        case 1: printf("C");
    }
    switch (qtd_L)
    {
        case 3: printf("L");
        case 2: printf("L");
        case 1: printf("L");
    }
    switch (qtd_X)
    {
        case 3: printf("X");
        case 2: printf("X");
        case 1: printf("X");
    }
    switch (qtd_V)
    {
        case 3: printf("V");
        case 2: printf("V");
        case 1: printf("V");
    }
    switch (qtd_I)
    {
        case 3: printf("I");
        case 2: printf("I");
        case 1: printf("I");
    }
}