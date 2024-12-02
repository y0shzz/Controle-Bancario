/*Autor: João Miguel de Oliveira Teodosio
  Data: 27/11/2024
  OBJ: Arquivo será a main*/
#include "funcoes.h"

int main() {
    int opcao_telainicial;

    do {
        tela_inicial();
        gotoxy(20, 23);
        scanf("%d", &opcao_telainicial);

        switch (opcao_telainicial) {
            case 1: {
                int opcao_submenu; 
                do {
                    system("cls");
                    tela_submenu();
                    gotoxy(2, 23);
                    printf("Escolha uma opcao: ");
                    scanf("%d", &opcao_submenu);

                    int continuar;
                    switch (opcao_submenu) {
                        case 1: {
                            int continuar = 1;
                            do {
                                system("cls");
                                inserirnofinal();
                                salvarListaNoDisco("contas.dat");

                                gotoxy(2, 23);
                                printf("Deseja Inserir outra Conta? (1= SIM, 2= NAO): ");
                                scanf("%d", &continuar);
                            } while (continuar == 1);
                            break;
                        }

                        case 2: {
                            int continuar = 1;
                            do {
                                system("cls");
                                inserirnoinicio();
                                salvarListaNoDisco("contas.dat");

                                gotoxy(2, 23);
                                printf("Deseja Inserir outra Conta? (1= SIM, 2= NAO): ");
                                scanf("%d", &continuar); 
                            } while (continuar == 1);
                            break;
                        }

                        case 3:
                            break;

                        case 4:
                            break;

                        case 5:
                            break;

                        case 6:
                            break;

                        case 7:
                            break;

                        case 8:
                            system("cls");
                            carregarListaDoDisco("contas.dat");  
                            exibirContas();
                            gotoxy(2, 23);
                            printf("Pressione qualquer tecla para voltar ao menu...");
                            getch();
                            break;

                        case 9:
                            system("cls");
                            break;    

                        default:
                            printf("Opcao Invalida! Tente novamente.\n");
                            break;
                    }

                    if (opcao_submenu == 9) {
                        break;
                    }

                } while (1);  

                break;
            }

            case 2:
                break;

            case 3:
                gotoxy(58, 23);
                printf("Saindo do programa...\n");
                break;

            default:
                printf("Opcao invalida! Tente Novamente.\n");
                break;
        }
    } while (opcao_telainicial != 3);  

    return 0;
}
