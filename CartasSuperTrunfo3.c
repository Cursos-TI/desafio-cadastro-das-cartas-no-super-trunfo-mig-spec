#include <stdio.h>

int main() {
    char codigo1[4]; 
    char estado1;   
    char cidade1[50];
    int populacao1, turistico1;
    float pib1, area1;

    char codigo2[4]; 
    char estado2;   
    char cidade2[50];
    int populacao2, turistico2;
    float pib2, area2;

    printf("PRIMEIRA CARTA\n");
    printf("Digite a letra estado da carta 1 (A-H): ");
    scanf(" %c", &estado1); 

    printf("Digite o código da carta 1 (Ex: A01, B02, C03, C04): ");
    scanf("%3s", codigo1); 

    printf("Digite o nome da cidade da carta 1: ");
    scanf("%50s", cidade1); 

    printf("Digite a população da carta 1: ");
    scanf("%d", &populacao1);

    printf("Digite a área da carta 1: ");
    scanf("%f", &area1);

    printf("Digite o PIB da carta 1: ");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &turistico1);

    printf("\n");

    printf("SEGUNDA CARTA\n");
    printf("Digite a letra do estado da carta 2 (A-H): ");
    scanf(" %c", &estado2); 

    printf("Digite o código da carta 2 (Ex: A01, B02, C03, C04): ");
    scanf("%3s", codigo2); 

    printf("Digite o nome da cidade da carta 2: ");
    scanf("%50s", cidade2); 

    printf("Digite a população da carta 2: ");
    scanf("%d", &populacao2);

    printf("Digite a área da carta 2: ");
    scanf("%f", &area2);

    printf("Digite o PIB da carta 2: ");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &turistico2);

    float densipopu1, PIBCap1, densipopu2, PIBCap2; 
    
    densipopu1 = populacao1 / area1;
    PIBCap1 = pib1 / populacao1;
    densipopu2 = populacao2 / area2;
    PIBCap2 = pib2 / populacao2;

    float superpoder1, superpoder2;

    superpoder1 = populacao1 + area1 + pib1 + turistico1 + PIBCap1 + (1 / densipopu1);
    superpoder2 = populacao2 + area2 + pib2 + turistico2 + PIBCap2 + (1 / densipopu2);

    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", turistico1);
    printf("Densidade Populacional: %.2f hab/km²\n", densipopu1);
    printf("PIB per Capita: %.2f reais\n", PIBCap1);
    printf("Super Poder: %.2f\n", superpoder1);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", turistico2);
    printf("Densidade Populacional: %.2f hab/km²\n", densipopu2);
    printf("PIB per Capita: %.2f reais\n", PIBCap2);
    printf("Super Poder: %.2f\n", superpoder2);

    printf("\nComparação das Cartas!\n");
    printf("População: %d vs %d -> %s\n", populacao1, populacao2, (populacao1 > populacao2) ? "Carta 1 venceu (1)" : "Carta 2 venceu (0)");
    printf("Área: %.2f vs %.2f -> %s\n", area1, area2, (area1 > area2) ? "Carta 1 venceu (1)" : "Carta 2 venceu (0)");
    printf("PIB: %.2f vs %.2f -> %s\n", pib1, pib2, (pib1 > pib2) ? "Carta 1 venceu (1)" : "Carta 2 venceu (0)");
    printf("Número de Pontos Turísticos: %d vs %d -> %s\n", turistico1, turistico2, (turistico1 > turistico2) ? "Carta 1 venceu (1)" : "Carta 2 venceu (0)");
    printf("Densidade Populacional: %.2f vs %.2f -> %s\n", densipopu1, densipopu2, (densipopu1 > densipopu2) ? "Carta 1 venceu (1)" : "Carta 2 venceu (0)");
    printf("PIB per Capita: %.2f vs %.2f -> %s\n", PIBCap1, PIBCap2, (PIBCap1 > PIBCap2) ? "Carta 1 venceu (1)" : "Carta 2 venceu (0)");
    printf("Super Poder: %.2f vs %.2f -> %s\n", superpoder1, superpoder2, (superpoder1 > superpoder2) ? "Carta 1 venceu (1)" : "Carta 2 venceu (0)");
    return 0;
}