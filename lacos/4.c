#include <stdio.h>

int main()
{
    int n;
    
    printf("Insira um numero: ");
    scanf("%d",&n);
    
    printf("NUMEROS PARES DE 1 ATE %d: ",n);
    
    for (int i = 1; i <= n; i++){
        if (i % 2 == 0){
            printf("%d ",i);
        }
    }
   
    return 0;
}