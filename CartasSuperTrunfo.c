#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Feito por: Welbert Otávio da Silva

int main() {
    // Defina variáveis separadas para cada atributo da cidade.
    int populacao, pontos_turisticos;
    float area, PIB;
    
    // Cadastro das Cartas:
    printf("\nCadastre sua carta\n\n");
    printf("Digite o numero de habitantes da cidade: ");
    scanf("%d", &populacao);
    printf("Digite a area da cidade: ");
    scanf("%f", &area);
    printf("Digite o PIB da cidade: ");
    scanf("%f", &PIB);
    printf("Digite o numero de pontos turisticos da cidade: ");
    scanf("%d", &pontos_turisticos);

    // Exibição dos Dados das Cartas:
    printf("\n\nNumero de habitantes: %d", populacao);
    printf("\nArea da cidade: %f", area);
    printf("\nPIB da cidade: %f", PIB);
    printf("\nPontos turisticos: %d\n\n", pontos_turisticos);

    return 0;
}
