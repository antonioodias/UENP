#include <stdio.h>

int main()
{
    int inicial, final, variacao;

    printf("Informe o valor inicial: ");
    scanf("%d", &inicial);
    printf("Informe o valor final: ");
    scanf("%d", &final);

    variacao = inicial - final;

    if (variacao > 0){

        printf("Houve uma reducao no preco");

    }else if (variacao <  0){

        printf("Houve uma aumento no preco");

    }else{
        
        printf("Nao houve variacao");

    }
    
    return 0;
}
