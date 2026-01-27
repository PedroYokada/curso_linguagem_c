#include <stdio.h>

int main()
{
    int n;

    printf("Insira um numero para tabuada: ");
    scanf("%d", &n);

    for (int i = 0; i <= 10; i++)
    {
        printf("%d X %d = %d \n", n, i, n * i);
    }

    return 0;
}