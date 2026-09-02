#include <stdio.h>
#include <string.h>
#define TAM 100

typedef struct {
    char nome[TAM];
    int forca;
} Personagem;

void lerPersonagem(Personagem *per){

    printf("Informe o nome do personagem: ");
    fgets(per->nome, TAM, stdin);
    per->nome[strcspn(per->nome,"\n")] = '\0';
    printf("Informe a forca do personagem: ");
    scanf(" %d", &per->forca);
    while(getchar() != '\n');

}

void vencedor(Personagem *per1, Personagem *per2){

    if(per1->forca == per2->forca)
        printf("As forcas dos personagens sao iguas");
    else if(per1->forca > per2->forca)
        printf("Personagem 1 eh mais forte que o personagem 2");
    else
        printf("Personagem 2 eh mais forte que o personagem 1");


}

int main(){
    
    Personagem p1, p2;
    lerPersonagem(&p1);
    lerPersonagem(&p2);
    vencedor(&p1, &p2);
    
    return 0;
}
