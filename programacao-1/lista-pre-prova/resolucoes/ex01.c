#include <stdio.h>
#include <string.h>

#define TAM 200

typedef struct{
    
    char texto[TAM];

} Mensagem;


void cadastrarMensagens(Mensagem frase[]){

    for(int i = 0; i < 3; i++){

        printf("Informe o texto (comece com @ para mensagem automatica): ");
        fgets(frase[i].texto, TAM, stdin);
        frase[i].texto[strcspn(frase[i].texto, "\n")] = '\0';
    }


}

int mensagensAutomaticas(Mensagem frase[]){

    int count = 0;
    for (int i = 0; i < 3; i++) if(frase[i].texto[0] == '@') count++;
    return count;
}

int main(){
   
    Mensagem frases[3];
    cadastrarMensagens(frases);
    printf("A quantidade de mensagens automaticas eh: %d", mensagensAutomaticas(frases));

    return 0;
}
