#include <stdio.h>
#include <stdlib.h>

int main() {
    int altura;
    int i;
    int j;

    printf("===============================\n");
    printf("   EMPILHADOR DE CAIXAS        \n");
    printf("===============================\n\n");

    printf("Digite a altura da pilha: ");
    scanf("%d", &altura);

    // Primeiro laço Controla as linhas
    for (i = 1; i <= altura; i++) {
        
        // Segundo laço Imprime as colunas
        for (j = 1; j <= i; j++) {
            printf("[]");
        }
        printf("\n");
    }
}