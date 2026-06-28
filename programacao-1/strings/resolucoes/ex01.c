#include <stdio.h>
#include <string.h>

#define TAM 100

void inverteString(char str[], char invstr[]){

    int  j = 0;
    for(int i = strlen(str) - 2; i >= 0; i--){
        invstr[j] = str[i];
        j++;
    }
    invstr[j] = '\0';
    

}

int main()
{
    char string[TAM] = {0};
    char stringInvertida[TAM] = {0};

    fgets(string, sizeof(string), stdin);

    inverteString(string, stringInvertida);

    fputs(stringInvertida, stdout);

    return 0;
}
