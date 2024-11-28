/*Autor: João Miguel de Oliveira Teodosio
  Data: 27/11/2024
  OBJ: Criar executável*/
#include "funcoes.h"

void carregarListaDoDisco(const char* nomeArquivo) {
    FILE* arquivo = fopen(nomeArquivo, "rb");  
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo para carregar.\n");
        return;
    }

    Conta* novaConta = NULL;
    while (1) {
        novaConta = (Conta*)malloc(sizeof(Conta));
        if (novaConta == NULL) {
            printf("Erro ao alocar memória para carregar os dados.\n");
            fclose(arquivo);
            return;
        }

        
        if (fread(novaConta, sizeof(Conta), 1, arquivo) != 1) {
            free(novaConta);  
            break;
        }

        novaConta->next = NULL;
        novaConta->prev = NULL;

        
        if (tail == NULL) {
            head = novaConta;
            tail = novaConta;
        } else {
            tail->next = novaConta;
            novaConta->prev = tail;
            tail = novaConta;
        }
    }

    fclose(arquivo);  

}
