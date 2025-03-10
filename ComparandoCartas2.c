#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    char codigo1[4], codigo2[4]; 
    char estado1, estado2;   
    char cidade1[50], cidade2[50];
    int populacao1, turistico1, populacao2, turistico2;
    float pib1, area1, pib2, area2;

    printf("Para iniciar o jogo, preencha as informações das cartas 1 e 2.\n");
    printf("Lembre-se de que sua carta na hora da comparação será a carta 1.\n");

    printf("\nPRIMEIRA CARTA\n");
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

    int escolha,escolhacarta1, escolhacarta2;

    printf("\n|||Jogo das Cartas|||\n");
    printf("Escolha uma opção: \n");
    printf("1. Iniciar Jogo...\n");
    printf("2. Sair...\n");
    printf("Digite a opção desejada: \n");
    scanf("%d", &escolha);

    if (escolhacarta1 = 1)
    { printf("Iniciando o jogo...\n");
      printf("O jogador deve selecionar um dos atributos disponíveis para comparar com a outra carta.\n");
      printf("1. População\n");
      printf("2. Área\n");
      printf("3. PIB\n");
      printf("4. Número de Pontos Turísticos\n");
      printf("5. Densidade Populacional\n");
      scanf("%d", &escolha);
      switch (escolhacarta1)
      {
        case 1: 
        printf("Carta 1 - População: %d -- Carta 2 - População: %d\n", populacao1, populacao2);
        break;
      case 2:
        printf("Carta 1 - Área: %.2f km² -- Carta 2  Área: %.2f km²\n", area1, area2);
        break;
      case 3: 
        printf("Carta 1 - PIB: %.2f bilhões de reais -- Carta 2 - PIB: %.2f bilhões de reais\n", pib1, pib2);
        break;
      case 4: 
        printf("Carta 1 - Número de Pontos Turísticos: %d -- Carta 2 - Número de Pontos Turísticos: %d\n", turistico1, turistico2);   
        break;
      case 5: 
        printf("Carta 1 - Densidade Populacional: %.2f hab/km² -- Carta 2 - Densidade Populacional: %.2f hab/km²\n", densipopu1, densipopu2);
        break;
      default :
        printf("Opção Inválida!\n");
        break;   
      }
    } else if (escolha == 2)
    {
      printf("Saindo do Jogo...\n");
    } else {
      printf("Opção Inválida!\n");
    }

    if (populacao1 > populacao2 || area1 > area2 || pib1 > pib2 || turistico1 > turistico2 || densipopu1 < densipopu2)
    {
        printf("Carta 1 venceu\n");
    } else if (populacao1 == populacao2 || area1 == area2 || pib1 == pib2 || turistico1 == turistico2 || densipopu1 == densipopu2) {
        printf("Empate entre as cartas\n");
    } else {
        printf("Carta 2 venceu\n");
    }
    return 0;
}