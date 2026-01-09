#include <stdio.h>

int main () {
    
    int num = 10;
    float numQuebrado = 50.411111;
    char letra = 'A';
    char nome[6]  = "Pedro";

    printf("Numero: %d \n", num);
    printf("Numero Flutuante: %.2f \n", numQuebrado);
    printf("Letra: %c \n",letra);
    printf("Nome: %s \n",nome);

    return 0;
}