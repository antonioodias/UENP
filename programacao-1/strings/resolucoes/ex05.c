#include <stdio.h>
#include <string.h>

#define TAM  100

int contarOcorrencia(char str[], char caractere) { 

    int count = 0;
    for(int i = 0; str[i] != '\0'; i++){
        if(str[i] == caractere){
            count++;
        }
    }
    return count;
}

int main()
{
    char string[TAM] = {0}, letra;
    int qtdLetra;

    printf("Escreva algo: ");
    fgets(string, sizeof(string), stdin);

    printf("Escreva um caractere para saber a quantidade: ");
    scanf(" %c", &letra);

    qtdLetra = contarOcorrencia(string, letra);    
    printf("\nA quantidade de %c contidas na frase eh: %d", letra ,qtdLetra);


    return 0;
}
