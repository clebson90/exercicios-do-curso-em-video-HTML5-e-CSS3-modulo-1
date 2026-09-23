#include <stdio.h>
#include <stdlib.h>

int main() {
    float valor_carro; 
    float economia_mensal;
    float meta_lance;
    float acumulado = 0;
    int mes;

    printf("===================================\n");
    printf("   SIMULADOR DE LANCE - CONSORCIO  \n");
    printf("===================================\n\n");

    printf("Digite o valor do carro (Tabela FIPE): R$ ");
    scanf("%f", &valor_carro);

    printf("Quanto voce consegue guardar por mes? R$ ");
    scanf("%f", &economia_mensal);

    // Calcula a meta de 30% do valor do veículo
    meta_lance = valor_carro * 0.30;

    printf("\nMeta para o lance (30%%): R$ %.2f\n\n", meta_lance);

    // O for roda ate um limite maximo seguro (ex: 120 meses / 10 anos)
    for (mes = 1; mes <= 120; mes++) {
        acumulado += economia_mensal; // Soma a economia do mes

        // Verifica se a meta foi atingida
        if (acumulado >= meta_lance) {
            printf("Mes %d: R$ %.2f acumulados -> LANCE MINIMO ATINGIDO!\n", mes, acumulado);
            break; // Interrompe o laço 'for' imediatamente
        }

        printf("Mes %d: R$ %.2f acumulados...\n", mes, acumulado);
    }

    printf("\n-----------------------------------\n");
    printf("Resultado: Voce tera o valor do lance no mes %d!\n", mes);
    printf("Total economizado: R$ %.2f\n", acumulado);
    printf("-----------------------------------\n");

    return 0;
}