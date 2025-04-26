#include <stdio.h>

int main() {

    // ============================================================
    // Definição das variáveis para armazenar as propriedades das cidades
    // ============================================================

    char estado1, estado2;
    char codigo1[4], codigo2[4];
    char nomeCidade1[50], nomeCidade2[50];
    unsigned long int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontosTuristicos1, pontosTuristicos2;
    float densidade1, densidade2;
    float pibPerCapita1, pibPerCapita2;

    // ============================================================
    // Cadastro das Cartas
    // ============================================================

    printf("Cadastro da Carta 1:\n");
    printf("Digite o estado (A-H): ");
    scanf(" %c", &estado1);
    printf("Digite o código da cidade (EX: A01): ");
    scanf(" %s", codigo1);
    printf("Digite o nome da cidade: ");
    scanf(" %s", nomeCidade1);
    printf("Digite a população: ");
    scanf("%lu", &populacao1);
    printf("Digite a área (em KM²): ");
    scanf("%f", &area1);
    printf("Digite o PIB (em bilhões): ");
    scanf("%f", &pib1);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos1);

    densidade1 = populacao1 / area1;
    pibPerCapita1 = (pib1 * 1000000000) / populacao1;

    printf("\nCadastro da Carta 2:\n");
    printf("Digite o estado (A-H): ");
    scanf(" %c", &estado2);
    printf("Digite o código da cidade (EX: B01):");
    scanf(" %s", codigo2);
    printf("Digite o nome da cidade: ");
    scanf(" %s", nomeCidade2);
    printf("Digite a população: ");
    scanf("%lu", &populacao2);
    printf("Digite a área (em KM²): ");
    scanf("%f", &area2);
    printf("Digite o PIB (em bilhões): ");
    scanf("%f", &pib2);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos2);

    densidade2 = populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000) / populacao2;

    // ============================================================
    // Exibição dos Dados
    // ============================================================

    printf("\n=== Dados das Cartas ===\n");

    printf("\nCarta 1 - %s (%c):\n", nomeCidade1, estado1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões\n", pib1);
    printf("Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);

    printf("\nCarta 2 - %s (%c):\n", nomeCidade2, estado2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões\n", pib2);
    printf("Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);

    // ============================================================
    // Comparações - usando if e if-else
    // ============================================================

    int vitoriasCarta1 = 0;
    int vitoriasCarta2 = 0;

    printf("\n=== Comparação de Atributos ===\n");

    // População
    printf("\nPopulação:\n");
    if (populacao1 > populacao2) {
        printf("Carta 1 (%s) venceu!\n", nomeCidade1);
        vitoriasCarta1++;
    } else if (populacao2 > populacao1) {
        printf("Carta 2 (%s) venceu!\n", nomeCidade2);
        vitoriasCarta2++;
    } else {
        printf("Empate!\n");
    }

    // Área
    printf("\nÁrea:\n");
    if (area1 > area2) {
        printf("Carta 1 (%s) venceu!\n", nomeCidade1);
        vitoriasCarta1++;
    } else if (area2 > area1) {
        printf("Carta 2 (%s) venceu!\n", nomeCidade2);
        vitoriasCarta2++;
    } else {
        printf("Empate!\n");
    }

    // PIB
    printf("\nPIB:\n");
    if (pib1 > pib2) {
        printf("Carta 1 (%s) venceu!\n", nomeCidade1);
        vitoriasCarta1++;
    } else if (pib2 > pib1) {
        printf("Carta 2 (%s) venceu!\n", nomeCidade2);
        vitoriasCarta2++;
    } else {
        printf("Empate!\n");
    }

    // Pontos turísticos
    printf("\nPontos Turísticos:\n");
    if (pontosTuristicos1 > pontosTuristicos2) {
        printf("Carta 1 (%s) venceu!\n", nomeCidade1);
        vitoriasCarta1++;
    } else if (pontosTuristicos2 > pontosTuristicos1) {
        printf("Carta 2 (%s) venceu!\n", nomeCidade2);
        vitoriasCarta2++;
    } else {
        printf("Empate!\n");
    }

    // Densidade (menor vence)
    printf("\nDensidade Populacional (menor vence):\n");
    if (densidade1 < densidade2) {
        printf("Carta 1 (%s) venceu!\n", nomeCidade1);
        vitoriasCarta1++;
    } else if (densidade2 < densidade1) {
        printf("Carta 2 (%s) venceu!\n", nomeCidade2);
        vitoriasCarta2++;
    } else {
        printf("Empate!\n");
    }

    // PIB per Capita
    printf("\nPIB per Capita:\n");
    if (pibPerCapita1 > pibPerCapita2) {
        printf("Carta 1 (%s) venceu!\n", nomeCidade1);
        vitoriasCarta1++;
    } else if (pibPerCapita2 > pibPerCapita1) {
        printf("Carta 2 (%s) venceu!\n", nomeCidade2);
        vitoriasCarta2++;
    } else {
        printf("Empate!\n");
    }

    // ============================================================
    // Resultado Final
    // ============================================================

    printf("\n=== Resultado Final ===\n");
    printf("Vitórias da Carta 1 (%s): %d\n", nomeCidade1, vitoriasCarta1);
    printf("Vitórias da Carta 2 (%s): %d\n", nomeCidade2, vitoriasCarta2);

    if (vitoriasCarta1 > vitoriasCarta2) {
        printf("A grande vencedora é: Carta 1 - %s!\n", nomeCidade1);
    } else if (vitoriasCarta2 > vitoriasCarta1) {
        printf("A grande vencedora é: Carta 2 - %s!\n", nomeCidade2);
    } else {
        printf("Resultado final: Empate entre as cartas!\n");
    }

    return 0;
}