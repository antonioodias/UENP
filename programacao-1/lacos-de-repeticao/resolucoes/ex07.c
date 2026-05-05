#include <stdio.h>

int main() {
    
    int x = 0, y = 0, aux = 0;
    
    while(1){
        printf("\nInforme o valor inicial: ");
        scanf("%d", &x);
        printf("\nInforme o valor final: ");
        scanf("%d", &y);
        
        if(x < y){
            printf("\nNumeros: ");
            break;
            
        }else if (x == y){
            printf("\nNumeros iguais");
            break;

        }else{
            printf("\nO segundo numero nao pode ser menor que o primeiro, a ordem foi invertida\n");
            aux = x;
            x = y;
            y = aux;
            printf("\nNumeros: ");
            break;
            
        }
    }
    
    for(int i = x + 1; i < y; i++){
        
        if(i % 5 == 2 || i % 5 == 3){
            printf("%d ",i);
        
         }
     }

    return 0;
}