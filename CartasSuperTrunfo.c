// Base do jogo Super Trunfo:
#include <stdio.h>

int main() {
    
    // Declaração de variáveis da carta 1:
    char estado;
    char codigo[5], nome_cidade[30];
    int populacao, pontos_turisticos;
    float area, PIB;

    //Cadastro das informações da 1ª carta:
    printf("Digite os dados da 1ª carta:\n");
    printf("Estado (Letra de A a H):");
    scanf(" %c", &estado);

    printf("Código da carta (Letra do estado seguido do de um número de 01 a 04):");
    scanf("%s", codigo);

    printf("Nome da cidade:");
    scanf("%s", nome_cidade);

    printf("População:");
    scanf("%d", &populacao);

    printf("Área (Km²):");
    scanf("%f", &area);

    printf("PIB:");
    scanf("%f", &PIB);

    printf("Números de Pontos Turísticos:");
    scanf("%d", &pontos_turisticos);
    
    // Declaração de variáveis da carta 2:
    char estado2;
    char codigo2[5], nome_cidade2[30];
    int populacao2, pontos_turisticos2;
    float area2, PIB2;

    //Cadastro das informações da 2ª carta:
    printf("Digite os dados da 2ª carta:\n");
    printf("Estado (Letra de A a H):");
    scanf(" %c", &estado2);

    printf("Código da carta (Letra do estado seguido do de um número de 01 a 04):");
    scanf("%s", codigo2);

    printf("Nome da cidade:");
    scanf("%s", nome_cidade2);

    printf("População:");
    scanf("%d", &populacao2);

    printf("Área (Km²):");
    scanf("%f", &area2);

    printf("PIB:");
    scanf("%f", &PIB2);

    printf("Números de Pontos Turísticos:");
    scanf("%d", &pontos_turisticos2);

    // Impressão dos dados da 1ª carta no terminal:
    printf("Carta 1:\n");
    printf("Estado: %c\nCódigo da carta: %s\nNome da cidade: %s\nPopulação: %d\n", estado, codigo, nome_cidade, populacao);
    printf("Área (Km²): %.2f Km²\nPIB: %.2f bilhões de reais\nNúmeros de pontos turísticos: %d\n", area, PIB, pontos_turisticos);
    
    // Impressão dos dados da 2ª carta no terminal:
    printf("\nCarta 2:\n");
    printf("Estado: %c\nCódigo da carta: %s\nNome da cidade: %s\nPopulação: %d\n", estado2, codigo2, nome_cidade2, populacao2);
    printf("Área (Km²): %.2f Km²\nPIB: %.2f bilhões de reais\nNúmeros de pontos turísticos: %d\n", area2, PIB2, pontos_turisticos2);

    return 0;

}

