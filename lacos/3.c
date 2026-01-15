#include <stdio.h>

int main()
{
    int num;

    printf("Insira um numero: ");
    scanf("%d", &num);

    printf("Tabuada do numero %d\n",num);

    for (int i = 1; i <= 10; i++)
    {
        printf("%d X %d = %d \n", num, i, num * i);
    }

    printf("PROGRAMA ENCERRADO!");

    return 0;
}