#include "funcoes.h"

int validaTipoConta() {
    int tipo;
    do {
        gotoxy(2, 23);
        printf("Utilizar.: 1=Corrente / 2=Poupanca / 3=Cartao Credito");
        gotoxy(29, 14);
        scanf("%d", &tipo);  

        if (tipo == 1) {
            gotoxy(29, 14);
            printf("Corrente");
            return tipo;
        } else if (tipo == 2) {
            gotoxy(29, 14);
            printf("Poupanca");
            return tipo;
        } else if (tipo == 3) {
            gotoxy(29, 14);
            printf("Cartao Credito");
            return tipo;
        } else {
            gotoxy(2, 23);
            printf("Opcao invalida, tente novamente.");
            gotoxy(2, 23);  
            printf("                                                     ");
        }
    } while (1);
}