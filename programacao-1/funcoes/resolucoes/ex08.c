#include <stdio.h>
#include <windows.h>

void linha(){
    printf("=-=-=-=-=--=-=-=-=-=-=-=-=-=-=-=-=-=");
}

void menu(){

    printf("\n[1] - Efetuar Deposito");
    printf("\n[2] - Efetuar Saque");
    printf("\n[3] - Mostrar Saldo");
    printf("\n[4] - Sair do Sistema\n");
    linha();
    printf("\nO que deseja fazer: ");

}

int deposito(){

    int valor = 0;

    printf("Informe o valor do deposito: ");
    scanf(" %d", &valor);

    if(valor <= 0){
        linha();
        printf("\nValor invalido\n");
        linha();
        Sleep(1000);
        return 0;
    }

    linha();
    printf("\nValor DESPOSITADO\n");
    linha();
    Sleep(1000);

    return valor;
}

int saque(int saldoAtual){

    int saque = 0, saldo = saldoAtual;

    printf("Informe o valor do saque: ");
    scanf(" %d", &saque);

    if(saque <= 0){
        linha();
        printf("\nValor invalido\n");
        linha();
        Sleep(1000);
        return 0;
    }

    if(saque > saldo){
        linha();
        printf("\nValor insuficiente\n");
        linha();
        Sleep(1000);
        return 0;
    }else{

        linha();
        printf("\nValor SACADO\n");
        linha();
        Sleep(1000);
    
        return saque;
    }

}

void mostrarSaldo(int saldoAtual){

    linha();
    printf("\nSeu saldo atual: R$%d\n", saldoAtual);
    linha();
    Sleep(1000);

}

int main(){

    int opc = 0, saldoAtual = 0, continuar = 1;

    while(continuar == 1){

        menu();
        scanf(" %d", &opc);

        switch(opc){

            case 1:
                saldoAtual += deposito();
                break;
                
            case 2:
                saldoAtual -= saque(saldoAtual);
                break;
                
            case 3:
                mostrarSaldo(saldoAtual);
                break;
                
            case 4:
                continuar = 0;
                break;

            default:
                linha();
                printf("\nOpcao invalida, TENTE NOVAMENTE\n");
                linha();
                Sleep(1000);
                break;
            }
            
        }
    linha();
    printf("\nFIM DO PROGRAMA");
    Sleep(500);

    return 0;
}
