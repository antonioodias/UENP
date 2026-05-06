#include <stdio.h>

void linha(){
    printf("=-=-=-=-=-=-=-=-=-=-=-=-==-=");
}

void menu(){
    linha();
    printf("\n[a] - Media Aritmetica");
    printf("\n[p] - Media Ponderada");
    printf("\n[h] - Media Harmonica\n");
    linha();
    printf("\nO que deseja fazer: ");

}

float calculoMedia(float nt1, float nt2, char opc){
    
    switch(opc){

        case 'a':
            return (nt1 + nt2) / 2.0;

        case 'p':
            return ((nt1 * 3.0) + (nt2 * 2.0))/ 5.0;

        case 'h':
            if(nt1 == 0 || nt2 == 0){
                return -2;

            }else{
                return 2.0 / ((1.0/nt1) + (1.0/nt2));

            }

        default:
            return -1;
    }
}

int main()
{
    float nota1 = 0, nota2 = 0, media = 0;
    char opc = 0;

    printf("Informe a NOTA 1: ");
    scanf(" %f", &nota1);
    printf("Informe a NOTA 2: ");
    scanf(" %f", &nota2);

    menu();
    scanf(" %c", &opc);

    media = calculoMedia(nota1, nota2, opc);

    if(media == -1){
        printf("\nValores invalidos, digite apenas [a], [p] ou [h]");

    }else if(media == -2){
        printf("\nDigite apenas valore maiores que ZERO");
    }
    else{
        printf("A media sera: %.2f", media);

    }

    return 0;
}
