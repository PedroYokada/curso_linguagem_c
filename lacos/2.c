#include <stdio.h>

int main () {
    int num,soma = 0;

    printf("Insira um numero: ");
    scanf("%d",num);

    for (int i = 1; i <= num; i++){
        soma += i;
    }

    printf("Soma = %d",soma);

    return 0;
}