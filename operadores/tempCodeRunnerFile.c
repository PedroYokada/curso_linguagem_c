#include <stdio.h>
#include <stdlib.h>

int main () {
    float num1,num2;

    printf("Insira o primeiro numero: \n");
    scanf("%f", &num1);

    printf("Insira o segundo numero: \n");
    scanf("%f", &num2);

    float soma = num1 + num2;

    printf("Soma = %.2f\n", soma);

    system("Pause");
    return 0;
}