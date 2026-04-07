#include <stdio.h>

int main()
{
    int x, y, aux;

    printf("Informe o valor de X: ");
    scanf("%d",&x);
    printf("Informe o valor de Y: ");
    scanf("%d",&y);

    aux = x;
    x = y;
    y = aux;

    printf("O valor de X agora: %d\n",x);
    printf("O valor de Y agora: %d\n",y);


    return 0;
}
