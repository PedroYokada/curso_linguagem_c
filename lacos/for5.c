#include <stdio.h>

int main()
{
    printf("CONTAGEM REGRESSIVA PARA A BOMBA EXPLODIR!!! \n");

    for (int index = 10; index >= 0; index--)
    {
        printf("Numero: %d \n", index);
    }
    
    printf("BOOOOOOOOOOM");

    return 0;
}