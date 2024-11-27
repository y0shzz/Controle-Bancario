#include "funcoes.h"

void exibirContas() {
    if (head == NULL) {
        printf("Nenhuma conta cadastrada.\n");
        return;
    }
    
    gotoxy(32, 3);
    printf("Contas cadastradas:\n");
    void tela_exibirConta();

    Conta* atual = head;
    while (atual != NULL) {
        gotoxy(3, 5);
        printf("Codigo: %s\n", atual->codigo);
        gotoxy(3, 6);
        printf("Banco: %s\n", atual->banco);
        gotoxy(3, 7);
        printf("Agencia: %s\n", atual->agencia);
        gotoxy(3, 8);
        printf("Numero da Conta: %s\n", atual->numeroConta);
        gotoxy(3, 9);
        printf("Tipo da Conta: %d\n", atual->tipoConta);
        gotoxy(3, 10);
        printf("Saldo: %.2f\n", atual->saldo);
        gotoxy(3, 11);
        printf("Limite: %.2f\n", atual->limite);
        gotoxy(3, 12);
        printf("Status: %s\n", atual->statusConta == 1 ? "Ativo" : "Inativo");
        atual = atual->next;  
    }
}
