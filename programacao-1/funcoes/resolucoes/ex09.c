#include <stdio.h>


float calcularIMC(float pes, float alt){
    if(alt <= 0 || pes <= 0){
        return -1;
    }
    return pes / (alt * alt);
}

void  classificarIMC(float imc){

    if(imc < 18.5){
        printf("IMC: %.2f Abaixo do peso !!!", imc);

    }else if(imc <= 25.0){
        printf("IMC: %.2f Peso normal !!!", imc);

    }else if(imc <= 30.0){
        printf("IMC: %.2f Sobrepeso !!!", imc);

    }else{
        printf("IMC: %.2f Obeso !!!", imc);
    }
}

int main()
{
    float peso = 0, altura = 0, imc = 0;

    printf("Informe seu PESO: ");
    scanf(" %f", &peso);
    printf("Informe seu ALTURA: ");
    scanf(" %f", &altura);

    imc = calcularIMC(peso, altura);
    if(imc <  0){
        printf("\nValores invalidos, altura e peso devem ser maiores que ZERO");

    }else{
        classificarIMC(imc);

    }

    return 0;
}
