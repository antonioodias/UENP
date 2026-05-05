#include <stdio.h>

int main()
{
    int numero = 0, count = 0;

    printf("Informe o numero para ver todos os seus divisores: ");
    scanf("%d", &numero);

    printf("Divisores: ");

    for(int i = 1; i <= numero; i++){

        if(numero % i == 0){
            printf("%d",i);
            count++;

            if(i < numero){
                printf(", ");

            }
        }

    }
    printf("\nResultados das divisoes respectivamente: ");

    for(int i = 1; i <= numero; i++){

        if(numero % i == 0){
            printf("%d",(numero/i));

            if(i < numero){
                printf(", ");
            }
        }

    }
    printf("\nTotal de divisores: %d", count);

    return 0;
}
