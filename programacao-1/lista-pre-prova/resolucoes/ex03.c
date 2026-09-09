#include <stdio.h>

int main () {
  
    int vet [4] = {4 , 8 , 12 , 16};

    int *p = vet;
    int **pp = &p;
    int ***ppp = &pp;

    p = &vet[2];
    **pp = 20;
    ***ppp = ***ppp + 5;

    printf ("%d %d %d %d \n", vet[0] ,vet[1] ,vet[2] ,vet[3]);
    // A saida será (4, 8, 25, 16)
    
 return 0; 
}