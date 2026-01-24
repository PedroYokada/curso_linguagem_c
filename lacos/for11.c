#include <stdio.h>

int main()
{
    int base, pot, resu = 1;

    printf("Insira um numero: ");
    scanf("%d", &base);

    printf("Insira a potencia: ");
    scanf("%d", &pot);

    for (int i = 1; i <= pot; i++)
    {
        resu *= base;
    }

    printf("RESULTADO = %d", resu);

    return 0;
}
