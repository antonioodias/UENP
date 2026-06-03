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

void somaLinha(int mat[LIN][COL]){

    
    for(int i = 0; i < LIN; i++){
        
        int somaL = 0;

        for(int j = 0; j < COL; j++){
            
            somaL += mat[i][j];
            
        }
        printf("A soma da linha %d eh: %d\n", i + 1, somaL);

    }

}

int main(){
    
    int matriz[LIN][COL] = {0};
    linha();
    leMatriz(matriz);
    linha();
    printMatriz(matriz);
    linha();
    somaLinha(matriz);
    linha();

    return 0;
}
