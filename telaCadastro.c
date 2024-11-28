/*Autor: Cauan Hiyuji Muradas Váz
  Data: 27/11/2024
  OBJ: Criar tela de registro padrão de conta*/
#include "funcoes.h"

void telaCadastro() {
    desenha_moldura();
    gotoxy(32, 3);
    printf("Inserir no Final");
    gotoxy(11, 6);
    printf("Codigo da Conta..:");
    gotoxy(9, 8);
    printf("1-Banco............:");
    gotoxy(9, 10);
    printf("2-Agencia..........:");
    gotoxy(9, 12);
    printf("3-Numero da Conta..:");
    gotoxy(9, 14);
    printf("4-Tipo da Conta....:");
    gotoxy(9, 16);
    printf("5-Saldo............:");
    gotoxy(9, 18);
    printf("6-Limite...........:");
    gotoxy(9, 20);
    printf("7-Status Conta.....:");
}