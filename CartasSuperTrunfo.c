#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas

int main() {
    printf("Desafio Super Trunfo - Países\n");
    char estado1[50], estado2[50];
    char codigo1[50], codigo2[50];
    char nomecidade1[50], nomecidade2[50];
    int populacao1, populacao2, pontosturisticos1, pontosturisticos2;
    float area1, area2, pib1, pib2;

//Iniciciando o cadastro das cartas
    printf("Bem-vindo ao desafio de Cartas Super Trunfo - Países! Antes de começar o jogo você precisa cadastrar suas cartas. Vamos lá? \n");

// Dados da primeira carta
    printf("\n----------Carta 1----------\n\n");
    printf("Represente o nome do estado 1 com uma letra de A até H: \n");
    scanf("%s", estado1);

    printf("Digite o código da carta 1 (ex: A01): \n");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade 1: \n");
    scanf("%s", nomecidade1);

    printf("Digite a população da cidade 1: \n");
    scanf("%d", &populacao1);

    printf("Digite a área da cidade 1 (em km²): \n");
    scanf("%f", &area1);

    printf("Digite o PIB da cidade 1: \n");
    scanf("%f", &pib1);

    printf("Digite o número de Pontos Turísticos na cidade 1: \n");
    scanf("%d", &pontosturisticos1);

//Dados da segunda carta
    printf("\n----------Carta 2----------\n\n");
    printf("Represente o nome do estado 2 com uma letra de A até H: \n");
    scanf("%s", estado2);

    printf("Digite o código da carta 2 (ex: A02): \n");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade 2: \n");
    scanf("%s", nomecidade2);

    printf("Digite a população da cidade 2: \n");
    scanf("%d", &populacao2);

    printf("Digite a área da cidade 2 (em km²): \n");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade 2: \n");
    scanf("%f", &pib2);

    printf("Digite o número de Pontos Turísticos da cidade 2: \n");
    scanf("%d", &pontosturisticos2);

    printf("\n----------Exibindo os valores das cartas---------- \n\n"); 
    printf("Carta 1: \n");
    printf("Estado: %s \n", estado1);
    printf("Código: %s \n", codigo1);
    printf("Nome da Cidade: %s \n", nomecidade1);
    printf("População: %d \n", populacao1);
    printf("Área: %.2f km² \n", area1);
    printf("PIB: %.2f bilhões de reais \n", pib1);
    printf("Número de Pontos Turísticos: %d \n", pontosturisticos1);

    printf("\n Carta 2: \n\n");
    printf("Estado: %s \n", estado2);
    printf("Código: %s \n", codigo2);
    printf("Nome da Cidade: %s \n", nomecidade2);
    printf("População: %d \n", populacao2);
    printf("Área: %.2f km² \n", area2);
    printf("PIB: %.2f bilhões de reais \n", pib2);
    printf("Número de Pontos Turísticos: %d \n", pontosturisticos2);

    return 0;
}
