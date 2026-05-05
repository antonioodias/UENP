

#include <stdio.h>

int main() {
    
    int codigo = 0, qtdVendidos = 0;
    float valorProduto = 0, valorVendas = 0;;
    int totalVendidos = 0;
    
    
    while(1){
        
        printf("Informe o codigo do produto, [0] para encerrar: ");
        scanf("%d", &codigo);
        
        if(codigo == 0){
            break;
            
        }else{
            printf("\nInforme a quantidade de itens vendidos: ");
            scanf("%d", &qtdVendidos);
            printf("\nInforme o valor do produto: ");
            scanf("%f", &valorProduto);
            
            totalVendidos += qtdVendidos;
            valorVendas += qtdVendidos * valorProduto;
        }
        
    }
    
    printf("\nO total de itens vendidos: %d", totalVendidos);
    printf("\nO valor total de vendas: R$%.2f", valorVendas);


    return 0;

}