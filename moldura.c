#include "funcoes.h"

void desenha_moldura() {
    int lin;
    system("cls");
    for (lin = 1; lin < 25; lin++) {
        gotoxy(1, lin);
        printf("|");
        gotoxy(79, lin);
        printf("|");
    }

    gotoxy(1, 1);
    printf("+-----------------------------------------------------------------------------+");
    gotoxy(1, 4);
    printf("+-----------------------------------------------------------------------------+");
    gotoxy(1, 22);
    printf("+-----------------------------------------------------------------------------+");
    gotoxy(1, 24);
    printf("+-----------------------------------------------------------------------------+");
    gotoxy(2, 2);
    printf("ESTRUTURA DE DADOS");
    gotoxy(2, 3);
    printf("UNICV | 2A ESW");
    gotoxy(53, 2);
    printf("Joao Miguel de O. Teodosio");
    gotoxy(55, 3);
    printf("Cauan Hiyuji Muradas Vaz");
    gotoxy (32, 2);
    printf("Sistema Bancario");
}