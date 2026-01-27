#include <stdio.h>
#include <math.h>

int main()
{
    float salario1, salario2, diferenca;

    printf("Insira o salario do primeiro jogador: ");
    scanf("%f", &salario1);

    printf("Insira o salario do segundo jogador: ");
    scanf("%f", &salario2);

    diferenca = fabs(salario1 - salario2);

    printf("DIFERENCA = %.2f", diferenca);

    return 0;
}