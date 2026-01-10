#include <stdio.h>

int main () {
    int cartaoA;

    printf("Cartoes amarelos recebidos: ");
    scanf("%d",&cartaoA);

    if (cartaoA >= 2) {
        printf("Jogador expulso \n");
        printf("QUANTIDADES CARTOES = %d",cartaoA);
    } else {
        printf("Permanece no jogo \n");
        printf("QUANTIDADES CARTOES = %d",cartaoA);
    }

    return 0;
}