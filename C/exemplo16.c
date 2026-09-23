#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>

int main() {
    float caixa1;
    float caixa2;
    float caixa3;
    float caixa4;
    float caixa5;
    float menor;
    float pesada;

    printf("==========================\n");
    printf("CONTROLE DE MAIOR E MENOR \n");
    printf("==========================\n");

    // Leitura dos pesos
    printf("Digite o peso da caixa 1 (em kg): ");
    scanf("%f", &caixa1);
    printf("Digite o peso da caixa 2 (em kg): ");
    scanf("%f", &caixa2);
    printf("Digite o peso da caixa 3 (em kg): ");
    scanf("%f", &caixa3);
    printf("Digite o peso da caixa 4 (em kg): ");
    scanf("%f", &caixa4);
    printf("Digite o peso da caixa 5 (em kg): ");
    scanf("%f", &caixa5);

    // já coloco que a primeira caixa é tanto a mais pesada como a mais leve
    menor = caixa1;
    pesada = caixa1;

    // agora faço o restante das comparações
    if (caixa2 < menor) menor = caixa2;
    if (caixa2 > pesada) pesada = caixa2;

    if (caixa3 < menor) menor = caixa3;
    if (caixa3 > pesada) pesada = caixa3;

    if (caixa4 < menor) menor = caixa4;
    if (caixa4 > pesada) pesada = caixa4;

    if (caixa5 < menor) menor = caixa5;
    if (caixa5 > pesada) pesada = caixa5;

    printf("Caixa mais leve detectada: %.2f kg\n", menor);
    printf("Caixa mais pesada detectada: %.2f kg\n", pesada);
}