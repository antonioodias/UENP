#include <stdio.h>

int main()
{
    int conta, pessoas;
    float valor;

    printf("Informe o valor da conta: ");
    scanf("%d", &conta);
    printf("\nInforme quantas pessoas vao pagar: ");
    scanf("%d", &pessoas);

    valor = conta / pessoas;
    
    if(valor <= 50){

        printf("O valor que cada um vai pagar sera: R$%.2f e um valor considerado baixo", valor);
        
    }else if (valor > 50 && valor <= 100){
        
        printf("O valor que cada um vai pagar sera: R$%.2f e um valor considerado media", valor);
        
    }else{
        
        printf("O valor que cada um vai pagar sera: R$%.2f e um valor considerado alto", valor);
        
    }

    return 0;
}

