#include <stdio.h>

int main() {
    
    int valor = 0, valorTotal = 0, count = 0;
    
    while(1){
        printf("Informe o valor da moeda inserida: ");
        scanf("%d", &valor);
        valorTotal += valor;
        count++;
        if(valorTotal >= 7){
            break;
        }
    }

    printf("\nO total inserido foi de R$%d",valorTotal);
    printf("\nA quantidade de moedas inseridas %d", count);
   
    return 0;
}
