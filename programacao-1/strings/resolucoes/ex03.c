#include <stdio.h>
#include <string.h>

#define TAM 100

int qtdVogais(char str[]){

    int count = 0;
    for(int i = 0; str[i] != '\0'; i++){
        if(str[i] == 'a' || str[i] == 'A'){
            count++;
        }
        if(str[i] == 'e' || str[i] == 'E'){
            count++;
        }
        if(str[i] == 'i' || str[i] == 'I'){
            count++;
        }
        if(str[i] == 'o' || str[i] == 'O'){
            count++;
        }
        if(str[i] == 'u' || str[i] == 'U'){
            count++;
        }
    }
    return count;
}

int main()
{
    char string[TAM] = {0};
    int qtd = 0;

    printf("Escreva algo: ");
    fgets(string, sizeof(string), stdin);
    qtd = qtdVogais(string);
    printf("\nA quantidade de vogais contidas na frase eh: %d", qtd);

    return 0;
}
