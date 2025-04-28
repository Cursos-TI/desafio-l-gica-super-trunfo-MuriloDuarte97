#include <stdio.h>
#include <string.h>

// Função para exibir os atributos disponíveis dinamicamente
void mostrarAtributos(int bloqueado) {
    printf("Escolha um atributo:\n");
    if (bloqueado != 1) printf("1. População\n");
    if (bloqueado != 2) printf("2. Área\n");
    if (bloqueado != 3) printf("3. PIB\n");
    if (bloqueado != 4) printf("4. Pontos Turísticos\n");
    if (bloqueado != 5) printf("5. Densidade Demográfica (menor vence)\n");
    if (bloqueado != 6) printf("6. PIB per Capita\n");
}

int main() {
    // ============================================================
    // Cadastro das Cidades (como no seu código original)
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
    // Exibição das Cartas
    // ============================================================

    printf("\n=== Dados das Cartas ===\n");

    printf("\nCarta 1 - %s (%c):\n", nomeCidade1, estado1);
    printf("Código: %s\n", codigo1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões\n", pib1);
    printf("Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);

    printf("\nCarta 2 - %s (%c):\n", nomeCidade2, estado2);
    printf("Código: %s\n", codigo2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões\n", pib2);
    printf("Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);

    // ============================================================
    // Menu Mestre - Escolha de dois atributos diferentes
    // ============================================================

    int atributo1 = 0, atributo2 = 0;
    float v1_attr1 = 0, v2_attr1 = 0;
    float v1_attr2 = 0, v2_attr2 = 0;
    float soma1 = 0, soma2 = 0;

    printf("\n==========================================\n");
    printf("     SUPER TRUNFO - COMPARAÇÃO AVANÇADA\n");
    printf("==========================================\n");

    // Escolher o primeiro atributo
    do {
        printf("\nEscolha o primeiro atributo:\n");
        mostrarAtributos(0);
        printf("Opção (1-6): ");
        scanf("%d", &atributo1);
        if (atributo1 < 1 || atributo1 > 6)
            printf("Opção inválida!\n");
    } while (atributo1 < 1 || atributo1 > 6);

    // Escolher o segundo atributo
    do {
        printf("\nEscolha o segundo atributo (diferente do primeiro):\n");
        mostrarAtributos(atributo1);
        printf("Opção (1-6): ");
        scanf("%d", &atributo2);
        if (atributo2 < 1 || atributo2 > 6 || atributo2 == atributo1)
            printf("Opção inválida ou repetida!\n");
    } while (atributo2 < 1 || atributo2 > 6 || atributo2 == atributo1);

    // ============================================================
    // Comparação de Atributos
    // ============================================================

    for (int i = 1; i <= 2; i++) {
        int escolha = (i == 1) ? atributo1 : atributo2;
        float val1 = 0, val2 = 0;
        char nomeAtributo[50];

        switch (escolha) {
            case 1:
                val1 = populacao1;
                val2 = populacao2;
                strcpy(nomeAtributo, "População");
                break;
            case 2:
                val1 = area1;
                val2 = area2;
                strcpy(nomeAtributo, "Área");
                break;
            case 3:
                val1 = pib1;
                val2 = pib2;
                strcpy(nomeAtributo, "PIB");
                break;
            case 4:
                val1 = pontosTuristicos1;
                val2 = pontosTuristicos2;
                strcpy(nomeAtributo, "Pontos Turísticos");
                break;
            case 5:
                val1 = densidade1;
                val2 = densidade2;
                strcpy(nomeAtributo, "Densidade Demográfica");
                break;
            case 6:
                val1 = pibPerCapita1;
                val2 = pibPerCapita2;
                strcpy(nomeAtributo, "PIB per Capita");
                break;
            default:
                printf("Erro de atributo.\n");
                return 1;
        }

        // Exibição dos valores
        printf("\nComparando atributo: %s\n", nomeAtributo);
        printf("%s: %.2f\n", nomeCidade1, val1);
        printf("%s: %.2f\n", nomeCidade2, val2);

        // Regra especial: densidade (menor vence)
        int vencedor = (escolha == 5)
                       ? ((val1 < val2) ? 1 : (val2 < val1) ? 2 : 0)
                       : ((val1 > val2) ? 1 : (val2 > val1) ? 2 : 0);

        (i == 1) ? (v1_attr1 = val1, v2_attr1 = val2)
                 : (v1_attr2 = val1, v2_attr2 = val2);

        vencedor == 1 ? printf("Vencedora: %s\n", nomeCidade1) :
        vencedor == 2 ? printf("Vencedora: %s\n", nomeCidade2) :
                        printf("Empate neste atributo.\n");
    }
}
    // ============================================================
    // Resultado Final: Soma dos Atributos
    // ============================================================

