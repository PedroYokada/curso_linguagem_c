#include <stdio.h>

int main()
{
    int opcao;

    printf("-- Escolha uma opção de lanche -- \n");
    printf("-- 1 - Hambúrguer -- \n");
    printf("-- 2 - Cachorro-quente -- \n");
    printf("-- 3 - Pizza -- \n");
    printf("-- 4 - Sair -- \n");
    printf("Insira a sua opcao: ");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        printf("Preparando Hamburguer...");
        break;
    case 2:
        printf("Preparando Cachorro-quente...");
        break;
    case 3:
        printf("Preparando Pizza...");
        break;
    case 4:
        printf("Saindo...");
        break;
    default:
        printf("Opção invalida...");
        break;
    }

    return 0;
}