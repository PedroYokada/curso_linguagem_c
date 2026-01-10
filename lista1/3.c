#include <stdio.h>

int main()
{

    int minutos, hora;

    printf("Insira a quantidade de minutos: ");
    scanf("%d", &minutos);

    hora = minutos / 60;

    printf("-- Total horas e minutos -- \n");
    printf("TOTAL HORAS = %d \n", hora);
    printf("TOTAL MINUTOS = %d \n", minutos);

    return 0;
}