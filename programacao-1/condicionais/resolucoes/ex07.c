#include <stdio.h>

int main()
{
    int opc, opc2, diferenca, produto;
    float x,y,divisao, media;


    printf("Informe o primeiro valor: ");
    scanf("%f", &x);

    printf("Informe o segundo valor: ");
    scanf("%f", &y);

    printf("Informe o que desaja fazer:\n");
    printf("[1] - Media aritmetica entre os numeros\n[2] - Diferenca entre o maior e menor numero\n[3] - Produto entre os numeros\n[4] - Divisao entre os numeros\n" );
    scanf("%d", &opc);

    switch (opc){

    case 1:

        media = (x + y) / 2;
        printf("A media sera: %.1f", media);
        break;

    case 2:
        
        if(x > y){

            diferenca = x - y; 

        } else{

            diferenca  = y - x;

        }
        printf("A diferenca entre o maior numero e o primeiro sera: %d", diferenca);
        break;

    case 3:
        
        produto = x * y;
        printf("O produto entre os numero sera: %d", produto);
        break;

    case 4:
        
        printf("[1] - Dividir o %.1f por %.1f\n", x, y);
        printf("[2] - Dividir o %.1f por %.1f\n", y, x) ;
        scanf("%d", &opc2);

        switch (opc2){

        case 1:

            if(y == 0){

                printf("Nao pode dividir por zero");
                break;

            } else{

                divisao = x / y;
                printf("A divisao de %.1f por %.1f sera: %.2f", x, y, divisao);

            }
            break;
        case 2:
            
            if(x == 0){

                printf("Nao pode dividir por zero");
                break;

            } else{

                divisao = y / x;
                printf("A divisao de %.1f por %.1f sera: %.2f", y, x, divisao);

            }
            break;

        default:

            printf("Opcao invalida, rode o programa novamente");
            break;

        }

        break;


    default:

        printf("Opcao invalida, rode o programa novamente");
        break;
        
    }

    return 0;
}
