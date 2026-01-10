#include <stdio.h>
#include <stdlib.h>

int main () {

    char nome[50];
    int idade,gols;

    printf("Nome jogador: ");
    scanf(" %[^\n]",nome);

    printf("Idade jogador: ");
    scanf("%d",&idade);

    printf("Quantidade gols: ");
    scanf("%d",&gols);

    printf("-- Dados Jogador -- \n");
    printf("Nome: %s \n",nome);
    printf("Idade: %d \n",idade);
    printf("Gols: %d \n",gols);

    system("pause");
    return 0;
}