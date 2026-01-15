#include <stdio.h>

int main()
{
    for (int i = 0; i <= 1; i++)
    {
        printf("FOR i = %d \n", i);

        for (int j = 0; j <= 1; j++)
        {
            printf("FOR j = %d \n", j);
        }
    }

    printf("PROGRAMA ENCERRADO!");

    return 0;
}