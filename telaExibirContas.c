#include "funcoes.h"

void tela_exibirConta(){
    desenha_moldura();
    gotoxy(3, 5);
    printf("Codigo...........:");
    gotoxy(3, 6);
    printf("Banco............:");
    gotoxy(3, 7);
    printf("Agencia..........:");
    gotoxy(3, 8);
    printf("Numero da Conta..:");
    gotoxy(3, 9);
    printf("Tipo da Conta....:");
    gotoxy(3, 10);
    printf("Saldo............:");
    gotoxy(3, 11);
    printf("Limite...........:");
    gotoxy(3, 12);
    printf("Status da Conta:.:");
}