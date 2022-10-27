#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*Declaração de variáveis*/
    int numero1;
    int numero2;

    printf("OPERACOES SOBRE INTEIROS\n");
    printf("Digite o primeiro numero: ");
    scanf("%d",&numero1);

    printf("Digite o segundo numero: ");
    scanf("%d",&numero2);

    printf("%d + %d = %d\n", numero1, numero2, numero1 + numero2);
    printf("%d - %d = %d\n", numero1, numero2, numero1 - numero2);
    printf("%d * %d = %d\n", numero1, numero2, numero1 * numero2);
    printf("%d / %d = %d\n", numero1, numero2, numero1 / numero2);
    printf("%d %% %d = %d\n", numero1, numero2, numero1 % numero2);
    return 0;

}
