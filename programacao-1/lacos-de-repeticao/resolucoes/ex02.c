#include <stdio.h>

int main()
{
    int totalAlunos = 0;
    int situacao = 0, presente = 0, ausente = 0;

    printf("Informe o total de alunos: ");
    scanf("%d", &totalAlunos);

    for (int i = 0; i < totalAlunos; i++){
        
        printf("\nO aluno %d esta Presente [1] ou Ausente [0]: ", i + 1);
        scanf("%d",&situacao);
        if(situacao == 1){
            presente++;
    
        } else if(situacao == 0){
            ausente++;

        }else{
            printf("\nNumero invalido, digite apenas [1] para Presente e [0] para Ausente.");
            i--;
        }
    }
    printf("\nO total de alunos presente: %d\n", presente);
    printf("O total de alunos ausente: %d", ausente);


    return 0;
}
