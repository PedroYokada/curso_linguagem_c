#include <stdio.h>

int main()
{
    int n, soma = 0;

    printf("Insira um numero: ");
    scanf("%d",&n);

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            soma += 2;
            printf("%d ", soma);
        }
        printf("\n");
    }
}