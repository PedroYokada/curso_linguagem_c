#include <stdio.h>

int main()
{

    int minutos, hora, min_restantes;

    printf("Insira o tempo de minutos: ");
    scanf("%d", &minutos);

    hora = minutos / 60;
    min_restantes = minutos % 60;

    if (hora == 1)
    {
        printf("-- Total hora(s) e minutos -- \n");
        printf("RESULTADO = %d hora e %d minutos.", hora, min_restantes);
    }
    else
    {
        printf("-- Total hora(s) e minutos -- \n");
        printf("RESULTADO = %d horas e %d minutos.", hora, min_restantes);
    }

    return 0;
}