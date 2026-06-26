#include <stdio.h>
#include <string.h>

#define TAM 100

int main()
{
    char string[TAM] = {0};
    char stringInvertida[TAM] = {0};

    fgets(string, sizeof(string), stdin);

    int  j = 0;
    for(int i = strlen(string) - 2; i >= 0; i--){
        stringInvertida[j] = string[i];
        j++;
    }
    
    stringInvertida[j] = '\0';
    fputs(stringInvertida, stdout);

    return 0;
}
