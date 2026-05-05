#include <stdio.h>

void jogo(int num){
    int x = 0, tentativas = 0;
    printf("Tente acertar o NUMERO SECRETO: ");
    while (1){
        scanf(" %d", &x);
        tentativas++;

        if(x > num){
            printf("O seu numero eh MAIOR");

        }else if(x < num){
            printf("O seu numero eh MENOR");

        }else{
            printf("Voce acertou o numero era: %d\n",num);
            printf("Foram %d TENTATIVAS", tentativas);
            break;

        }
        printf("\nTENTE NOVAMENTE: ");
    }

}

int main(){
    jogo(25);
    return 0;
}
