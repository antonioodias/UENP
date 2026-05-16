
#include <stdio.h>

void leVetor(int vet[], int tam){
    
    for(int i = 0; i < tam; i++){
        printf("Pos[%d]: ", i+1);
        scanf(" %d", &vet[i]);
    }
    
}

void inverso(int vet[], int tam){
    for(int i = tam - 1; i >= 0; i--){
        printf("%d ", vet[i]);
    }
}

int main() {
    
    int num = 0;
    printf("Informe o tamanho do vetor: ");
    scanf(" %d", &num);
    int vetor[num];
    leVetor(vetor, num);
    inverso(vetor, num);

    return 0;
}