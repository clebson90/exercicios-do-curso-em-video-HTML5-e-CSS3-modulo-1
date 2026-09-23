#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>

int main () {
    int pedido;
    int grande = 10;
    int medio = 5;
    int pequena = 1;
    int unidade1 = 0;
    int unidade2 = 0;
    int unidade3 = 0;

    printf("=======================\n");
    printf("SETOR DE EMPACOTAMENTO\n");
    printf("=======================\n");

    printf("Digite o total de ferramentas do pedido: ");
    scanf("%d", &pedido);
    printf("Separar as seguintes embalagens:");

    while (pedido >= grande) {
        pedido -= grande; // pego o pedido e diminuo pela caixa
        unidade1++; // depois acrecento 1 na unidade
    }
    while (pedido >= medio) {
        pedido -= medio;
        unidade2++;
    }
    while (pedido >= pequena) {
        pedido -= pequena;
        unidade3++;
    }
    
    printf("Separar as seguintes embalagens:\n");
    printf("Caixas Grandes (10 un): %d\n", unidade1);
    printf("Caixas Medias (5 un): %d\n", unidade2);
    printf("Caixas Grandes (1 un): %d", unidade3);
}