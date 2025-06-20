#include <stdio.h>
#include <string.h>

int main() {
    // Declaração das variáveis para a Carta 1
    char estado1;
    char codigo1[4];
    char nome1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontos1;

    // Declaração das variáveis para a Carta 2
    char estado2;
    char codigo2[4];
    char nome2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontos2;

    // Cadastro da Carta 1
    printf("Cadastro da Carta 1:\n");

    printf("Informe o Estado (A a H): ");
    scanf(" %c", &estado1);

    printf("Informe o Código da Carta (ex: A01): ");
    scanf("%3s", codigo1);

    printf("Informe o Nome da Cidade: ");
    getchar(); // Limpa o buffer
    fgets(nome1, sizeof(nome1), stdin);
    nome1[strcspn(nome1, "\n")] = '\0'; // Remove a quebra de linha

    printf("Informe a População: ");
    scanf("%d", &populacao1);

    printf("Informe a Área (em km²): ");
    scanf("%f", &area1);

    printf("Informe o PIB (bilhões de reais): ");
    scanf("%f", &pib1);

    printf("Informe o Número de Pontos Turísticos: ");
    scanf("%d", &pontos1);

    // Cadastro da Carta 2
    printf("\nCadastro da Carta 2:\n");

    printf("Informe o Estado (A a H): ");
    scanf(" %c", &estado2);

    printf("Informe o Código da Carta (ex: A01): ");
    scanf("%3s", codigo2);

    printf("Informe o Nome da Cidade: ");
    getchar(); // Limpa o buffer
    fgets(nome2, sizeof(nome2), stdin);
    nome2[strcspn(nome2, "\n")] = '\0'; // Remove a quebra de linha

    printf("Informe a População: ");
    scanf("%d", &populacao2);

    printf("Informe a Área (em km²): ");
    scanf("%f", &area2);

    printf("Informe o PIB (bilhões de reais): ");
    scanf("%f", &pib2);

    printf("Informe o Número de Pontos Turísticos: ");
    scanf("%d", &pontos2);

    // Exibição das cartas
    printf("\n--- Carta 1 ---\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nome1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões\n", pib1);
    printf("Pontos Turísticos: %d\n\n", pontos1);

    printf("--- Carta 2 ---\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nome2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões\n", pib2);
    printf("Pontos Turísticos: %d\n", pontos2);

    return 0;
}