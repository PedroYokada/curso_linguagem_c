#include <stdio.h>
#include <stdlib.h>

int main (){

    int idade;

    printf("Digite a sua idade: ");
    scanf("%d",&idade);

    if (idade >= 18) {
        printf("Maior de idade \n");
    } else {
        printf("Menor de idade \n");
    }

    system("pause");
    return 0;
}