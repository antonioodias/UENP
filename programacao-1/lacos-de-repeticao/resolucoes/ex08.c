#include <stdio.h>

int main()
{
    int nota = 0, qtdSatisfeito = 0;
    float totalNotas = 0, somaNotas = 0, media = 0 ;

    while(1){
       
        printf("\nInforme a nota de satisfacao [1 - 5] / [0] para sair: ");
        scanf("%d", &nota);

        if(nota == 0){
            break;

        } else{
            totalNotas++;
            somaNotas += nota;

            if (nota >= 4){
                qtdSatisfeito++;

            }
        }
    }
    
    if(totalNotas != 0){
        media = somaNotas / totalNotas;
    }
        
    printf("\nA media das notas foram: %.2f", media);
    printf("\nA quantidade de cliente satisfeito (acima de 4) foi de: %d", qtdSatisfeito);

    return 0;
}
