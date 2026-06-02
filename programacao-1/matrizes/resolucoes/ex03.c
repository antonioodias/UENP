#include <stdio.h>

void linha(){
    printf("\n=-=-=-=-=-=\n");
}


void leMatriz(int tam, int mat[tam][tam]){
    
    for(int i = 0; i < tam; i++){
        
        for(int j = 0; j < tam; j++){
            printf("Pos[%d][%d]: ", i + 1, j + 1);
            scanf(" %d", &mat[i][j]);
        }
        
    }
    
}

void printMatriz(int tam, int mat[tam][tam]){
    
    for(int i = 0; i < tam; i++){
        
        for(int j = 0; j < tam; j++){
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
    
}

int somaElementos(int tam, int mat[tam][tam]){

    int soma = 0;
    
    for(int i = 0; i < tam; i++){
        
        for(int j = 0; j < tam; j++){

            if(i != j && (i + j) != (tam - 1)){
                soma+= mat[i][j];

            }
        }
         
    }
    return soma;

}

int main(){
    
    int tam = 0, resultado = 0;
    
    linha();
    printf("Defina o tamanho da sua matriz quadrada: ");
    scanf(" %d", &tam);
    linha();

    int matriz[tam][tam];

    leMatriz(tam,matriz);
    linha();
    printMatriz(tam,matriz);
    linha();
    resultado = somaElementos(tam,matriz);
    printf("\nA soma dos elementos fora da diagonal principal e secundaria: %d", resultado);
    linha();

    return 0;
}
