#include <stdio.h>
#include <string.h>
#define TAM 100

typedef struct{
    char nome[TAM];
    int numero;
    float saldo;
}Conta;

void linha(){
    printf("=-=-=-=-=-=-=-=-=-=-=-=-==-=\n");
}

void menu(){

    linha();
    printf("O DESEJA FAZER?\n");
    linha();
    printf("[1] - REALIZAR DEPOSITO\n");
    printf("[2] - REALIZAR SAQUE\n");
    printf("[3] - VER SALDO\n");
    printf("[999] - PARA SAIR\n");
    
}

void cadastrarConta(Conta cont[], int qtd){

    for(int i = 0; i < qtd; i ++){

        cont[i].numero = i + 1;

        printf("Informe o NOME da CONTA[%d]: ", i + 1);
        fgets(cont[i].nome, TAM, stdin);
        cont[i].nome[strcspn(cont[i].nome, "\n")] = '\0';

        printf("Informe o SALDO da CONTA[%d]: ", i + 1);
        scanf(" %f", &cont[i].saldo);
        while(getchar() != '\n');
         
    }

}

void deposito(Conta cont[], int numeroConta, int qtd, float valor){

    for(int i = 0; i < qtd; i++) if(cont[i].numero == numeroConta) {
        cont[i].saldo += valor;
        printf("%.2f DEPOSITADO NA SUA CONTA DE %s\n", valor, cont[i].nome);
    }

}

void saque(Conta cont[], int numeroConta, int qtd, float valor){

    for(int i = 0; i < qtd; i++){
        if(cont[i].numero == numeroConta){
            if(valor > cont[i].saldo) printf("SALDO INSUFICIENTE\n");
            else {
                cont[i].saldo -= valor;
                printf("%.2f SACADO NA SUA CONTA DE %s\n", valor, cont[i].nome);
            }
        }
    } 
}

void verSaldo(Conta cont[], int numeroConta, int qtd){

    for(int i = 0; i < qtd; i++) if(cont[i].numero == numeroConta) printf("SALDO DA CONTA DE %s: %.2f\n",
    cont[i].nome, cont[i].saldo); 
}

int main(){
    
    int qtd = 0 , continuar = 1, numeroConta = 0, opc = 0;
    float valor = 0;
    while(1){
        printf("INFORME A QUANTIDADE DE CONTAS [LIMITE = 10]: ");
        scanf(" %d", &qtd);
        while(getchar() != '\n');
        linha();
        if(qtd <= 0 || qtd > 10){
            printf("VALOR INVALIDO\n");
            linha();
        }else{
            break; 
        }
    }
    Conta contas[qtd];
    cadastrarConta(contas, qtd);

    while (continuar == 1){
        menu();
        scanf("%d", &opc);
        while(getchar() != '\n');

        switch(opc){
            case 1:
                linha();
                printf("INFORME O NUMERO DA CONTA: ");
                scanf(" %d", &numeroConta);
                while(getchar() != '\n');
                printf("INFORME O VALOR A SER DEPOSITADO NA CONTA: ");
                scanf(" %f", &valor);
                while(getchar() != '\n');
                deposito(contas, numeroConta, qtd, valor);
                break;
            case 2:
                linha();
                printf("INFORME O NUMERO DA CONTA: ");
                scanf(" %d", &numeroConta);
                while(getchar() != '\n');
                printf("INFORME O VALOR A SER SACADO NA CONTA: ");
                scanf(" %f", &valor);
                while(getchar() != '\n');
                saque(contas, numeroConta, qtd, valor);
                break;
            case 3:
                linha();
                printf("INFORME O NUMERO DA CONTA: ");
                scanf(" %d", &numeroConta);
                while(getchar() != '\n');
                verSaldo(contas,numeroConta,qtd);
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
