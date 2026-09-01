#include <stdio.h>
#include <string.h>

#define TAM 100

char primeiroRepetido(char str[]) { 

    for(int i = 0; str[i] != '\0'; i++){
        
        for(int j = i +1; str[j] != '\0'; j++){
            
            if(str[i] == str[j]){
                return str[i];
            }
            
        }
        
    }
    return '\0';
}

int main(){
    
    char string[TAM] = {0};
    printf("Escreva algo: ");
    fgets(string, sizeof(string), stdin);
    string[strcspn(string, "\n")] = '\0';
    char resultado = primeiroRepetido(string);

    if(resultado == '\0')
        printf("Nenhum caractere repetido");
    else
        printf("%c", resultado);
    

    return 0;
}
