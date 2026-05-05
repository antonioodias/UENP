#include <stdio.h>

int main()
{
    int x,ant,suc;    

    printf("Informe um numero [-50 a 50]: ");
    scanf("%d", &x);

    if(x > 50 || x < -50){

        printf("O valor esta fora do intevalo, rode de novo o programa");

    }else{

        ant = x - 1;
        suc = x + 1;
    
        printf("O seu antecessor: %d\n", ant);
        printf("O seu sucessor: %d", suc); 
    }



    return 0;
}
