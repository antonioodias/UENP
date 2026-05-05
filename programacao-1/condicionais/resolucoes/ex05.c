#include <stdio.h>

int main()
{
    int valor, qtdcafe, valor_perdido;

    printf("Informe o valor que voce vai inserir na maquina (apenas multiplo de 5): ");
    scanf("%d", &valor);

    if(valor % 5 != 0 ){

        printf("Insira apenas multiplos de 5, rode o programa novamente !!!!");

    }else{

        qtdcafe = valor / 7;
        valor_perdido = valor - (qtdcafe * 7);
        printf("A quantidade de cafe sera de %d e o valor perdido sera de R$%d", qtdcafe, valor_perdido);
        
    }

    return 0;
}
