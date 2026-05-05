#include <stdio.h>

int main()
{
    int valor, comissao;
    printf("Informe o valor total de suas vendas: ");
    scanf("%d", &valor);

    if(valor <=  1000){

        comissao = valor * 0.05;
        printf("Sua comissao foi de 5 por cento voce vai receber %d a mais no seu salario", comissao);
        
    }else if (valor > 1000 && valor <= 5000){
        
        comissao = valor * 0.1;
        printf("Sua comissao foi de 10 por cento voce vai receber %d a mais no seu salario", comissao);
        
    }else{
        comissao = valor * 0.15;
        printf("Sua comissao foi de 15 por cento voce vai receber %d a mais no seu salario", comissao);
    }
    
    return 0;
}
