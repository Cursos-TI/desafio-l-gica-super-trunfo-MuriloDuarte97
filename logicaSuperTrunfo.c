#include <stdio.h>

int main() {
    // ============================================================
    // Cadastro das Cidades
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

    printf("Cadastro da Carta 1:\n");
    printf("Digite o estado (A-H): ");
    scanf(" %c", &estado1);
    printf("Digite o código da cidade: ");
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
    printf("Digite o código da cidade: ");
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
    // Menu de Comparação Interativa
    // ============================================================

    int opcao;

    printf("\n=========================================\n");
    printf("       SUPER TRUNFO - CIDADES\n");
    printf("=========================================\n");
    printf("Escolha o atributo para comparar:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos Turísticos\n");
    printf("5. Densidade Demográfica (menor vence)\n");
    printf("6. PIB per Capita\n");
    printf("=========================================\n");
    printf("Digite sua opção (1-6): ");
    scanf("%d", &opcao);

    printf("\nComparando: %s (%c) vs %s (%c)\n", nomeCidade1, estado1, nomeCidade2, estado2);

    switch(opcao) {
        case 1:
            printf("\nAtributo: População\n");
            printf("%s: %lu hab\n", nomeCidade1, populacao1);
            printf("%s: %lu hab\n", nomeCidade2, populacao2);
            if (populacao1 > populacao2) {
                printf("Vencedora: %s\n", nomeCidade1);
            } else if (populacao2 > populacao1) {
                printf("Vencedora: %s\n", nomeCidade2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 2:
            printf("\nAtributo: Área\n");
            printf("%s: %.2f km²\n", nomeCidade1, area1);
            printf("%s: %.2f km²\n", nomeCidade2, area2);
            if (area1 > area2) {
                printf("Vencedora: %s\n", nomeCidade1);
            } else if (area2 > area1) {
                printf("Vencedora: %s\n", nomeCidade2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 3:
            printf("\nAtributo: PIB (em bilhões)\n");
            printf("%s: R$ %.2f bilhões\n", nomeCidade1, pib1);
            printf("%s: R$ %.2f bilhões\n", nomeCidade2, pib2);
            if (pib1 > pib2) {
                printf("Vencedora: %s\n", nomeCidade1);
            } else if (pib2 > pib1) {
                printf("Vencedora: %s\n", nomeCidade2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 4:
            printf("\nAtributo: Pontos Turísticos\n");
            printf("%s: %d pontos\n", nomeCidade1, pontosTuristicos1);
            printf("%s: %d pontos\n", nomeCidade2, pontosTuristicos2);
            if (pontosTuristicos1 > pontosTuristicos2) {
                printf("Vencedora: %s\n", nomeCidade1);
            } else if (pontosTuristicos2 > pontosTuristicos1) {
                printf("Vencedora: %s\n", nomeCidade2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 5:
            printf("\nAtributo: Densidade Demográfica (menor vence)\n");
            printf("%s: %.2f hab/km²\n", nomeCidade1, densidade1);
            printf("%s: %.2f hab/km²\n", nomeCidade2, densidade2);
            if (densidade1 < densidade2) {
                printf("Vencedora: %s\n", nomeCidade1);
            } else if (densidade2 < densidade1) {
                printf("Vencedora: %s\n", nomeCidade2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 6:
            printf("\nAtributo: PIB per Capita\n");
            printf("%s: R$ %.2f\n", nomeCidade1, pibPerCapita1);
            printf("%s: R$ %.2f\n", nomeCidade2, pibPerCapita2);
            if (pibPerCapita1 > pibPerCapita2) {
                printf("Vencedora: %s\n", nomeCidade1);
            } else if (pibPerCapita2 > pibPerCapita1) {
                printf("Vencedora: %s\n", nomeCidade2);
            } else {
                printf("Empate!\n");
            }
            break;

        default:
            printf("\nOpção inválida. Por favor, escolha de 1 a 6.\n");
    }

    return 0;
}
