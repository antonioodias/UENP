#include <stdio.h>
#include <string.h>
#define TAM 50

struct paciente{
    int codigo;
    char nome[TAM];
    int atendido;
};

void linha(){
    printf("=-=-=-=-=-=-=-=-=-=-=-=-==-=\n");
}

void menu(){

    linha();
    printf("O DESEJA FAZER?\n");
    linha();
    printf("[1] - VER TODOS PACIENTES\n");
    printf("[2] - ALTERAR ESTADO DE ATENDIDO\n");
    printf("[3] - VER PACIENTE AGUARDANDO ATENDIMENTO\n");
    printf("[999] - PARA SAIR\n");
    
}

void cadastrarPaciente(struct paciente p[]){

    for(int i = 0; i < 5; i++){

        p[i].codigo = i + 1;
        printf("Informe o NOME do paciente[%d]: ",  i + 1);
        fgets(p[i].nome, TAM, stdin);
        p[i].nome[strcspn(p[i].nome, "\n")] = '\0';
        printf("O paciente foi atendido [1 - SIM | 0 - NAO]: ");
        scanf(" %d", &p[i].atendido);
        while(getchar() != '\n');
        
    }

}

void exibirPaciente(struct paciente p[]){

    char *situacao;
    for(int i = 0; i < 5; i++){

        if(p[i].atendido == 1) situacao = "sim";
        else situacao = "nao";

        printf("NOME: [%s] - CODIGO: [%d] - ATENDIDO: [%s]\n", p[i].nome, p[i].codigo, situacao);
    }

}

void alterarEstado(struct paciente p[], int codigo){

    char *situacao;
    int opc = 0;
    for(int i = 0; i < 5;  i++){

        if(p[i].codigo == codigo){
            if(p[i].atendido == 1) situacao = "sim";
            else situacao = "nao";
            printf("NOME: [%s] - CODIGO: [%d] - ATENDIDO: [%s]\n", p[i].nome, p[i].codigo, situacao);

            printf("Deseja alterar o estado [1 - SIM | 0 - NAO]");
            scanf(" %d", &opc);
            while(getchar() != '\n');

            switch(opc){
                case 1:
                    if(p[i].atendido == 1) p[i].atendido = 0;
                    else p[i].atendido = 1;
                    printf("Situacao atualizada\n");
                    break;
                case 0:
                    break;
            }
        }

    }

}

void pacientesSemAtendimento(struct paciente p[]){
    char *situacao = "nao";
    for(int i = 0; i < 5; i++){

        if(p[i].atendido == 0){
            printf("NOME: [%s] - CODIGO: [%d] - ATENDIDO: [%s]\n", p[i].nome, p[i].codigo, situacao);
        }
    }
}

int main(){
    
    int continuar = 1, opc = 0, codigo;
    struct paciente pessoas[5];
    cadastrarPaciente(pessoas);

    while (continuar == 1){
        
        menu();
        scanf("%d", &opc);
        while(getchar() != '\n');

        switch(opc){
            case 1:
                linha();
                exibirPaciente(pessoas);
                break;
            case 2:
                linha();
                printf("Informe o codigo do paciente: ");
                scanf(" %d", &codigo);
                while(getchar() != '\n');
                alterarEstado(pessoas, codigo);
                break;
            case 3:
                linha();
                pacientesSemAtendimento(pessoas);
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
