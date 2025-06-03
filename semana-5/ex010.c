// Escreva  um  programa  que  leia  três  números  inteiros  positivos  e  utilize  o  método  da 
// fatoração para calcular o mínimo múltiplo comum desses números

int main()
{
    // leitura de entrada
    int n1, n2, n3;
    printf("Informe tres numeros inteiros positivos: ");
    scanf("%d%d%d", &n1, &n2, &n3);

    int MMC = 1;
    // calcular o primeiro numero primo
    int divisor = 0;
    for (int i = 2; divisor != 2; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if (i % j == 0)
            {
                divisor++;
            }
        }
        if (divisor == 2)
        {
            int p = i; 
        }

        if (n1 % p = 0) 
        {
            n1 /= p;
        }
        if (n2 % p = 0) 
        {
            n2 /= p;
        }
        if (n3 % p = 0) 
        {
            n3 /= p;
        }
    }

    // verificar se n1 ou n2 ou n3 é divisível por p
        // se sim: dividir e atualizar quem for possível, multiplicar a variável MMC por p.
            // verificar se os novos valores de n1, n2 e n3 são diferentes de 1.
                // se sim: voltar pra linha 29
                // se não: printar o valor do MMC
        // se não: calcular novamente o próximo número primo e voltar pra linha 29

    return 0;
}