#include <stdio.h>
#include <string.h>
#define TAM 100

typedef struct {
    char nome[TAM];
    char genero[TAM];
    char modoJogo[TAM];
    char plataforma[TAM];
    int ranking;
} Jogo;

void linha() {
    printf("=-=-=-=-=-=-=-=-=-=-=-=-==-=\n");
}

void menu() {
    linha();
    printf("O QUE DESEJA FAZER?\n");
    linha();
    printf("[1] - EXIBIR TODOS OS JOGOS\n");
    printf("[2] - BUSCAR JOGOS POR GENERO\n");
    printf("[3] - BUSCAR JOGOS POR RANKING (1 a 5)\n");
    printf("[4] - VERIFICAR SE UM JOGO ESTA NOS FAVORITOS\n");
    printf("[999] - PARA SAIR\n");
}

void cadastrarJogos(Jogo jogos[], int qtd) {
    for (int i = 0; i < qtd; i++) {
        linha();
        printf("CADASTRANDO JOGO [%d]:\n", i + 1);

        printf("Informe o NOME do jogo: ");
        fgets(jogos[i].nome, TAM, stdin);
        jogos[i].nome[strcspn(jogos[i].nome, "\n")] = '\0';

        printf("Informe o GENERO (ex: RPG, Acao, Esporte): ");
        fgets(jogos[i].genero, TAM, stdin);
        jogos[i].genero[strcspn(jogos[i].genero, "\n")] = '\0';

        printf("Informe o MODO DE JOGO (ex: Singleplayer, Multiplayer): ");
        fgets(jogos[i].modoJogo, TAM, stdin);
        jogos[i].modoJogo[strcspn(jogos[i].modoJogo, "\n")] = '\0';

        printf("Informe a PLATAFORMA (ex: PC, PS5, Xbox): ");
        fgets(jogos[i].plataforma, TAM, stdin);
        jogos[i].plataforma[strcspn(jogos[i].plataforma, "\n")] = '\0';

        do {
            printf("Informe a POSICAO NO RANKING (1 a 5): ");
            scanf("%d", &jogos[i].ranking);
            while (getchar() != '\n');
            if (jogos[i].ranking < 1 || jogos[i].ranking > 5) {
                printf("RANKING INVALIDO! Digite um valor entre 1 e 5.\n");
            }
        } while (jogos[i].ranking < 1 || jogos[i].ranking > 5);
    }
}

void exibirTodos(Jogo jogos[], int qtd) {
    for (int i = 0; i < qtd; i++) {
        printf("NOME: %s | GENERO: %s | MODO: %s | PLATAFORMA: %s | RANKING: %d/5\n",
               jogos[i].nome, jogos[i].genero, jogos[i].modoJogo, jogos[i].plataforma, jogos[i].ranking);
    }
}

void buscarPorGenero(Jogo jogos[], int qtd, char generoBuscado[]) {
    int encontrado = 0;
    for (int i = 0; i < qtd; i++) {
        if (strcmp(jogos[i].genero, generoBuscado) == 0) {
            printf("NOME: %s | MODO: %s | PLATAFORMA: %s | RANKING: %d/5\n",
                   jogos[i].nome, jogos[i].modoJogo, jogos[i].plataforma, jogos[i].ranking);
            encontrado = 1;
        }
    }
    if (!encontrado) {
        printf("Nenhum jogo encontrado para o genero: %s\n", generoBuscado);
    }
}

void buscarPorRanking(Jogo jogos[], int qtd, int rankingBuscado) {
    int encontrado = 0;
    for (int i = 0; i < qtd; i++) {
        if (jogos[i].ranking == rankingBuscado) {
            printf("NOME: %s | GENERO: %s | MODO: %s | PLATAFORMA: %s\n",
                   jogos[i].nome, jogos[i].genero, jogos[i].modoJogo, jogos[i].plataforma);
            encontrado = 1;
        }
    }
    if (!encontrado) {
        printf("Nenhum jogo encontrado com a posicao no ranking: %d\n", rankingBuscado);
    }
}

void buscarPorNome(Jogo jogos[], int qtd, char nomeBuscado[]) {
    for (int i = 0; i < qtd; i++) {
        if (strcmp(jogos[i].nome, nomeBuscado) == 0) {
            printf("O jogo '%s' ESTA cadastrado entre os seus favoritos! (Ranking: %d/5)\n", 
                   jogos[i].nome, jogos[i].ranking);
            return;
        }
    }
    printf("O jogo '%s' NAO esta na sua lista de favoritos.\n", nomeBuscado);
}

int main() {
    int qtd = 0, opc = 0, continuar = 1, rankingBuscado = 0;
    char busca[TAM];

    while (1) {
        printf("INFORME A QUANTIDADE DE JOGOS A CADASTRAR: ");
        scanf("%d", &qtd);
        while (getchar() != '\n');
        linha();
        if (qtd <= 0) {
            printf("VALOR INVALIDO! Digite uma quantidade maior que zero.\n");
            linha();
        } else {
            break;
        }
    }

    Jogo jogos[qtd];
    cadastrarJogos(jogos, qtd);

    while (continuar == 1) {
        menu();
        scanf("%d", &opc);
        while (getchar() != '\n');

        switch (opc) {
            case 1:
                linha();
                exibirTodos(jogos, qtd);
                break;
            case 2:
                linha();
                printf("INFORME O GENERO DESEJADO: ");
                fgets(busca, TAM, stdin);
                busca[strcspn(busca, "\n")] = '\0';
                linha();
                buscarPorGenero(jogos, qtd, busca);
                break;
            case 3:
                linha();
                printf("INFORME O RANKING DESEJADO (1 a 5): ");
                scanf("%d", &rankingBuscado);
                while (getchar() != '\n');
                linha();
                if (rankingBuscado < 1 || rankingBuscado > 5) {
                    printf("RANKING INVALIDO!\n");
                } else {
                    buscarPorRanking(jogos, qtd, rankingBuscado);
                }
                break;
            case 4:
                linha();
                printf("INFORME O NOME DO JOGO: ");
                fgets(busca, TAM, stdin);
                busca[strcspn(busca, "\n")] = '\0';
                linha();
                buscarPorNome(jogos, qtd, busca);
                break;
            case 999:
                continuar = 0;
                break;
            default:
                printf("OPCAO INVALIDA!\n");
                break;
        }
    }

    linha();
    printf("FIM\n");

    return 0;
}