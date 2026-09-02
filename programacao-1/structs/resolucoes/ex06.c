#include <stdio.h>
#include <string.h>
#define TAM 100

typedef struct{
    char nome[TAM];
    char modalidade[TAM];
    int idade;
    int pontuacao;
}Atleta;

void linha(){
    printf("=-=-=-=-=-=-=-=-=-=-=-=-==-=\n");
}

void menu(){

    linha();
    printf("O DESEJA FAZER?\n");
    linha();
    printf("[1] - VER TODOS ATLETAS\n");
    printf("[2] - VER MEDIA DE IDADE DOS ATLETAS\n");
    printf("[3] - VER O ATLETA COM MAIOR PONTO\n");
    printf("[999] - PARA SAIR\n");
    
}

int cadastrarAtleta(Atleta atl[]){

    int maiorAtleta = 0;
    for(int i = 0; i < 5; i ++){

        printf("Informe o NOME do %d ATLETA: ", i + 1);
        fgets(atl[i].nome, TAM, stdin);
        atl[i].nome[strcspn(atl[i].nome, "\n")] = '\0';

        printf("Informe a MODALIDADE do %d ATLETA: ", i + 1);
        fgets(atl[i].modalidade, TAM, stdin);
        atl[i].modalidade[strcspn(atl[i].modalidade, "\n")] = '\0';

        printf("Informe a IDADE do %d ATLETA: ", i + 1);
        scanf(" %d", &atl[i].idade);
        while(getchar() != '\n');

        printf("Informe a PONTUACAO do %d ATLETA: ", i + 1);
        scanf(" %d", &atl[i].pontuacao);
        while(getchar() != '\n');
        if(atl[i].pontuacao > atl[maiorAtleta].pontuacao) maiorAtleta = i;
         
    }
    return maiorAtleta;
}

void exibirAtletas(Atleta atl[]){

    for(int i = 0; i < 5; i++){
        printf("NOME[%s] - MODALIDADE[%s] - IDADE[%d] - PONTUACAO[%d]\n", 
        atl[i].nome,  atl[i].modalidade, atl[i].idade, atl[i].pontuacao);

    }

}

void mediaIdade(Atleta atl[]){
    int somaIdade = 0;
    for(int i = 0; i < 5; i++) somaIdade += atl[i].idade;
    printf("A MEDIA DE IDADE DOS ATLETAS: %.2f\n", (somaIdade / 5.0));
}

int main(){
    
    int maiorAtleta = 0, continuar = 1,  opc = 0;
    Atleta atletas[5];
    maiorAtleta = cadastrarAtleta(atletas);

    while (continuar == 1){
        menu();
        scanf("%d", &opc);
        while(getchar() != '\n');

        switch(opc){
            case 1:
                linha();
                exibirAtletas(atletas);
                break;
            case 2:
                linha();
                mediaIdade(atletas);
                break;
            case 3:
                linha();
                printf("O ATLETA COM O MAIOR PONTO: %s COM %d PONTOS\n",
                atletas[maiorAtleta].nome, atletas[maiorAtleta].pontuacao);
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
