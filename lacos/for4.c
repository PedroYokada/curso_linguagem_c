#include <stdio.h>

int main()
{
    int dias;

    printf("Digite quantos dias de treinamento: ");
    scanf("%d", &dias);

    for (int i = 0; i < dias; i++)
    {
        printf("Dia %d Ta pago! \n", i + 1);
    }

    printf("\n Treinamento concluido!");

    return 0;
}