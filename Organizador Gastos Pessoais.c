#include <stdio.h>
#include <string.h>

#include "Gasto.h"
#include "Reorganizacao.h"

int main() {
    int quantidade;
    float total = 0;

    // Pergunta quantos gastos serão cadastrados
    printf("Quantos gastos deseja cadastrar? ");
    scanf("%d", &quantidade);

    // Vetor de gastos
    Gasto gastos[100];

    getchar(); // Limpa o ENTER do buffer

    // Cadastro dos gastos
    for (int i = 0; i < quantidade; i++) {
        printf("\nGasto %d\n", i + 1);

        printf("Nome do servico: ");
        fgets(gastos[i].nome, 50, stdin);

        // Remove o '\n' deixado pelo fgets
        gastos[i].nome[strcspn(gastos[i].nome, "\n")] = '\0';

        printf("Valor: R$ ");
        scanf("%f", &gastos[i].valor);

        // Soma os valores para gerar o total
        total += gastos[i].valor;

        getchar(); // Limpa o ENTER
    }

    // Ordena os gastos pelo valor
    quickSort(gastos, 0, quantidade - 1);

    // Exibe os gastos ordenados
    printf("\n===== GASTOS ORDENADOS =====\n");

    for (int i = 0; i < quantidade; i++)    {
        printf("%s - R$ %.2f\n",
               gastos[i].nome,
               gastos[i].valor);
    }

    // Exibe o total gasto
    printf("\n============================\n");
    printf("Total gasto: R$ %.2f\n", total);

    return 0;
}