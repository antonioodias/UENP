#include <stdio.h>

struct dispositivo{
    char codigo[20];
    int bateria;
};

void consumirBateria(struct dispositivo *d, int valor){

    if(valor < d->bateria) {
        d->bateria -= valor;
        printf("Nivel de bateria: %d", d->bateria);
    }else{
        printf("Bateria zerada");
    }
}

int main(){

    struct dispositivo celular = {"200", 50};
    consumirBateria(&celular, 10);

    return 0;
}
