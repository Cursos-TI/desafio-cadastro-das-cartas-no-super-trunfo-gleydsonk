#include <stdio.h>

// Programa para cadastro e exibição de duas cartas do Super Trunfo de Cidades

int main() {
    // Declaração das Variáveis para carta 1
    char estado1; 
    char codigo1[4]; 
    int populacao1;
    char nomeCidade1[50];
    float area1;
    float pib1;
    int pontosturisticos1;

    // Declaração das Variáveis para carta 2
    char estado2;
    char codigo2[4];
    char nomeCidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosturisticos2;

    printf("Desafio Super Trunfo - Cadastro de Cartas de Cidades\n");
    printf("---------------------------------------------------\n");
    printf("Bem-vindo ao sistema de cadastro de cartas!\n\n");

    // Entrada dos Dados da Carta 1:
    
    printf("\nCadastro da Carta 1\n");

    printf("Informe o Estado (A-H):");
    scanf("%s", &estado1);
    
    printf("Codigo da carta (ex: A01):");
    scanf("%s", &codigo1);
    
    printf("Nome da cidade:");
    scanf(" %s", &nomeCidade1);

    printf("População:");
    scanf("%s", &populacao1);

    printf("Área em km²:");
    scanf("%f", &area1);

    printf("PIB (em bilhões de reais):");
    scanf("%f", &pib1);

    printf("Informe o Número de Pontos Turísticos:");
    scanf("%d", &pontosturisticos1);

    // Entrada dos Dados da Carta 2:

    printf("\nCadastro da Carta 2\n");

    printf("Informe o Estado (A-H):");
    scanf("%s", &estado2);
    
    printf("Codigo da carta (ex: B02):");
    scanf("%s", &codigo2);
    
    printf("Nome da cidade:");
    scanf( "%s", nomeCidade2); 

    printf("População:");
    scanf("%s", &populacao2);

    printf("Área em km²:");
    scanf("%f", &area2);

    printf("PIB (em bilhões de reais):");
    scanf("%f", &pib2);

    printf("Informe o Número de Pontos Turísticos:");
    scanf("%d", &pontosturisticos2);

    // Exibição dos Dados das Cartas

    printf("\nDados da Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Pontos Turísticos: %d\n", pontosturisticos1);


    printf("\nDados da Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Pontos Turísticos: %d\n", pontosturisticos2);
    
    printf("===================================================\n");
    printf("Cadastro concluído com sucesso!\n");
    
    return 0;
}
