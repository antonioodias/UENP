#include <stdio.h>
#include <string.h>
#define TAM 50

typedef struct{
    int matricula;
    char nome[TAM];
    float nota;

}cadastro;


void linha(){
    printf("=-=-=-=-=-=-=-=-=-=-=-=-==-=\n");
}

void menu(){

    linha();
    printf("O DESEJA FAZER?\n");
    linha();
    printf("[1] - VER DADOS\n");
    printf("[2] - MEDIA DA TURMA\n");
    printf("[3] - VER ALUNO COM MAIOR NOTA\n");
    printf("[999] - PARA SAIR\n");
    
}

void mostrarDados(cadastro aluno[], int qtd){

    char *situacao;
    for(int i = 0; i < qtd; i++){

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


float fazerCadastro(cadastro aluno[], int qtd){

    float somaNota = 0;
    for(int i = 0; i  < qtd; i++){

        aluno[i].matricula = i;

        printf("Informe o NOME do ALUNO %d: ", i + 1);
        fgets(aluno[i].nome, TAM, stdin);
        aluno[i].nome[strcspn(aluno[i].nome, "\n")] = '\0';

        printf("Informe a NOTA do ALUNO %d: ", i  + 1);
        scanf("%f", &aluno[i].nota);
        somaNota += aluno[i].nota;
        while(getchar() != '\n');
        
    }
    return somaNota;
}

float mediaTurma(int qtd, float totalNota){
    
    float media = totalNota / qtd;

    return media;

}

int maiorNota(cadastro aluno[], int qtd){

    float maior = aluno[0].nota;
    int mat = 0 ;
    for(int i = 0; i < qtd; i++){

       if(aluno[i].nota >= maior){
            maior = aluno[i].nota;
            mat = i;
       } 

    }
    return mat;
}

int main(){
    
    int qtd = 0, opc = 0, continuar = 1, maior = 0;
    float somaNota = 0, media = 0;

    while(1){
        printf("Informe a quantidade de alunos: ");
        scanf(" %d", &qtd);
        while(getchar() != '\n');
        linha();
        if(qtd > 50 || qtd <= 0){
            printf("DE 1 A 50 ALUNOS\n");
            linha();
        }else{
            break; 
        }
    }
    
    cadastro alunos[qtd];
    
    somaNota = fazerCadastro(alunos, qtd);

    while(continuar == 1){

        menu();
        scanf(" %d", &opc);
        
        switch (opc){
            case 1:
                linha();
                mostrarDados(alunos, qtd);
                break;
            case 2:
                media = mediaTurma(qtd, somaNota);
                linha();
                printf("A MEDIA da turma eh: %.2f\n", media);
                break;
            case 3:
                maior = maiorNota(alunos, qtd);
                linha();
                printf("A maior nota da turma eh do: %s com %.2f\n", alunos[maior].nome, alunos[maior].nota);
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
