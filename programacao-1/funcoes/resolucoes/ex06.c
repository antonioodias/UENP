#include <stdio.h>

int potecia(int x, int n){
    int resultado = 1;
    for(int i = 0; i < n; i++){
        resultado *= x ;
    }
    return resultado;
}

int main()
{
    int base = 0, expoente = 0;

    printf("Informe a Base: ");
    scanf(" %d", &base);
    printf("Informe a Expoente: ");
    scanf(" %d", &expoente);
    printf("O resultado da potencia foi: %d", potecia(base, expoente));

    return 0;
}
