#include <stdio.h>

int main() 
{
    char estado1;
    char codigo_carta1[10];
    char nome_cidade1[20];
    int populacao1;
    float area_km2_1;
    float pib1;
    int pontos_turisticos1;

    char estado2;
    char codigo_carta2[5];
    char nome_cidade2[50];
    int populacao2;
    float area_km2_2;
    float pib2;
    int pontos_turisticos2;

    printf("Primeira Carta \n");

    printf("Estado (A a H): ");
    scanf(" %c", &estado1);

    printf("Codigo da Carta (Ex: A01): ");
    scanf("%s", codigo_carta1);

    printf("Nome da Cidade: ");
    scanf("%s", nome_cidade1);

    printf("Populacao: ");
    scanf("%d", &populacao1);

    printf("Area (em km2): ");
    scanf("%f", &area_km2_1);

    printf("PIB: ");
    scanf("%f", &pib1);

    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontos_turisticos1);


    printf("\n Cadastro da Segunda Carta \n");

    printf("Estado (A a H): ");
    scanf(" %c", &estado2);

    printf("Codigo da Carta (Ex: A01): ");
    scanf("%s", codigo_carta2);

    printf("Nome da Cidade : ");
    scanf("%s", nome_cidade2);

    printf("Populacao: ");
    scanf("%d", &populacao2);

    printf("Area (em km2): ");
    scanf("%f", &area_km2_2);

    printf("PIB: ");
    scanf("%f", &pib2);

    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontos_turisticos2);


    printf("\n Informacoes das Cartas Cadastradas \n");

    printf("\n Primeira Carta \n");
    printf("Estado: %c\n", estado1);
    printf("Codigo da Carta: %s\n", codigo_carta1);
    printf("Nome da Cidade: %s\n", nome_cidade1);
    printf("Populacao: %d habitantes\n", populacao1);
    printf("Area: %.2f km2\n", area_km2_1);
    printf("PIB: %.2f\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontos_turisticos1);

    printf("\n--- Segunda Carta ---\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo da Carta: %s\n", codigo_carta2);
    printf("Nome da Cidade: %s\n", nome_cidade2);
    printf("Populacao: %d habitantes\n", populacao2);
    printf("Area: %.2f km2\n", area_km2_2);
    printf("PIB: %.2f\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontos_turisticos2);

    return 0;
}
