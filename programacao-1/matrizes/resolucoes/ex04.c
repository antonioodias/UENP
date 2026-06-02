#include <stdio.h>

#define TAM 3

void linha(){
    printf("=-=-=-=-=-=-=");
    printf("\n");
}

void leMatriz(int mat[TAM][TAM]){
    
    for(int i = 0; i < TAM; i++){
        
        for(int j = 0; j < TAM; j++){
            printf("Pos[%d][%d]: ", i + 1, j + 1);
            scanf(" %d", &mat[i][j]);
        }
        
    }
    
}

void printMatriz(int mat[TAM][TAM]){
    
    for(int i = 0; i < TAM; i++){
        
        for(int j = 0; j < TAM; j++){
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
    
}

int contarMaioresX(int mat[TAM][TAM], int x){

    int count = 0;

    for(int i = 0; i < TAM; i ++){

        for(int j = 0; j < TAM; j++){

            if(mat[i][j] > x){
                count++;
            }

        }

    }

    return count;

}

int main(){
    
    int matriz[TAM][TAM] = {0};
    int num = 0, qtd = 0;

    leMatriz(matriz);
    printf("Informe um numero: ");
    scanf(" %d", &num);

    qtd = contarMaioresX(matriz, num);

    linha();
    printMatriz(matriz);
    linha();
    printf("A quantidade de elementos da matriz maiores que  %d, sao: %d", num, qtd);

    return 0;
}
