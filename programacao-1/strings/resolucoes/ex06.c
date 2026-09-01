#include <stdio.h>
#include <string.h>

#define TAM 100

int ultimaPalavra(char str[], char ult[]){

    int i = 0;
    str[strcspn(str, "\n")] = '\0';
    int tam = strlen(str) - 1;

    if(tam >=0){
        for(i = tam; i >= 0 &&  str[i] != ' '; i--){}
        
        int  j = 0;
        for(int k = i + 1; str[k] != '\0' ; k++){
            ult[j] = str[k];
            j++;
        }
        ult[j] = '\0';

    }else{
        return -1;
    }
    return 0;
}

int main(){
    
    char string[TAM] = {0};
    char ultima[TAM] = {0};

    printf("Escreva algo: ");
    fgets(string, sizeof(string), stdin);
    int resultado = ultimaPalavra(string, ultima);

    if(resultado == -1){
        printf("Algo deu errado");
    }else{
        fputs(ultima, stdout);

    }

    return 0;
}
