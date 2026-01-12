#include <stdio.h>

int main()
{
    char operador;
    float a, b;

    printf("Digite a operacao (+,-,*,/): ");
    scanf("%c", &operador);

    printf("Insira o valor de A e B: \n");
    scanf("%f %f", &a, &b);

    switch (operador)
    {
    case '+':
        printf("%.2f %c %.2f = %.2f ", a, operador, b, (a + b));
        break;
    case '-':
        printf("%.2f %c %.2f = %.2f ", a, operador, b, (a - b));
        break;
    case '*':
        printf("%.2f %c %.2f = %.2f", a, operador, b, (a * b));
        break;
    case '/':
        if (a != 0 && b != 0)
        {
            printf("%.2f %c %.2f = %.2f", a, operador, b, (a / b));
            break;
        }
        else
        {
            printf("Não pode realizar divisão por zero!");
            break;
        }
    default:
        printf("Operador inválido!");
    }

    return 0;
}