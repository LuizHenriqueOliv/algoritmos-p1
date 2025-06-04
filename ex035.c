// Escreva  um  programa  que  leia  o  valor  de  uma  distância  em  metros  e  calcule  o  seu 
// valor correspondente em quilômetros, hectômetros, decâmetros, centímetros, 
// decímetros e milímetros.
#include <stdio.h>

void main()
{
    float dist_m, km, hm, dam, cm, dm, mm;
    printf("Informe o valor da distancia em metros: ");
    scanf("%f", &dist_m);
    
    km = dist_m/1000;
    hm = dist_m/100;
    dam = dist_m/10;
    dm = dist_m*10;
    cm = dist_m*100;
    mm = dist_m*1000;

    printf("kM: %.2f\n", km);
    printf("hM: %.2f\n", hm);
    printf("daM: %.2f\n", dam);
    printf("dM: %.2f\n", dm);
    printf("cM: %.2f\n", cm);
    printf("mM: %.2f\n", mm);

}