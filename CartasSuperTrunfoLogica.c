#include <stdio.h>

int main() {
    // Definindo as variáveis para a primeira carta
    char estado1, estado2;
    char codigo1[5], codigo2[5];
    char cidade1[50], cidade2[50];
    int populacao1, populacao2;
    float area1, area2, pib1, pib2;
    int pontos_turisticos1, pontos_turisticos2;
    float densidade_populacional1, densidade_populacional2;
    float pib_per_capita1, pib_per_capita2;

    // Lendo as informações da primeira cidade
    printf("Digite as informações para a Carta 1:\n");
    printf("Estado: ");
    scanf(" %c", &estado1);  // A vírgula antes de %c serve para limpar o buffer de entrada
    printf("Código: ");
    scanf("%s", codigo1);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]s", cidade1);  // Leitura de uma string com espaços
    printf("População: ");
    scanf("%d", &populacao1);
    printf("Área (km²): ");
    scanf("%f", &area1);
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib1);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontos_turisticos1);

    // Calculando a densidade populacional e o PIB per capita para a primeira cidade
    densidade_populacional1 = populacao1 / area1;
    pib_per_capita1 = pib1 * 1000000000 / populacao1;  // PIB em reais, não em bilhões

    // Exibindo as informações da Carta 1
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional1);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita1);

    // Lendo as informações da segunda cidade
    printf("\nDigite as informações para a Carta 2:\n");
    printf("Estado: ");
    scanf(" %c", &estado2);  // A vírgula antes de %c serve para limpar o buffer de entrada
    printf("Código: ");
    scanf("%s", codigo2);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]s", cidade2);  // Leitura de uma string com espaços
    printf("População: ");
    scanf("%d", &populacao2);
    printf("Área (km²): ");
    scanf("%f", &area2);
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib2);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontos_turisticos2);

    // Calculando a densidade populacional e o PIB per capita para a segunda cidade
    densidade_populacional2 = populacao2 / area2;
    pib_per_capita2 = pib2 * 1000000000 / populacao2;  // PIB em reais, não em bilhões

    // Exibindo as informações da Carta 2
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional2);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita2);

    return 0;
}
