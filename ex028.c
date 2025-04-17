#include <stdio.h>

int main()
{
    float val_compra, val_vista, val_3parcelas, val_10parcelas;
    printf("Informe o valor da compra: ");
    scanf("%f", &val_compra);

    // cálculo do valor a vista
    val_vista = val_compra*0.9;

    // parcelado em 3 vezes
    val_3parcelas = (val_compra/3.0);

    // parcelado em 10 vezes
    val_10parcelas = (val_compra*1.2)/10;

    printf("O valor da compra a vista eh: %.2fR$\n", val_vista);
    printf("Parcelado em 3 vezes ficam 3 parcelas de %.2fR$\n", val_3parcelas);
    printf("Parcelado em 10 vezes ficam 10 parcelas de %.2fR$", val_10parcelas);
    return 0;
}