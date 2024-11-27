#include "funcoes.h"

void tela_inicial() {
    desenha_moldura();
    gotoxy(34, 3);
    printf("Tela Inicial");
    gotoxy(28, 11);
    printf("1. Contas Bancarias");
    gotoxy(28, 13);
    printf("2. Movimentacao Bancaria");
    gotoxy(28, 15);
    printf("3. Sair do Programa");
    gotoxy(2, 23);
    printf("Escolha uma opcao: ");
}