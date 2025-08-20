// Base do jogo Super Trunfo:
#include <stdio.h>

int main() {
    
    // Declaração de variáveis da carta 1:
    char estado;
    char codigo[5], nome_cidade[30];
    int pontos_turisticos;
    float area, PIB, densidade_populacional, PIB_capita, super_poder, densidade_inverso;
    unsigned long int populacao;

    //Cadastro das informações da 1ª carta:
    printf("Digite os dados da 1ª carta:\n");
    printf("Estado (Letra de A a H):");
    scanf(" %c", &estado);

    printf("Código da carta (Letra do estado seguido do de um número de 01 a 04):");
    scanf("%s", codigo);

    printf("Nome da cidade:");
    scanf("%s", nome_cidade);

    printf("População:");
    scanf("%lu", &populacao);

    printf("Área (Km²):");
    scanf("%f", &area);

    printf("PIB:");
    scanf("%f", &PIB);

    printf("Números de Pontos Turísticos:");
    scanf("%d", &pontos_turisticos);

    // Cálculo da densidade populacional da carta 1:

    densidade_populacional = (float) populacao / area;
    densidade_inverso = (float) 1.0 / densidade_populacional;

    //Cálculo do PIB per capita da carta 1:

    PIB_capita = (float) PIB / populacao;
    
    // Somatória do Super poder da carta 1:

    super_poder = (float) pontos_turisticos + area + PIB + densidade_inverso + PIB_capita + populacao;
    
    // Declaração de variáveis da carta 2:
    char estado2;
    char codigo2[5], nome_cidade2[30];
    int pontos_turisticos2;
    float area2, PIB2, densidade_populacional2, PIB_capita2, super_poder2, densidade_inverso2;
    unsigned long int populacao2;

    //Cadastro das informações da 2ª carta:
    printf("Digite os dados da 2ª carta:\n");
    printf("Estado (Letra de A a H):");
    scanf(" %c", &estado2);

    printf("Código da carta (Letra do estado seguido do de um número de 01 a 04):");
    scanf("%s", codigo2);

    printf("Nome da cidade:");
    scanf("%s", nome_cidade2);

    printf("População:");
    scanf("%lu", &populacao2);

    printf("Área (Km²):");
    scanf("%f", &area2);

    printf("PIB:");
    scanf("%f", &PIB2);

    printf("Números de Pontos Turísticos:");
    scanf("%d", &pontos_turisticos2);

    // Cálculo da densidade populacional da carta 2:

    densidade_populacional2 = (float) populacao2 / area2;
    densidade_inverso2 = (float) 1.0 / densidade_populacional2;


    //Cálculo do PIB per capita da carta 2:

    PIB_capita2 = (float) PIB2 / populacao2;

    // Somatória do Super poder da carta 2:

    super_poder2 = (float) pontos_turisticos2 + area2 + PIB2 + densidade_inverso2 + PIB_capita2 + populacao2;

   // Impressão da comparação das 2 cartas:

   printf("Comparação de cartas (A carta que estiver com o número 1 na frente, vence a rodada):\n");
   
   printf("População: Carta 1 (%d)\n", populacao > populacao2);
   printf("População: Carta 2 (%d)\n", populacao < populacao2);

   printf("Área: Carta 1 (%d)\n", area > area2);
   printf("Área: Carta 2 (%d)\n", area < area2);

   printf("PIB: Carta 1 (%d)\n", PIB > PIB2);
   printf("PIB: Carta 2 (%d)\n", PIB < PIB2);

   printf("Pontos Turísticos: Carta 1 (%d)\n", pontos_turisticos > pontos_turisticos2);
   printf("Pontos Turísticos: Carta 2 (%d)\n", pontos_turisticos < pontos_turisticos2);

   printf("Densidade Populacional: Carta 1 (%d)\n", densidade_inverso > densidade_inverso2);
   printf("Densidade Populacional: Carta 2 (%d)\n", densidade_inverso < densidade_inverso2);

   printf("PIB per capita: Carta 1 (%d)\n", PIB_capita > PIB_capita2);
   printf("PIB per capita: Carta 2 (%d)\n", PIB_capita < PIB_capita2);

   printf("Super Poder: Carta 1 (%d)\n", super_poder > super_poder2);
   printf("Super Poder: Carta 2 (%d)\n", super_poder < super_poder2);

   return 0;

}