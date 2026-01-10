#include <stdio.h>
#include <stdlib.h>

int main () {

    int num1 = 10,num2 = 2;
    int adicao,subtracao,multiplicacao,divisao,resto;

    adicao = num1 + num2;
    subtracao = num1 - num2;
    multiplicacao = num1 * num2;
    divisao = num1/num2;
    resto = num1 % num2;

    printf("Adicao: %d + %d = %d \n",num1,num2,adicao);
    printf("Subtracao: %d - %d = %d \n",num1,num2,subtracao);
    printf("Multiplicacao: %d * %d = %d \n",num1,num2,multiplicacao);
    printf("Divisao: %d / %d = %d \n",num1,num2,divisao);
    printf("Resto: %d %% %d = %d \n",num1,num2,resto);

    system("Pause");
    return 0;
}