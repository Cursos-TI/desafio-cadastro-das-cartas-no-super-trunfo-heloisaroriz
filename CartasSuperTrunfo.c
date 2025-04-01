#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
int main() {
    printf("Desafio Super Trunfo - Países\n");
    char estado;
    char codigo[4];
    char nomecidade[50];
    int populacao, pontosturisticos;
    float area, pib;

// Dados da primeira carta
    printf("Carta 1: \n");
    printf("Estado (A-H): ");
    scanf("%s", &estado);
    printf("Código (ex: A01): ");
    scanf("%s", &codigo);
    printf("Nome da Cidade: ");
    scanf("%s", &nomecidade);
    printf("População: ");
    scanf("%d", &populacao);
    printf("Área (em km²): ");
    scanf("%f", &area);
    printf("PIB: ");
    scanf("%f", &pib);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosturisticos);
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
