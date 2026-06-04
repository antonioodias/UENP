#include <stdio.h>

/*Se for matriz quadrada da problema na função mostrarSoma(), 
porque como LIN e COL serão iguais, ambos os printfs vão ser executados*/

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

void somaColunaMatriz(int mat[LIN][COL], int somaColuna[]){

    
    for(int j = 0; j < COL; j++){
        
        int somaC = 0;

        for(int i = 0; i < LIN; i++){
            
            somaC += mat[i][j];
            
        }
        somaColuna[j] = somaC;

    }

}

void somaLinhaMatriz(int mat[LIN][COL], int somaLinha[]){

    
    for(int i = 0; i < LIN; i++){
        
        int somaL = 0;

        for(int j = 0; j < COL; j++){
            
            somaL += mat[i][j];
            
        }
        somaLinha[i] = somaL;

    }

}

void mostrarSoma(int vet[], int tam){
    
    if(tam == LIN){
        printf("SOMA DAS LINHAS\n");
    }
    if(tam == COL){
        printf("SOMA DAS COLUNAS\n");
    }
    for(int i = 0; i < tam; i++){
        printf("%d\n", vet[i]);
    }
    
}

int main(){
    
    int matriz[LIN][COL] = {0};
    int vetLinha[LIN] = {0};
    int vetColuna[COL] = {0};
    
    linha();
    leMatriz(matriz);
    linha();

    printMatriz(matriz);
    linha();

    somaLinhaMatriz(matriz, vetLinha);
    somaColunaMatriz(matriz, vetColuna);

    mostrarSoma(vetLinha, LIN);
    linha();

    mostrarSoma(vetColuna, COL);
    linha();

    return 0;
}
