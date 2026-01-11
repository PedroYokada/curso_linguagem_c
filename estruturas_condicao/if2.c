#include <stdio.h>

int main()
{
    int num;

    printf("Insira um numero: ");
    scanf("%d", &num);

    if (num % 2 != 0)
    {
        printf("Numero impar");
    }
    else
    {
        printf("Numero par");
    }
    return 0;
}