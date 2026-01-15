#include <stdio.h>

int main()
{
    int num;

    printf("Insira um numero: ");
    scanf("%d", &num);

    for (int i = 1; i < 11; i++)
    {
        printf("%d * %i = %d \n", num, i, num * i);
    }

    return 0;
}