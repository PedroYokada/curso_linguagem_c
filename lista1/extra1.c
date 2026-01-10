#include <stdio.h>

int main()
{

    double num1, num2, num3;
    int op;

    printf("Insira um numero: ");
    scanf("%lf", &num1);

    printf("Insira o segundo numero: ");
    scanf("%lf", &num2);

    printf("-- Escolha uma operação -- \n");
    printf("Soma = 1 \n");
    printf("Subtração = 2 \n");
    printf("Multiplicação = 3 \n");
    printf("Divisão = 4 \n");
    scanf("%d", &op);

    if (op == 1)
    {
        num3 = num1 + num2;
        printf("Soma = %.4lf", num3);
    }
    else if (op == 2)
    {
        num3 = num1 - num2;
        printf("Subtração = %.4lf", num3);
    }
    else if (op == 3)
    {
        num3 = num1 * num2;
        printf("Multiplicação = %.4lf", num3);
    }
    else if (op == 4)
    {
        if (num2 == 0.0000)
        {
            printf("Operação inválida");
        }
        else
        {
            num3 = num1 / num2;
            printf("Divisão = %.4lf", num3);
        }
    }
    else
    {
        printf("Operação Inválida!");
    }

    return 0;
}