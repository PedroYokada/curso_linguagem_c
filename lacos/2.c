#include <stdio.h>

int main()
{
    int n, soma = 0;

    printf("Insira um numero: ");
    scanf("%d", &n);

    printf("CALCULO = ");

    for (int i = 1; i <= n; i++)
    {
        if (i < n)
        {
            soma += i;
            printf("%d + ", i);
        }
        else
        {
            soma += i;
            printf("%d  ", i);
        }
    }
    printf("\n");

    printf("A SOMA 1 ATE %d = %d ", n,soma);

    return 0;
}