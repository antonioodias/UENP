#include <stdio.h>

int main()
{
    int n;
    double soma = 0 ;

    printf("Informe o numero N para a soma: ");
    scanf("%d", &n);

    for(double i = 1; i <= n; i++){

        soma += 1.0 / i;

    }

    printf("A soma sera: %lf", soma);

    return 0;
}
