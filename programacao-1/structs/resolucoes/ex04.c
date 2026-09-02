#include <stdio.h>
#include <string.h>
#define TAM 100

typedef struct{
    char nome[TAM];
    int codigo;
    float preco;
    int alcoolico;

} produto;

void linha(){
    printf("=-=-=-=-=-=-=-=-=-=-=-=-==-=\n");
}

void menu(){

    linha();
    printf("O DESEJA FAZER?\n");
    linha();
    printf("[1] - VER ALGUM PRODUTO\n");
    printf("[2] - VER TODOS PRODUTO\n");
    printf("[3] - VALOR TOTAL DOS PRODUTOS\n");
    printf("[999] - PARA SAIR\n");
    
}

float fazerCadastro(produto prod[], int qtd){

    float precoTotal = 0;
    for(int i = 0; i  < qtd; i++){

        prod[i].codigo = i + 1;

        printf("Informe o NOME do produto de CODIGO [%d]: ", i + 1);
        fgets(prod[i].nome, TAM, stdin);
        prod[i].nome[strcspn(prod[i].nome, "\n")] = '\0';
        
        printf("Informe o PRECO do produto de CODIGO [%d]: ", i + 1);
        scanf("%f", &prod[i].preco);
        while(getchar() != '\n');
        precoTotal += prod[i].preco;
        printf("O produto eh alcoolico [1-SIM | 0-NAO]: ");
        scanf("%d", &prod[i].alcoolico);
        while(getchar() != '\n');
        
    }
    return precoTotal;
}

void buscarProduto(produto prod[], int codigo, int qtd){
    
    int encontrado = 0;
    for(int i = 0; i < qtd; i++){
        if(prod[i].codigo == codigo){
            char *alcoolico = (prod[i].alcoolico == 1) ? "SIM" : "NAO";
            printf("CODIGO[%d] - NOME[%s] - PRECO[%.2f] - ALCOOLICO[%s]\n",prod[i].codigo ,prod[i].nome, prod[i].preco, alcoolico);
            encontrado = 1; 
            break;
        }
    }
    if(encontrado == 0){
        printf("PRODUTO DE CODIGO [%d] NAO ENCONTRADO\n", codigo);
    }
}

void mostrarDados(produto prod[], int qtd){


    for(int i = 0; i < qtd; i++){
        char *alcoolico = (prod[i].alcoolico == 1) ? "SIM" : "NAO";
        printf("CODIGO[%d] - NOME[%s] - PRECO[%.2f] - ALCOOLICO[%s]\n",prod[i].codigo, prod[i].nome, prod[i].preco, alcoolico); 

    }

}

int main(){
    
    int qtd = 0, opc  = 0, continuar = 1, codigo = 0;
    float valorTotal = 0;

    while(1){
        printf("INFORME A QUANTIDADE DE PRODUTOS: ");
        scanf(" %d", &qtd);
        while(getchar() != '\n');
        linha();
        if(qtd <= 0){
            printf("VALOR INVALIDO\n");
            linha();
        }else{
            break; 
        }
    }

    produto adega[qtd];

    valorTotal = fazerCadastro(adega, qtd);

    while (continuar == 1){
        
        menu();
        scanf(" %d", &opc);

        switch(opc){
            case 1:
                linha();
                printf("INFORME O CODIGO DO PRODUTO: ");
                scanf("%d", &codigo);
                while(getchar() != '\n');
                linha();
                buscarProduto(adega, codigo, qtd);
                break;
            case 2:
                linha();
                mostrarDados(adega, qtd);
                break;
            case 3:
                linha();
                printf("O VALOR TOTAL DOS PRODUTOS CADASTRADOS EH: %.2f\n", valorTotal);
                break;
            case 999:
                continuar = 0;
                break;

        }

    }
    linha();
    printf("FIM");

    return 0;
}
