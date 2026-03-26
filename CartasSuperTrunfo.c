#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
    int populacao, numeros_de_pontos_turisticos;
    char estado[50], codigo_da_carta[50], nome_da_cidade[50];
    float area_em_km2, pib;

  // Área para entrada de dados
    printf("Digite o estado: \n");
    scanf(" %s", estado);
    
    printf("Digite o código da carta: \n");
    scanf("%s", codigo_da_carta);

    printf("Digite o nome da cidade: \n");
    scanf("%s", nome_da_cidade);

    printf("Digite a população: \n");
    scanf("%d", &populacao);

    printf("Digite a área em km²: \n");
    scanf("%f", &area_em_km2);

    printf("Digite o PIB: \n");
    scanf("%f", &pib);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &numeros_de_pontos_turisticos);

  // Área para exibição dos dados da cidade
    printf("Estado: %s\n", estado);
    printf("Código da carta: %s\n", codigo_da_carta);
    printf("Nome da cidade: %s\n", nome_da_cidade);
    printf("População: %d\n", populacao);
    printf("Área em km²: %.f\n", area_em_km2);
    printf("PIB: %.f\n", pib);
    printf("Número de pontos turísticos: %d\n", numeros_de_pontos_turisticos);

return 0;
} 