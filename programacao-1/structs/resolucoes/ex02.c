#include <stdio.h>
#include <string.h>
#define TAM 256

typedef struct{
    int matricula;
    char nome[TAM];
    float nota;

}cadastro;


void linha(){
    printf("=-=-=-=-=-=-=-=-=-=-=-=-==-=\n");
}

void menu(){

    printf("O DESEJA FAZER?\n");
    linha();
    printf("[1] - FAZER CADASTRO\n");
    printf("[2] - VER DADOS\n");
    printf("[3] - MEDIA DA TURMA\n");
    printf("[4] - VER ALUNO COM MAIOR NOTA");


}

void mostrarDados(cadastro aluno[]){

    char *situacao;
    for(int i = 0; i <= 2; i++){

        if(aluno[i].nota >= 7)
            situacao = "aprovado";
        else if(aluno[i].nota < 4)
            situacao = "reprovado";
        else
            situacao = "exame";
        
        printf("MATRICULA[%d] - NOME: %s - NOTA [%.2f] - SITUACAO [%s]\n", 
        aluno[i].matricula, aluno[i].nome, aluno[i].nota, situacao);
        
    }

}


void fazerCadastro(cadastro aluno[]){

    for(int i = 0; i  <= 2; i++){

        aluno[i].matricula = i;

        printf("Informe o nome do aluno %d: ", i);
        fgets(aluno[i].nome, TAM, stdin);
        aluno[i].nome[strcspn(aluno[i].nome, "\n")] = '\0';

        printf("Informe a nota do aluno %d: ", i);
        scanf("%f", &aluno[i].nota);
        while(getchar() != '\n');

    }

}

int main(){
    
    cadastro alunos[2];
    int opc = 0;
    fazerCadastro(alunos);
    mostrarDados(alunos);
    
    

    return 0;
}
