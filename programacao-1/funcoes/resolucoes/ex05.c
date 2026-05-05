#include <stdio.h>

int trasfSegundos(int hr, int min, int seg){
    return (hr * 3600) + (min * 60) + seg;
}

int main()
{
    int horas = 0, minutos = 0, segundos = 0;
    
    printf("Informe as Horas: ");
    scanf(" %d", &horas);
    printf("Informe as Minutos: ");
    scanf(" %d", &minutos);
    printf("Informe as Segundos: ");
    scanf(" %d", &segundos);
    printf("Isso tudo em segundos eh: %d", trasfSegundos(horas, minutos, segundos));

    return 0;
}
