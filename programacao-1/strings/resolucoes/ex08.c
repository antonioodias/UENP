#include <stdio.h>
#include <string.h>

#define TAM 100

void linha(){
    printf("=-=-=-=-=-=-=-=-=-=-=-=-==-=\n");
}

void vertical(char str[]){

    for(int i = 0; str[i] != '\0'; i++){
        printf("%c", str[i]);
        printf("\n");
    }

}

void escadaCrescente(char str[]){

    for(int i = 0; str[i] != '\0'; i++){

        for(int j = 0; j <= i; j++){
            printf("%c", str[j]);

        }
        printf("\n");
    }

}

void escadaDecrescente(char str[]){

    for(int i = strlen(str); i != 0; i--){

        for(int j = 0; j < i; j++){
            printf("%c", str[j]);

        }
        printf("\n");
    }

}

int main(){
    
    char string[TAM] = {0};

    printf("Escreva algo: ");
    fgets(string, sizeof(string), stdin);
    string[strcspn(string, "\n")] = '\0';

    linha();
    vertical(string);
    linha();
    escadaCrescente(string);
    linha();
    escadaDecrescente(string);
    linha();
    
    return 0;
}
