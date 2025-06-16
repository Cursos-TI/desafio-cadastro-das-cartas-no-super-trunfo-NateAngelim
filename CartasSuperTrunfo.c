#include <stdio.h> 

int main() {
   
    char estado1;
    char codigo_carta1[10];
    char nome_cidade1[20];
    unsigned long int populacao1; 
    float area_km2_1;
    float pib1;
    int pontos_turisticos1;
    float densidade_populacional1;
    float pib_per_capita1;
    float super_poder1; 

    char estado2;
    char codigo_carta2[10];
    char nome_cidade2[20];
    unsigned long int populacao2; 
    float area_km2_2;
    float pib2;
    int pontos_turisticos2;
    float densidade_populacional2;
    float pib_per_capita2;
    float super_poder2; 

    printf(" Cadastro da Primeira Carta \n");

    printf("Estado (A a H): ");
    scanf(" %c", &estado1);

    printf("Codigo da Carta (Ex: A01): ");
    scanf("%s", codigo_carta1);

    printf("Nome da Cidade: ");
    scanf("%s", nome_cidade1);

    printf("Populacao (unsigned long int): "); 
    scanf("%lu", &populacao1); 

    printf("Area (em km2): ");
    scanf("%f", &area_km2_1);

    printf("PIB: ");
    scanf("%f", &pib1);

    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontos_turisticos1);
  
    densidade_populacional1 = (float)populacao1 / area_km2_1;
    pib_per_capita1 = pib1 / (float)populacao1;
    super_poder1 = (float)populacao1 + area_km2_1 + pib1 + (float)numero_pontos_turisticos1 + pib_per_capita1 + (1.0f / densidade_populacional1);


    printf("\n Cadastro da Segunda Carta \n");

    printf("Estado (A a H): ");
    scanf(" %c", &estado2);

    printf("Codigo da Carta (Ex: A01): ");
    scanf("%s", codigo_carta2);

    printf("Nome da Cidade : ");
    scanf("%s", nome_cidade2);

    printf("Populacao (unsigned long int): "); 
    scanf("%lu", &populacao2); 

    printf("Area (em km2): ");
    scanf("%f", &area_km2_2);

    printf("PIB: ");
    scanf("%f", &pib2);

    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontos_turisticos2);

   
    densidade_populacional2 = (float)populacao2 / area_km2_2;
    pib_per_capita2 = pib2 / (float)populacao2;
    super_poder2 = (float)populacao2 + area_km2_2 + pib2 + (float)numero_pontos_turisticos2 + pib_per_capita2 + (1.0f / densidade_populacional2);


    printf("\n Cartas Cadastradas \n");

    printf("\n Primeira Carta \n");
    printf("Estado: %c\n", estado1);
    printf("Codigo da Carta: %s\n", codigo_carta1);
    printf("Nome da Cidade: %s\n", nome_cidade1);
    printf("Populacao: %lu habitantes\n", populacao1); 
    printf("Area: %.2f km2\n", area_km2_1);
    printf("PIB: %.2f\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontos_turisticos1);
    printf("Densidade Populacional: %.2f hab/km^2\n", densidade_populacional1);
    printf("PIB per Capita: %.2f\n", pib_per_capita1);
    printf("Super Poder: %.2f\n", super_poder1); 

    printf("\n Segunda Carta \n");
    printf("Estado: %c\n", estado2);
    printf("Codigo da Carta: %s\n", codigo_carta2);
    printf("Nome da Cidade: %s\n", nome_cidade2);
    printf("Populacao: %lu habitantes\n", populacao2); 
    printf("Area: %.2f km^2\n", area_km2_2);
    printf("PIB: %.2f\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontos_turisticos2);
    printf("Densidade Populacional: %.2f hab/km^2\n", densidade_populacional2);
    printf("PIB per Capita: %.2f\n", pib_per_capita2);
    printf("Super Poder: %.2f\n", super_poder2); 


    printf("\n Resultados das Comparacoes (1 = Carta 1 vence, 0 = Carta 2 vence) \n");
    
    printf("Populacao: %d\n", (populacao1 > populacao2) ? 1 : 0);

    printf("Area: %d\n", (area_km2_1 > area_km2_2) ? 1 : 0);

    printf("PIB: %d\n", (pib1 > pib2) ? 1 : 0);

    printf("Numero de Pontos Turisticos: %d\n", (numero_pontos_turisticos1 > numero_pontos_turisticos2) ? 1 : 0);

    printf("PIB per Capita: %d\n", (pib_per_capita1 > pib_per_capita2) ? 1 : 0);

    printf("Densidade Populacional: %d\n", (densidade_populacional1 < densidade_populacional2) ? 1 : 0);

    printf("Super Poder: %d\n", (super_poder1 > super_poder2) ? 1 : 0);

    return 0;
}
    }

    return 0;
}
