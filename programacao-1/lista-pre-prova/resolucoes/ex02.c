#include <stdio.h>
#include <string.h>

#define TAM 200

struct Sessao{
    
    char filme[TAM];
    int capacidade;
    int vendidos;

};

int venderIngresso(struct Sessao *s){

    if(s->vendidos < s->capacidade){
        s->vendidos++;
        return 1;
    }else{
        return 0;
    }
}

int main(){
    
    int disponivel = 0;
    struct Sessao filme = {"john wick", 20, 0};
    disponivel = venderIngresso(&filme);

    if(disponivel == 1) printf("Ingresso vendido");
    else printf("Sessao cheia");

    return 0;
}
