#include <stdio.h>

int main()
{
    int numeroAtual = 0;
    int numeroAnterior = 0;

    while (1){
        
        printf("\nInforme o numero: ");
        scanf("%d",&numeroAtual);

        if (numeroAtual >= numeroAnterior){
           numeroAnterior = numeroAtual;

        }else{
            printf("FIM");
            break;
            
        }
    }
    
    return 0;
}