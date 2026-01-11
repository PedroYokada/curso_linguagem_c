#include <stdio.h>

int main()
{

    int dia;

    printf("-- Insira o dia da semana -- \n");
    printf("-- 1: DOMINGO -- \n");
    printf("-- 2: SEGUNDA -- \n");
    printf("-- 3: TERCA -- \n");
    printf("-- 4: QUARTA -- \n");
    printf("-- 5: QUINTA -- \n");
    printf("-- 6: SEXTA -- \n");
    printf("-- 7: SABADO -- \n");
    scanf("%d", &dia);

    switch (dia)
    {
    case 1:
        printf("DOMINGO");
        break;
    case 2:
        printf("SEGUNDA");
        break;
    case 3:
        printf("TERCA");
        break;
    case 4:
        printf("QUARTA");
        break;
    case 5:
        printf("QUINTA");
        break;
    case 6:
        printf("SEXTA");
        break;
    case 7:
        printf("SABADO");
        break;
    }

    return 0;
}