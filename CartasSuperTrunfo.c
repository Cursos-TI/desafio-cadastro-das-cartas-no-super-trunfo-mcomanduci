#include <stdio.h>

// Função para comparar dois valores
int comparar(float valor1, float valor2);

int main()
{
    char estado1, estado2;
    char codigo1[4], codigo2[4];
    char cidade1[50], cidade2[50];
    unsigned long int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontosTuristicos1, pontosTuristicos2;

    // Carta 1
    printf("Cadastro da carta 1:\n");
    printf("Digite o estado: (A a H): ");
    scanf(" %c", &estado1);

    printf("Digite o código da carta: ");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade: ");
    getchar();
    fgets(cidade1, 50, stdin);

    printf("Digite a população: ");
    scanf("%lu", &populacao1);

    printf("Digite a área (em km²): ");
    scanf("%f", &area1);

    printf("Digite o PIB: ");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos1);

    // Carta 2
    printf("\nCadastro da carta 2:\n");
    printf("Digite o estado: (A a H): ");
    scanf(" %c", &estado2);

    printf("Digite o código da carta: ");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade: ");
    getchar();
    fgets(cidade2, 50, stdin);

    printf("Digite a população: ");
    scanf("%lu", &populacao2);

    printf("Digite a área (em km²): ");
    scanf("%f", &area2);

    printf("Digite o PIB: ");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // Calculos carta 1
    float densidade1 = (float)populacao1 / area1;
    float pibPerCapita1 = pib1 * 1000000000 / populacao1;

    // Calcular o Super Poder da carta 1
    float superPoder1 = (float)populacao1 +
                        area1 +
                        pib1 +
                        (float)pontosTuristicos1 +
                        pibPerCapita1 +
                        (area1 / (float)populacao1); // inverso da densidade

    // Exibir carta 1
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s", cidade1);

    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);
    printf("Super Poder: %.2f\n", superPoder1);

    // Calculos carta 2
    float densidade2 = (float)populacao2 / area2;
    float pibPerCapita2 = pib2 * 1000000000 / populacao2;

    // Calcular o Super Poder da carta 2
    float superPoder2 = (float)populacao2 +
                        area2 +
                        pib2 +
                        (float)pontosTuristicos2 +
                        pibPerCapita2 +
                        (area2 / (float)populacao2); // inverso da densidade

    // Exibir carta 2
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s", cidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);
    printf("Super Poder: %.2f\n", superPoder2);
    printf("\n");

    // Resultado das comparações
    printf("Comparação de cartas:\n");
    printf("População: Carta %d venceu\n", comparar(populacao1, populacao2) ? 1 : 2);
    printf("Área: Carta %d venceu\n", comparar(area1, area2) ? 1 : 2);
    printf("PIB: Carta %d venceu\n", comparar(pib1, pib2) ? 1 : 2);
    printf("Número de Pontos Turísticos: Carta %d venceu\n", comparar(pontosTuristicos1, pontosTuristicos2) ? 1 : 2);
    printf("Densidade Populacional: Carta %d venceu\n", comparar(densidade1, densidade2) ? 1 : 2);
    printf("PIB per Capita: Carta %d venceu\n", comparar(pibPerCapita1, pibPerCapita2) ? 1 : 2);
    printf("Super Poder: Carta %d venceu\n", comparar(superPoder1, superPoder2) ? 1 : 2);
    printf("\n");

    return 0;
}

int comparar(float valor1, float valor2)
{
    if (valor1 > valor2)
        return 1;
    else
        return 0;
}
