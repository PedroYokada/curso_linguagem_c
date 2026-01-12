#include <stdio.h>

int main()
{
    int situacao, freq, nota;

    printf("-- Escolha uma opcao -- \n");
    printf("1 - Verificar se um aluno foi aprovado \n");
    printf("2 - Sair \n");
    printf("Insira a opcao: ");
    scanf("%d", &situacao);

    switch (situacao)
    {
    case 1:
        printf("Insira a taxa de frequencia: ");
        scanf("%d", &freq);

        printf("Insira a nota do aluno: ");
        scanf("%d", &nota);

        if (freq >= 75 && nota >= 7)
        {
            printf("Aluno aprovado!");
            break;
        }
        else
        {
            printf("Aluno reprovado!");
            break;
        }
    case 2:
        printf("Saindo...");
        break;
    default:
        printf("Opcao invalida");
        break;
    }

    return 0;
}