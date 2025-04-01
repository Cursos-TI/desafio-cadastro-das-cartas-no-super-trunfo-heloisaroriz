#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
int main() {
    printf("Desafio Super Trunfo - Países\n");
    char estado1, estado2;
    char codigo1[50], codigo2[50];
    char nomecidade1[50], nomecidade2[50];
    int populacao1, populacao2, pontosturisticos1, pontosturisticos2;
    float area1, area2, pib1, pib2;

//Iniciciando o cadastro das cartas
    printf("Bem-vindo ao desafio de Cartas Super Trunfo - Países! Antes de começar o jogo você precisa cadastrar suas cartas. Vamos lá? \n");

// Dados da primeira carta
    printf("\n----------Carta 1----------\n\n");
    printf("Represente o nome do estado 1 com uma letra de A até H: \n");
    scanf("%s", &estado1);

    printf("Digite o código da carta 1 (ex: A01): \n");
    scanf("%s", &codigo1);

    printf("Digite o nome da cidade 1: \n");
    scanf("%s", &nomecidade1);

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
    scanf("%s", &estado2);

    printf("Digite o código da carta 2 (ex: A02): \n");
    scanf("%s", &codigo2);

    printf("Digite o nome da cidade 2: \n");
    scanf("%s", &nomecidade2);

    printf("Digite a população da cidade 2: \n");
    scanf("%d", &populacao2);

    printf("Digite a área da cidade 2 (em km²): \n");
    scanf("%f", &area2);

    printf("Digite o PIB da ciade 2: \n");
    scanf("%f", &pib2);

    printf("Digite o número de Pontos Turísticos da cidade 2: \n");
    scanf("%d", &pontosturisticos2);

    printf("\n----------Exibindo os valores das cartas \n\n"); 
    printf("Carta 1: \n");
    printf("Estado: %s, estado1 ");
    printf("Código: %s, codigo1 ");
    printf("Nome da Cidade: %s nomecidade1 ");
    printf("População: %d, populacao1 ");
    printf("Área: %f, area1 ");
    printf("PIB: %f, pib1 ");
    printf("Número de Pontos Turísticos: %d, pontosturisticos1 ");

    printf("Carta 2:");
    printf("Estado: %s, estado2 ");
    printf("Código: %s, codigo2 ");
    printf("Nome da Cidade: %s nomecidade2 ");
    printf("População: %d, populacao2 ");
    printf("Área: %f, area2 ");
    printf("PIB: %f, pib2 ");
    printf("Número de Pontos Turísticos: %d, pontosturisticos2 ");

    return 0 ;
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa


    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
