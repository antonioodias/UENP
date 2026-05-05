#include <stdio.h>

int main()
{
    int produtividade, qualidade;

    printf("Informe a nota de Produtividade [1 - 10]:  ");
    scanf("%d", &produtividade);
    printf("Informe a nota de Qualidade [1 - 10]:  ");
    scanf("%d", &qualidade);

    if(produtividade >= 7 && qualidade >= 7){

        printf("O desenpenho eh BOM");

    }else if (produtividade < 7 && qualidade < 7){

        printf("O desempenho eh RUIM");

    }else{

        printf("O desempenho eh REGULAR");
        
    }

    return 0;
}
