#include <stdio.h>

int main() {
    // Carta 1
    int populacao1, pontos_turisticos1;
    char estado1[3], codigo1[4], nome1[50];
    float area1, pib1, densidade1, pib_per_capita1;

    // Carta 2
    int populacao2, pontos_turisticos2;
    char estado2[3], codigo2[4], nome2[50];
    float area2, pib2, densidade2, pib_per_capita2;

    // Entrada carta 1
    printf("=== Cadastro da Carta 1 ===\n");
    printf("Estado: \n");
    scanf("%s", estado1);

    printf("Codigo da carta (ex: A01): \n");
    scanf("%s", codigo1);

    printf("Nome da cidade: \n");
    scanf(" %s", nome1);

    printf("Populacao: \n");
    scanf("%d", &populacao1);

    printf("Area em km2: \n");
    scanf("%f", &area1);

    printf("PIB: \n");
    scanf("%f", &pib1);

    printf("Numero de pontos turisticos: \n");
    scanf("%d", &pontos_turisticos1);

    // Entrada carta 2
    printf("\n=== Cadastro da Carta 2 ===\n");
    printf("Estado: \n");
    scanf("%s", estado2);

    printf("Codigo da carta (ex: B02): \n");
    scanf("%s", codigo2);

    printf("Nome da cidade: \n");
    scanf(" %s", nome2);

    printf("Populacao: \n");
    scanf("%d", &populacao2);

    printf("Area em km2: \n");
    scanf("%f", &area2);

    printf("PIB: \n");
    scanf("%f", &pib2);

    printf("Numero de pontos turisticos: \n");
    scanf("%d", &pontos_turisticos2);

    // Calculos
    densidade1 = populacao1 / area1;
    pib_per_capita1 = pib1 / populacao1;

    densidade2 = populacao2 / area2;
    pib_per_capita2 = pib2 / populacao2;

    // Saida carta 1
    printf("\n=== Carta 1 ===\n");
    printf("Estado: %s\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Cidade: %s\n", nome1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km2\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos turisticos: %d\n", pontos_turisticos1);
    printf("Densidade populacional: %.2f\n", densidade1);
    printf("PIB per capita: %.2f\n", pib_per_capita1);

    // Saida carta 2
    printf("\n=== Carta 2 ===\n");
    printf("Estado: %s\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Cidade: %s\n", nome2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km2\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos turisticos: %d\n", pontos_turisticos2);
    printf("Densidade populacional: %.2f\n", densidade2);
    printf("PIB per capita: %.2f\n", pib_per_capita2);

    return 0;
}
