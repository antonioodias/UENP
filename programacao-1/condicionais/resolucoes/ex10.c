#include <stdio.h>
#include <math.h>

int main()
{
    int a,b,c;
    float delta, raiz_mais, raiz_menos;

    printf("Informe o coeficiente A: ");
    scanf("%d", &a);
    printf("Informe o coeficiente B: ");
    scanf("%d", &b);
    printf("Informe o coeficiente C: ");
    scanf("%d", &c);

    if(a == 0){

        printf("Nao eh uma equacao do segundo grau");

    }else{

        delta = (pow(b,2)) - (4 * a * c);

        if(delta < 0){

            printf("Nao existe raizes reais");

        }else{

            raiz_mais = (-b + sqrt(delta)) / 2 * a;
            raiz_menos = (-b - sqrt(delta)) / 2 * a;
            printf("As raizes da equacao sera: %.2f e %.2f", raiz_mais, raiz_menos);
            
        }
    }

    return 0;
}
