#include <stdio.h>

void leVetor(int vet[], int tam){
    
    for(int i = 0; i < tam; i++){
        printf("Pos[%d]: ", i+1);
        scanf(" %d", &vet[i]);
    }
}

void maximoLocal(int vet[], int tam){

    int encontrou = 0;
    for(int i = 1; i < tam - 1; i++){

        if(vet[i] > vet[i-1] && vet[i] > vet[i+1]){
            encontrou++;
            printf("Valor: %d na Posicao: %d \n", vet[i], i+1);
        }
        
    }
    if(encontrou == 0){
        printf("\nNenhum maximo local foi encontrado");  
    }
        
    }

int main()
{
    int num = 0;

    printf("Informe o tamanho do vetor (3 =< N <= 15): ");
    scanf(" %d", &num);
    while(1){
        
        if(num < 3 || num > 15){
            
            printf("\nInforme apenas valores que estejam no intervalo (3 =< N <= 15): ");
            scanf(" %d", &num);

        }else{

            break;

        }
    }

    int vetor[num];    
    leVetor(vetor, num);
    maximoLocal(vetor, num);
    return 0;
}
