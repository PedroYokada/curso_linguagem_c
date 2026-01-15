#include <stdio.h>

int main()
{
    int cont = 0;

    for (int i = 0; i <= 11; i++)
    {
        if (i % 2 != 0)
        {
            cont++;
            printf("%d \n", i);
        }
    }

    return 0;
}