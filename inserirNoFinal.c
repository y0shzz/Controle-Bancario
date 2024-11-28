/*Autor: Cauan Hiyuji Murads Váz
  Data: 27/11/2024
  OBJ: Criar opção de registrar conta no final da lista*/
#include "funcoes.h"

void inserirnofinal() {
    char codigo[10], banco[50], agencia[20], numeroConta[20];
    int tipoConta, statusConta;
    float saldo, limite;

    telaCadastro();  

    // Captura os dados do usuário
    gotoxy(29, 6);
    scanf("%s", codigo);  // Usando scanf para ler a entrada do código

    gotoxy(29, 8);
    scanf("%s", banco);  // Usando scanf para ler o nome do banco

    gotoxy(29, 10);
    scanf("%s", agencia);  // Usando scanf para ler o número da agência

    gotoxy(29, 12);
    scanf("%s", numeroConta);  // Usando scanf para ler o número da conta
    
    gotoxy(29, 14);
    tipoConta = validaTipoConta();
    gotoxy(2, 23);  
    printf("                                                      ");  

    gotoxy(29, 16);
    scanf("%f", &saldo);  // Usando scanf para ler o saldo da conta

    gotoxy(29, 18);
    scanf("%f", &limite);  // Usando scanf para ler o limite da conta

    gotoxy(2, 23);
    printf("Status (1-Ativo, 0-Inativo): ");
    gotoxy(29, 20);
    scanf("%d", &statusConta);  // Usando scanf para ler o status da conta (ativo ou inativo)

    // Aloca memória para a nova conta
    Conta* novaConta = (Conta*)malloc(sizeof(Conta));
    if (novaConta == NULL) {
        printf("Erro ao alocar memória para a nova conta.\n");
        return;  // Retorna da função caso não tenha memória suficiente
    }

    // Atribui os valores lidos à nova conta
    strcpy(novaConta->codigo, codigo);
    strcpy(novaConta->banco, banco);
    strcpy(novaConta->agencia, agencia);
    strcpy(novaConta->numeroConta, numeroConta);
    novaConta->tipoConta = tipoConta;
    novaConta->saldo = saldo;
    novaConta->limite = limite;
    novaConta->statusConta = statusConta;
    novaConta->next = NULL;  // Próximo nó será NULL
    novaConta->prev = NULL;  // Anterior será NULL

    // Se a lista estiver vazia, a nova conta será o primeiro e o último nó
    if (tail == NULL) {
        head = novaConta;
        tail = novaConta;
    } else {
        // Caso contrário, insere no final da lista
        tail->next = novaConta;  // O nó anterior aponta para a nova conta
        novaConta->prev = tail;  // A nova conta aponta para o nó anterior
        tail = novaConta;        // Atualiza o ponteiro tail para o novo último nó
    }

    // Mensagem de sucesso
    gotoxy(2, 23);
    printf("                                    ");  // Limpa a linha
    printf("Conta cadastrada com sucesso!");
}
