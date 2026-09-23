#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>

int main () {
    int i;
    char spinner[] = {'|', '\\', '-', '/'};

    printf("==========================\n");
    printf("FERRALOG: Conexao de Rede\n");
    printf("==========================\n");

    for (i = 1; i <= 100; i+= 1) {
        printf("\rProgresso: [%c]", spinner[i % 4]); // Atualiza o spinner pra ficar rodando os 4 caracteres
        fflush(stdout);
        Sleep(100);
    }
    system("cls");
    printf("[ OK ] conectado com sucesso!");
}