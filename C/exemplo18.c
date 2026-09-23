#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>

int main() {
    float valor;
    float pagar = 0;
    float pagamento_atual;
    float troco;

    printf("======================\n");
    printf("HORA DE PAGAR A CONTA\n");
    printf("======================\n");

    printf("Qual o valor total da conta na sorveteria? ");
    scanf("%f", &valor);

    // faço o lopp dos pagamentos
    while (pagar < valor) {
        printf("Faltam R$ %.2f para fechar a conta.\nAlguem coloca dinheiro na mesa! R$ ", valor - pagar);
        scanf("%f", &pagamento_atual);
        pagar = pagar + pagamento_atual; // Acumula os pagamentos
    }

    printf("\nConta paga! Arrecadamos R$ %.2f.\n", pagar);
    if (pagar > valor) {
        troco = pagar - valor; // faço o calculo do troco
        printf("Ainda sobrou R$ %.2f de troco para dividir!\n", troco);
    }
}