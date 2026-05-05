#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL)); 
    int numeroAleatorio = 1 + rand() % 100;
    int numero = 0, tentativas = 0;

    printf("Tente adivinhar um numero entre [1 - 100]: ");
    
    while(1){
        
        scanf("%d", &numero);
        tentativas++;

        if(numero < numeroAleatorio){
            printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=--=-=-=-=");
            printf("\nO seu numero eh MENOR que o numero aleatorio\n");
            printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=--=-=-=-=");
            
        }else if(numero > numeroAleatorio){
            printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=--=-=-=-=");
            printf("\nO seu numero eh MAIOR que o numero aleatorio\n");
            printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=--=-=-=-=");
        
        }else{
            printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=--=-=-=-=");
            printf("\nVoce adivinhou o numero eh: %d, PARABENS\n", numeroAleatorio);
            printf("\nVoce precisou de %d tentativas\n", tentativas);
            printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=--=-=-=-=");
            break;
        }
        printf("\nTENTE NOVAMENTE: ");
    }

    return 0;
}

