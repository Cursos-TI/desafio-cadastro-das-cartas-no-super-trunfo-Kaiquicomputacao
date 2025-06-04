#include <stdio.h>

int main(){

    char estado1[20], estado2[20];
    char codigodacarta1[20], codigodacarta2[20];
    char nomedacidade1[30], nomedacidade2[30];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontosturisticos1, pontosturisticos2;

printf("\nDesafio Cartas Super Trunfo\n");

    //carta1
    printf("Carta 1: \n");

    printf("Digite o Estado: \n");
    scanf("%s", estado1);

    printf("Digite o código da carta: \n");
    scanf("%s", codigodacarta1);

    printf("Digite o nome da cidade:\n");
    scanf("%s", nomedacidade1);

    printf("Digite a quantidade de habitantes da cidade: \n");
    scanf("%d", &populacao1);

    printf("Digite a área da cidade em quilomêtros quadrados: \n");
    scanf("%f", &area1);

    printf("Digite o produto interno bruto'pib' da cidade em reais: \n");
    scanf("%f", &pib1);

    printf("Digite a quantidade de pontos turísticos da cidade: \n");
    scanf(" %d", &pontosturisticos1);

    //carta2
    printf("\nCarta 2: \n");

    printf("Digite o Estado: \n");
    scanf("%s", estado2);

    printf("Digite o código da carta: \n");
    scanf("%s", codigodacarta2);

    printf("Digite o nome da cidade:\n");
    scanf("%s", nomedacidade2);

    printf("Digite a quantidade de habitantes da cidade: \n");
    scanf("%d", &populacao2);

    printf("Digite a área da cidade em quilomêtros quadrados: \n");
    scanf("%f", &area2);

    printf("Digite o produto interno bruto'pib' da cidade em reais: \n");
    scanf("%f", &pib2);

    printf("Digite a quantidade de pontos turísticos da cidade: \n");
    scanf(" %d", &pontosturisticos2);

//informações carta montada 1
printf("\nResultado das cartas:\n");
printf("Carta 1:\n");
printf("Estado: %s\n", estado1);
printf("Código: %s\n", codigodacarta1);
printf("Nome da Cidade: %s\n", nomedacidade1);
printf("População: %d\n", populacao1);
printf("Área em quilômetros quadrados: %.2f\n", area1);
printf("PIB em reais: %.2f\n", pib1);
printf("Número de pontos turísticos: %d\n", pontosturisticos1);

//informações carta montada 2
printf("\nCarta 2:\n");
printf("Estado: %s\n", estado2);
printf("Código: %s\n", codigodacarta2);
printf("Nome da Cidade: %s\n", nomedacidade2);
printf("População: %d\n", populacao2);
printf("Área em quilômetros quadrados: %.2f\n", area2);
printf("PIB em reais: %.2f\n", pib2);
printf("Número de pontos turísticos: %d\n", pontosturisticos2);




return 0;

}
