#include <stdio.h>

#define LIN 4
#define COL 3

void linha(){
    printf("=-=-=-=-=-=-=");
    printf("\n");
}

void leMatriz(int mat[LIN][COL]){
    
    for(int i = 0; i < LIN; i++){
        
        for(int j = 0; j < COL; j++){
            printf("Pos[%d][%d]: ", i + 1, j + 1);
            scanf(" %d", &mat[i][j]);
        }
        
    }
    
}

void printMatriz(int mat[LIN][COL]){
    
    for(int i = 0; i < LIN; i++){
        
        for(int j = 0; j < COL; j++){
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
    
}

void somaColuna(int mat[LIN][COL]){

    
    for(int j = 0; j < COL; j++){
        
        int somaC = 0;

        for(int i = 0; i < LIN; i++){
            
            somaC += mat[i][j];
            
        }
        printf("A soma da coluna %d eh: %d\n", j + 1, somaC);

    }

}

int main(){
    
    int matriz[LIN][COL] = {0};
    linha();
    leMatriz(matriz);
    linha();
    printMatriz(matriz);
    linha();
    somaColuna(matriz);
    linha();

    return 0;
}
