#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>

int main () {
    char ferramenta[50];
    int estoque;
    int valor;
    float valor_final;

        printf("====================================\n");
        printf("          AUDITORIA DE LOTE         \n");
        printf("====================================\n");
        printf("Nome da ferramenta: ");
        scanf("%s", ferramenta);
        printf("Quantidade em estoque: ");
        scanf("%d", &estoque);
        printf("Valor unitario: ");
        scanf("%d", &valor);
        valor_final =  estoque * valor; // calculando o valor final
        printf("Resumo: %d unidades de %s\n", estoque, ferramenta);
        printf("Totalizando R$ %.2f no patrimonio", valor_final);
}