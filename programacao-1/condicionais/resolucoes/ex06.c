#include <stdio.h>

int main()
{
    int x, y, z, media;
    int qtd_acima = 0;

    printf("Informe o primeiro valor: ");
    scanf("%d", &x);
    printf("Informe o segundo valor: ");
    scanf("%d", &y);
    printf("Informe o terceiro valor: ");
    scanf("%d", &z);

    media = (x + y + z) / 3;

    if (x > media){
        qtd_acima += 1;

    }
    if (y > media){
        qtd_acima += 1; 
         
    }
    if (z > media){
        qtd_acima += 1;
  
    }

    printf("A media sera %d, dos valores fornecidos %d estao acima da media", media, qtd_acima);
    
    return 0;
}
