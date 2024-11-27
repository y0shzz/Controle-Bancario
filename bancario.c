#include "funcoes.h"

int main() {
    int opcao_telainicial;

    do {
        tela_inicial();
        gotoxy(20, 23);
        scanf("%d", &opcao_telainicial);

        switch (opcao_telainicial) {
            case 1:
                do {
                    system("cls");
                    tela_submenu();
                    int opcao_submenu;
                    gotoxy(2, 23);
                    printf("Escolha uma opcao: ");
                    scanf("%d", &opcao_submenu);

                    switch (opcao_submenu) {
                        case 1:
                            do {
                                system("cls");
                                inserirnofinal();

                            }while (1);

                            break;

                        case 2:
                            
                            break;

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
