#include "funcoes.h"

void tela_submenu(){
    desenha_moldura();
    gotoxy(37, 3);
    printf("SubMenu");
    gotoxy(20, 9);
    printf("1. Cadastrar Contas Bancarias no Final");
    gotoxy(20, 10);
    printf("2. Cadastrar Contas Bancarias no Inicio");
    gotoxy(20, 11);
    printf("3. Cadastrar Contas Bancarias na Posicao");
    gotoxy(20, 12);
    printf("4. Remover Contas Bancarias no Final");
    gotoxy(20, 13);
    printf("5. Remover Contas Bancarias no Inicio");
    gotoxy(20, 14);
    printf("6. Remover Contas Bancarias na Posicao");
    gotoxy(20, 15);
    printf("7. Alteracao do Contas Bancarias");
    gotoxy(20, 16);
    printf("8. Consultar Contas Bancarias");
    gotoxy(20, 17);
    printf("9. Retornar ao Menu Anterior");
}