#include <stdio.h>

int main() {
    //Variaveis das cartas.

    char estadoA[3], estadoB[3];
    char codigoA[5], codigoB[5];
    char nomedacidadeA[20], nomedacidadeB[20];
    float area1, area2;
    double pib1, pib2;
    unsigned long int populacao1, populacao2;
    int pontosturisticos1, pontosturisticos2;
    float densidadepopulacional1, densidadepopulacional2;
    float pibpercapita1, pibpercapita2;
    float SuperPoder1, SuperPoder2;


    //Cadastro da carta numero 1.
    printf("Insira o codigo da carta 1 (exemplo: C1)");
    scanf("%s", codigoA);
    getchar(); // limpeza de buffer.

    printf("Insira o nome da cidade:");
    scanf("%s", nomedacidadeA);
    getchar();

    printf("Insira a sigla do estado: (exemplo: SP):");
    scanf("%s", estadoA);
    getchar();

    printf("Insira a população: ");
    scanf("%lu", &populacao1);

    printf("Insira a área:");
    scanf("%f", &area1);

    printf("Insira o PIB:");
    scanf("%lf", &pib1);
    
    printf("Insira o número de pontos turisticos:");
    scanf("%d", &pontosturisticos1);

    
    // Cadastro da carta numero 2

    printf("Insira o codigo da carta 2:");
    scanf("%s", codigoB);

    printf("Insira o nome da cidade:");
    scanf("%s", nomedacidadeB);

    printf("Insira a sigla do estado:");
    scanf("%s", estadoB);

    printf("Insira o numero da população:");
    scanf("%lu", &populacao2);

    printf("Insira a área:");
    scanf("%f", &area2);

    printf("Insira o PIB:");
    scanf("%lf", &pib2);

    printf("Insira o número de pontos turisticos:");
    scanf("%d", &pontosturisticos2);

    //calculos

    densidadepopulacional1 = populacao1 / area1;
    densidadepopulacional2 = populacao2 / area2;

    pibpercapita1 = (pib1 * 1000000000.0) / populacao1;
    pibpercapita2 = (pib2 * 1000000000.0) / populacao2;

    SuperPoder1 = populacao1 + area1 + pib1 + pibpercapita1 + pontosturisticos1 + (1 / densidadepopulacional1);
    SuperPoder2 = populacao2 + area2 + pib2 + pibpercapita2 + pontosturisticos2 + (1 / densidadepopulacional2);

    //Exibição das informacoes das cartas.
    // carta 1.
    printf("\n carta1:\n");
    printf("Codigo da carta 1: %s \n", codigoA);
    printf("Nome da cidade: %s \n", nomedacidadeA);
    printf("Estado: %s \n", estadoA);
    printf("População: %lu \n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2lf bilhões de reais\n", pib1);
    printf("Pontos turisticos: %d \n", pontosturisticos1);
    printf("A Densidade populacional é: %.2f hab/km² \n", densidadepopulacional1);
    printf("O PIB per capita é: %.2f de reais \n", pibpercapita1);
    printf("O SuperPoder é: %.2f\n", SuperPoder1);

    printf("\n carta2:\n");

    //carta 2.
    printf("Codigo da carta 1: %s \n", codigoB);
    printf("Nome da cidade: %s \n", nomedacidadeB);
    printf("Estado: %s \n", estadoB);
    printf("População: %lu \n", populacao2);
    printf("Área: %.2f km² \n", area2);
    printf("PIB: %.2lf bilhões de reais \n", pib2);
    printf("Pontos turisticos: %d \n", pontosturisticos2);
    printf("A Densidade populacional é: %.2f hab/km² \n", densidadepopulacional2);
    printf("O PIB per capita é: %.2f de reais \n", pibpercapita2);
    printf("O super poder é: %.2f \n", SuperPoder2);

    //Comparações
    printf("\nComparações de cartas:\n");

    if ( populacao1 > populacao2){
        printf("População: Carta 1 venceu.\n");
    } else {
        printf("Populaçao: Carta 2 venceu.\n");
    }

    
    if (area1 > area2){
        printf("Área: Carta 1 venceu.\n");
    } else {
        printf("Área: Carta 2 venceu.\n");
    }

    if (pib1 > pib2){
        printf("PIB: Carta 1 venceu.\n");
    } else {
        printf("PIB Carta 2 venceu.\n");
    }


    if (pontosturisticos1 > pontosturisticos2){
        printf("Pontos turísticos: Carta 1 venceu.\n");
    } else {
        printf("Pontos turísticos: Carta 2 venceu.\n");
    }

    //Carta com menor densidade vence
    if (densidadepopulacional1 < densidadepopulacional2){
        printf("Densidade populacional: Carta 1 venceu.\n");
    } else {
        printf("Densidade populacional: Carta 2 venceu.\n");
    }
    

    if (pibpercapita1 > pibpercapita2){
        printf("PIB per capita: Carta 1 venceu.\n");
    } else {
        printf("PIB per capita: Carta 2 venceu.\n");
    }
    
    
    if (SuperPoder1 > SuperPoder2){
        printf("Área: Carta 1 venceu.\n");
    } else {
        printf("Área: Carta 2 venceu.\n");
    }
    


    return 0;
}
