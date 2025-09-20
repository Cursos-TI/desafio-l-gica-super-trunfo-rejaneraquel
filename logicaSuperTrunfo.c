#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    char estado1, estado2;
    char codigoCarta1[4], codigoCarta2[4];
    char nomeCidade1[20], nomeCidade2[20];
    int pontosTuristicos1, pontosTuristicos2;
    unsigned long int populacao1, populacao2;
    float pib1, area1, pib2, area2, densidade1, densidade2, pibPerCapita1, pibPerCapita2;

    // Dados Carta 01:
    // Estado
    printf("Inserindo dados da Carta 01 \nDigite o Estado: \n");
    scanf(" %c", &estado1);

    // Código Carta
    printf("Insira o código do estado: \n");
    scanf("%s", codigoCarta1);

    // Nome Cidade
    printf("Insira o nome da cidade: \n");
    scanf("%s", nomeCidade1);

    // População
    printf("Insira a população: \n");
    scanf("%lu", &populacao1);

    // Area em km²
    printf("Insira a area(km²): \n");
    scanf("%f", &area1);

    // PIB
    printf("Insira o PIB: \n");
    scanf("%f", &pib1);

    // Pontos Turísticos
    printf("Quantidade de Pontos Turísticos: \n");
    scanf("%d", &pontosTuristicos1);

    // Carta 02
    //  Estado
    printf("\nInserindo dados da Carta 02 \nDigite o Estado: \n");
    scanf(" %c", &estado2);

    // Código Carta
    printf("Insira o código do estado: \n");
    scanf("%s", codigoCarta2);

    // Nome Cidade
    printf("Insira o nome da cidade: \n");
    scanf("%s", nomeCidade2);

    // População
    printf("Insira a população: \n");
    scanf("%lu", &populacao2);

    // Area em km²
    printf("Insira a area(km²): \n");
    scanf("%f", &area2);

    // PIB
    printf("Insira o PIB: \n");
    scanf("%f", &pib2);

    // Pontos Turísticos
    printf("Quantidade de Pontos Turísticos: \n");
    scanf("%d", &pontosTuristicos2);

    // Calculando densidade populacional
    densidade1 = populacao1 / area1;
    densidade2 = populacao2 / area2;

    // Calculando PIB Per Capita
    //  Adicionando a multiplicação para tornar bilhões
    pibPerCapita1 = (pib1 * 1000000000) / populacao1;
    pibPerCapita2 = (pib2 * 1000000000) / populacao2;

    // Calculando super poder
    float superpoder1 = populacao1 + area1 + pib1 + pontosTuristicos1 + pibPerCapita1 + (1 / densidade1);
    float superpoder2 = populacao2 + area2 + pib2 + pontosTuristicos2 + pibPerCapita2 + (1 / densidade2);

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

    return 0;
}
