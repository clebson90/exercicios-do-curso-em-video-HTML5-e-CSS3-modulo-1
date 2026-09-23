#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>

int main () {
    float nota1;
    float nota2;
    float nota_final;

    printf("=======================\n");
    printf("SIMULADOR DE APROVACAO\n");
    printf("=======================\n");

    printf("Digite a nota da 1a prova: ");
    scanf("%f", &nota1);
    printf("Digite a nota da 2a prova: ");
    scanf("%f", &nota2);
    nota_final = nota1 + nota2; // somo as notas
    nota_final = nota_final / 2; // faça a média

    if (nota_final >= 7) { // aq eu vejo o status do aluno
        printf("Sua media do semestre e: %.2f\n", nota_final);
        printf("Status: APROVADO DIRETO!\nParabens, pode descansar");
    } else if (nota_final < 4) {
        printf("Sua media do semestre e: %.2f\n", nota_final);
        printf("Status: REPROVADO!\nNos vemos no proximo semestre");
    } else {
        printf("Sua media do semestre e: %.2f\n", nota_final);
        printf("Status: PROVA FINAL");
    }  
}