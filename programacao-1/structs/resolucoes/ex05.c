#include <stdio.h>
#include <string.h>
#define TAM 100

typedef struct{
    char nome[TAM];
    int matricula;
}Estudante;

typedef struct{
    char nome[TAM];
    Estudante estudantes[10];
}Curso;

void buscarAluno(Curso cur[], char nomeBuscado[]){

    int encontrado = 0;
    for(int i = 0; i < 2; i++){

        for(int j = 0; j < 3; j++){

            if(strcmp(cur[i].estudantes[j].nome, nomeBuscado)  == 0){
                printf("%s esta no curso: %s\n", cur[i].estudantes[j].nome, cur[i].nome);
                encontrado = 1;
                return;
            }
        }
    }
    if(encontrado == 0){
        printf("Nenhuma pessoa com esse nome foi encontrada nos cursos disponiveis\n");
    }
}


int main(){
    
    // Dados que gerei pelo GEMINI para não perder muito tempo escrevendo isso :)
    Curso cursos[2] = {
        {
            .nome = "Ciencia da Computacao",
            .estudantes = {
                {"Antonio Dias", 101},
                {"Bruno Lima", 102},
                {"Carla Souza", 103}
            }
        },
        {
            .nome = "Engenharia de Software",
            .estudantes = {
                {"Diego Alves", 201},
                {"Elena Rocha", 202}
            }
        }
    };

    buscarAluno(cursos, "Antonio Dias");

    return 0;
}
