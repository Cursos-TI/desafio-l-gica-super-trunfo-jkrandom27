#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    //Introdução do jogo
    
    printf("\n");
    printf("--------------------------------------\n");
    printf("Seja muito bem-vindo(a) ao Super Trunfo, Tema: Países\n");
    printf("--------------------------------------\n");
    printf("\n");

    //Cadastrar a primeira carta
    printf("--------------------------------------\n");
    printf("Vamos cadastrar a sua primeira carta\n");
    printf("--------------------------------------\n");
    printf("\n");

    //Código da carta
    char codigo[100];
    printf("Digite o código da sua carta: \n");
    fgets(codigo, sizeof(codigo), stdin);

    //Estado
    char estado[100];
    printf("Digite o estado da sua carta: \n");
    fgets(estado, sizeof(estado), stdin);

    //Nome da cidade
    char nome_cidade[100];
    printf("Digite o nome da cidade da sua carta: \n");
    fgets(nome_cidade, sizeof(nome_cidade), stdin);

    //População
    unsigned long int populacao;
    printf("Digite a população da sua cidade: \n");
    scanf("%lu", &populacao);

    //Área
    float area;
    printf("Digite a área da sua cidade: \n");
    scanf("%f", &area);

    //PIB
    float pib;
    printf("Digite o PIB da sua cidade: \n");
    scanf("%f", &pib);

    //Número de pontos turísticos
    int numero_t;
    printf("Digite o número de pontos turísticos da sua cidade: \n");
    scanf("%d", &numero_t);

    //Calcular a densidade populacional
    float densidade = (float) populacao / area;

    //Calcular o pib per capita
    float pib_capita = (pib * 1000000000) / (float) populacao;

    //Super Poder
    float superPoder = ((float) populacao + area + pib + (float) numero_t + pib_capita) - densidade;

    //Cadastrar a segunda carta
    printf("\n");
    printf("--------------------------------------\n");
    printf("Vamos cadastrar a sua segunda carta\n");
    printf("--------------------------------------\n");
    printf("\n");


    char codigo2[100];
    printf("Digite o código da sua carta: \n");
    fgets(codigo2, sizeof(codigo2), stdin);

    //Estado
    char estado2[100];
    printf("Digite o estado da sua carta: \n");
    fgets(estado2, sizeof(estado2), stdin);

    //Nome da cidade
    char nome_cidade2[100];
    printf("Digite o nome da cidade da sua carta: \n");
    fgets(nome_cidade2, sizeof(nome_cidade2), stdin);

    //População
    unsigned long int populacao2;
    printf("Digite a população da sua cidade: \n");
    scanf("%lu", &populacao2);

    //Área
    float area2;
    printf("Digite a área da sua cidade: \n");
    scanf("%f", &area2);

    //PIB
    float pib2;
    printf("Digite o PIB da sua cidade: \n");
    scanf("%f", &pib2);

    //Número de pontos turísticos
    int numero_t2;
    printf("Digite o número de pontos turísticos da sua cidade: \n");
    scanf("%d", &numero_t2);

    //Calcular a densidade populacional
    float densidade2 = (float) populacao2 / area2;

    //Calcular o pib per capita
    float pib_capita2 = (pib2 * 1000000000) / (float) populacao2;

    //Super Poder
    float superPoder2 = ((float) populacao2 + area2 + pib2 + (float) numero_t2 + pib_capita2) - densidade2;

    //Texto
    printf("\n");
    printf("--------------------------------------\n");
    printf("Comparando as duas cartas...\n");
    printf("--------------------------------------\n");
    printf("\n");

    //Exibir a primeira carta
    printf("\n");
    printf("--------------------------------------\n");
    printf("Primeira carta: %s\n", codigo);
    printf("--------------------------------------\n");
    printf("\n");

    printf("Carta 01\n");
    printf("_________________\n");
    printf("\n");
    printf("Estado: %s\n", estado);
    printf("Cidade: %s\n", nome_cidade);
    printf("População: %lu\n", populacao);
    printf("Área: %.2f\n", area);
    printf("PIB: %.2f\n", pib);
    printf("Número de pontos turísticos: %d\n", numero_t);
    printf("Densidade Populacional: %.2f\n", densidade);
    printf("PIB per Capita: %.2f\n", pib_capita);
    printf("Super poder: %.2f", superPoder);
    printf("\n");

    //Exibir a segunda carta
    printf("\n");
    printf("--------------------------------------\n");
    printf("Segunda carta: %s\n", codigo2);
    printf("--------------------------------------\n");
    printf("\n");

    printf("Carta 02\n");
    printf("_________________\n");
    printf("\n");
    printf("Estado: %s\n", estado2);
    printf("Cidade: %s\n", nome_cidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Número de pontos turísticos: %d\n", numero_t2);
    printf("Densidade Populacional: %.2f\n", densidade2);
    printf("PIB per Capita: %.2f\n", pib_capita2);
    printf("Super poder: %.2f\n", superPoder2);
    printf("\n");

    //Comparar as duas cartas

    printf("Comparando...\n");
    float compararPopulacao = populacao > populacao2;
    if (compararPopulacao == 1) printf("População: Carta 1 vence!\n");
    else printf("População: Carta 2 vence!\n");
    float compararArea = area > area2;
    if (compararArea == 1) printf("Área: Carta 1 vence!\n");
    else printf("Área: Carta 2 vence!\n");
    float compararPib = pib > pib2;
    if (compararPib == 1) printf("Pib: Carta 1 vence!\n");
    else printf("Pib: Carta 2 vence!\n");
    float compararNumero_t = numero_t > numero_t2;
    if (compararNumero_t == 1) printf("Pontos Turísticos: Carta 1 vence!\n");
    else printf("Pontos Turísticos: Carta 2 vence!\n");
    float compararDensidade = densidade < densidade2;
    if (compararDensidade == 1) printf("Densidade: Carta 1 vence!\n");
    else (printf("Densidade: A Carta 2 vence!\n"));
    float compararPibCapita = pib_capita > pib_capita2;
    if (compararPibCapita == 1) printf("Pib per Capita: Carta 1 vence!\n");
    else printf("Pib per Capita: Carta 2 vence!\n");
    float compararSuperPoder = superPoder > superPoder2;
    if (compararSuperPoder == 1) printf("Super Poder: Carta 1 vence!\n");
    else printf("Super Poder: Carta 2 vence!\n");
    printf("\n");
    
    
    float media = (compararPopulacao + compararArea + compararPib + compararNumero_t
    + compararDensidade + compararPibCapita + compararSuperPoder) / 7;
    printf("\n");

    //Teste
    /*
    printf("%.3f\n", media);
    printf("%.2f\n", compararPopulacao);
    printf("%.2f\n", compararArea);
    printf("%.2f\n", compararPib);
    printf("%.2f\n", compararNumero_t);
    printf("%.2f\n", compararDensidade);
    printf("%.2f\n", compararPibCapita);
    printf("%.2f\n", compararSuperPoder);
    printf("\n");
    */


    if (media > 0.571428571) printf("Carta 1 Ganhou!");
    else (printf("Carta 2 ganhou!"));
    printf("\n");
    
    
    
    return 0;
}
