#include <stdio.h>

int main()
{
    int candidato1 = 0, candidato2 = 0, candidato3 = 0 , maior = 0, voto = 0, vencedores = 0;
    
    while(1){
        
        printf("\n[1] - Para o candidato 1\n[2] - Para o candidato 2\n[3] - Para o candidato 3");
        printf("\nInforme para quem vai seu voto, [0] para encerrar: ");
        scanf(" %d",&voto);
        
        if(voto == 0){
            break;
        }
        
        switch(voto){
            case 1:
                candidato1++;
                break;

            case 2:
                candidato2++;
                break;

            case 3:
                candidato3++;
                break;

            default:
                printf("\nValor invalido\n");
                break;
        }
        
    }
    
    maior = candidato1;
    if(candidato2 > maior){
        maior = candidato2;

    }
    if(candidato3 > maior){
        maior = candidato3;

    }
    
    printf("\nO candidato 1 recebeu %d votos\nO candidato 2 recebeu %d votos\nO candidato 3 recebeu %d votos",candidato1, candidato2, candidato3);

    if(maior > 0){
        if(maior == candidato1){
            vencedores++;

        }
        if(maior == candidato2){
            vencedores++;
            
        }
        if(maior == candidato3){
            vencedores++;
            
        }
    }

    if(vencedores > 1){
        printf("\nHouve empate");

    }else if(vencedores == 1){
        if(maior == candidato1){
            printf("\nO candidato 1 VENCEU");
            
        }
        if(maior == candidato2){
            printf("\nO candidato 2 VENCEU");
            
        }
        if(maior == candidato3){
            printf("\nO candidato 3 VENCEU");
        
        }
    }else{
        printf("\nNinguem votou");

    }

    return 0;
}
