#include <stdio.h>
#include <string.h>
#define TAM 100

typedef struct {
    char nome[TAM];
    char telefone[TAM];
} contato;

void fazerCadastro(contato cont[]){

    for(int i = 0; i  < 20; i++){

        printf("Informe o NOME do contato %d: ", i + 1);
        fgets(cont[i].nome, TAM, stdin);
        cont[i].nome[strcspn(cont[i].nome, "\n")] = '\0';
        
        printf("Informe o TELEFONE do contato %d: ", i + 1);
        fgets(cont[i].telefone, TAM, stdin);
        cont[i].telefone[strcspn(cont[i].telefone, "\n")] = '\0';
        
    }
}

int buscaContato(contato cont[], char nomeBuscado[]){

    for(int i = 0; i < 20; i++){
        if(strcmp(cont[i].nome, nomeBuscado) == 0)
            return i;
    }
    return -1;
}

int main(){

    char nome[TAM];
    int buscado = 0;
    contato agenda[20];

    fazerCadastro(agenda);
    while(1){
        printf("\nDigite o NOME desejado ou SAIR para sair: ");
        fgets(nome, TAM, stdin);
        nome[strcspn(nome, "\n")] = '\0';

        if(strcmp(nome, "SAIR") == 0 || strcmp(nome, "sair") == 0){
            break;

        }else{
            buscado = buscaContato(agenda, nome);
            if(buscado == -1)
                printf("Este contato nao existe");
            else
                printf("O NUMERO de %s eh: %s", agenda[buscado].nome, agenda[buscado].telefone);  
        }
    }
    
    return 0;
}
