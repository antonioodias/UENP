#include <stdio.h>
#include <string.h>

#define TAM 100

int main()
{
    char string[TAM] = {0};

    printf("Escreva algo: ");
    fgets(string, sizeof(string), stdin);

    printf("O seu primeiro caractere eh: %c\nO seu ultimo caractere: %c", string[0], string[(strlen(string)) - 2 ]);

    if(string[0] == string[(strlen(string)) - 2 ])
        printf("\nOs dois sao iguais");
    else
        printf("\nOs dois sao diferentes");
    

    return 0;
}
