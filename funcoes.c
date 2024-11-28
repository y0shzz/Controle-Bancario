/*Autor: João Miguel de Oliveira Teodosio
  Data: 27/11/2024
  OBJ: Juntar as funções a serem usadas no projeto*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <windows.h>
#include <conio.h>
#include "funcoes.h"


void gotoxy(int x, int y) {
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
 
Conta* head = NULL;  
Conta* tail = NULL;  
