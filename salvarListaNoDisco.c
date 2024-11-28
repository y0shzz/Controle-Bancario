/*Autor: João Miguel de Oliveira Teodosio
  Data: 27/11/2024
  OBJ: Criar salvamento de lista em disco*/
#include "funcoes.h"

void salvarListaNoDisco(const char* nomeArquivo) {
    FILE* arquivo = fopen(nomeArquivo, "wb");  
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo para salvar.\n");
        return;
    }

    Conta* atual = head;
    while (atual != NULL) {
        fwrite(atual, sizeof(Conta), 1, arquivo);  
        atual = atual->next;  
    }

    fclose(arquivo);  
    printf("Dados salvos com sucesso no arquivo '%s'.\n", nomeArquivo);
}
