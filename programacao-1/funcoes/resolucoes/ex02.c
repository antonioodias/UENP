#include <stdio.h>

int divisores(int num){
    int qtd = 0;
    for(int i = 1; i <= num; i++){
        if(num % i == 0){
            qtd++;
        }
    }
    return qtd;
}

int main()
{
    int x =  0;

    printf("Informe o numero para saber a quantidade de divisores: ");
    scanf(" %d", &x);
    printf("A quantidade de divisores de %d sera: %d", x, divisores(x));

    return 0;
}
