#include <stdio.h>
#include <string.h>

#define TAM  100

void substituirCaractere(char str[], char antigo, char novo) { 

    for(int i = 0; str[i] != '\0'; i++){
        if(str[i] == antigo){
            str[i] = novo;
        }
    }

}

int main()
{
    char string[TAM] = {0};
    char antigo, novo;

    printf("Escreva algo: ");
    fgets(string, sizeof(string), stdin);

    printf("Qual caractere deseja trocar: ");
    scanf(" %c", &antigo);
    printf("Por qual caractere: ");
    scanf(" %c", &novo);

    substituirCaractere(string, antigo, novo);    
    fputs(string, stdout);

    return 0;
}
