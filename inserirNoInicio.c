#include "funcoes.h"

void inserirnoinicio() {
    char codigo[10], banco[50], agencia[20], numeroConta[20];
    int tipoConta, statusConta;
    float saldo, limite;

    telainseririnicio();  

    gotoxy(29, 6);
    scanf("%s", codigo);  

    gotoxy(29, 8);
    scanf("%s", banco);  

    gotoxy(29, 10);
    scanf("%s", agencia);  

    gotoxy(29, 12);
    scanf("%s", numeroConta);  
    
    gotoxy(29, 14);
    tipoConta = validaTipoConta();
    gotoxy(2, 23);  
    printf("                                                      ");  

    gotoxy(29, 16);
    scanf("%f", &saldo);  

    gotoxy(29, 18);
    scanf("%f", &limite);  

    gotoxy(2, 23);
    printf("Status (1-Ativo, 0-Inativo): ");
    gotoxy(29, 20);
    scanf("%d", &statusConta);  

    // Aloca a nova conta
    Conta* novaConta = (Conta*)malloc(sizeof(Conta));
    if (novaConta == NULL) {
        printf("Erro ao alocar memória para a nova conta.\n");
        return;  
    }

    // Preenche os dados da nova conta
    strcpy(novaConta->codigo, codigo);
    strcpy(novaConta->banco, banco);
    strcpy(novaConta->agencia, agencia);
    strcpy(novaConta->numeroConta, numeroConta);
    novaConta->tipoConta = tipoConta;
    novaConta->saldo = saldo;
    novaConta->limite = limite;
    novaConta->statusConta = statusConta;
    novaConta->next = NULL;  
    novaConta->prev = NULL;  

    // Insere a nova conta no início da lista
    if (head == NULL) {
        // Se a lista estiver vazia
        head = novaConta;
        tail = novaConta;
    } else {
        // Lista não vazia: insere no início
        novaConta->next = head;  // Aponta o próximo da nova conta para a atual cabeça
        head->prev = novaConta; // Faz o ponteiro anterior da antiga cabeça apontar para a nova conta
        head = novaConta;       // Atualiza a cabeça da lista para a nova conta
    }
}
