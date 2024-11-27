#include "funcoes.h"

void exibirContas() {
    tela_exibirConta();
    gotoxy(31, 3);
    printf("Contas cadastradas");

    Conta* atual = head;
    while (atual != NULL) {
        gotoxy(21, 5);
        printf("%s\n", atual->codigo);
        gotoxy(21, 6);
        printf("%s\n", atual->banco);
        gotoxy(21, 7);
        printf("%s\n", atual->agencia);
        gotoxy(21, 8);
        printf("%s\n", atual->numeroConta);
        gotoxy(21, 9);
        printf("%d\n", atual->tipoConta);
        gotoxy(21, 10);
        printf("%.2f\n", atual->saldo);
        gotoxy(21, 11);
        printf("%.2f\n", atual->limite);
        gotoxy(21, 12);
        printf("%s\n", atual->statusConta == 1 ? "Ativo" : "Inativo");
        atual = atual->next;  
    }

    if (head == NULL) {
        printf("Nenhuma conta cadastrada.\n");
        return;
    }
}
