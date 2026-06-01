
#include <stdio.h>

void linha(){
    printf("\n=-=-=-=-=-=\n");
}

void leMatriz(int linha, int coluna, int mat[linha][coluna]){
    
    for(int i = 0; i < linha; i++){
        
        for(int j = 0; j < coluna; j++){
            printf("Pos[%d][%d]: ", i + 1, j + 1);
            scanf(" %d", &mat[i][j]);
        }
        
    }
    
}
void printMatriz(int linha, int coluna, int mat[linha][coluna]){
    
    for(int i = 0; i < linha; i++){
        
        for(int j = 0; j < coluna; j++){
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
    
}

void acimaPrincipal(int linha, int coluna, int mat[linha][coluna]){
    
    for(int i = 0; i < linha; i++){
        
        for(int j = i + 1; j < coluna; j++){
            printf("%d ", mat[i][j]);
            
        }
    }
    
}

int somaAcimaPrincipal(int linha, int coluna, int mat[linha][coluna]){
    
    int soma = 0;
    
    for(int i = 0; i < linha; i++){
        
        for(int j = i + 1; j < coluna; j++){
            soma += mat[i][j];
            
        }
        
    }
    return soma;
    
}

int main() {
    
    int tam = 0, resultado = 0;

    printf("Defina o tamanho da sua matriz quadrada: ");
    scanf(" %d", &tam);

    int matriz[tam][tam];

    leMatriz(tam, tam, matriz);
    linha();
    printMatriz(tam, tam, matriz);
    linha();
    acimaPrincipal(tam, tam, matriz);
    linha();
    
    resultado = somaAcimaPrincipal(tam, tam, matriz);
    printf("A soma dos numeros acima da diagonal principal: %d", resultado);
    linha();
    
    
    return 0;
}