#include "funcoes.h"

void exibirContas() {
    Conta* atual = head;

    if (atual == NULL) {
        system("cls");
        tela_exibirConta(); // Mostra o layout da tela
        gotoxy(31, 3);
        printf("Nenhuma conta cadastrada.");
        return;
    }

    while (atual != NULL) {
        system("cls"); // Limpa a tela para exibir uma conta por vez
        tela_exibirConta(); // Mostra o layout da tela para cada conta

        // Exibe os dados da conta dentro do layout
        gotoxy(21, 5);
        printf("Codigo: %s", atual->codigo);
        gotoxy(21, 6);
        printf("Banco: %s", atual->banco);
        gotoxy(21, 7);
        printf("Agencia: %s", atual->agencia);
        gotoxy(21, 8);
        printf("Numero da Conta: %s", atual->numeroConta);
        gotoxy(21, 9);
        printf("Tipo da Conta: %d", atual->tipoConta);
        gotoxy(21, 10);
        printf("Saldo: %.2f", atual->saldo);
        gotoxy(21, 11);
        printf("Limite: %.2f", atual->limite);
        gotoxy(21, 12);
        printf("Status: %s", atual->statusConta == 1 ? "Ativo" : "Inativo");

        // Aguarda o usuario pressionar Enter para ir para a proxima conta
        gotoxy(2, 23);
        printf("Pressione Enter para continuar.");
        getchar(); // Aguarda interacao do usuario

        atual = atual->next; // Avanca para a proxima conta
    }

    // Finaliza o loop apos mostrar todas as contas
    system("cls");
    tela_exibirConta(); // Retorna ao layout da tela

    // Exibe mensagem "Todas as contas foram exibidas."
    gotoxy(2, 23);
    printf("Todas as contas foram exibidas.");
    getchar(); // Aguarda Enter para remover a mensagem
}
