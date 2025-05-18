

#include <stdio.h>
#include <stdlib.h>

int main() {
    char estado1[50], cidade1[50], cod1[4];
    float pib1, area1;
    int pontos_turist1;
    unsigned long int populacao1;
    float pibpercap1, densidade1;
    float super_poder1;

    char estado2[50], cidade2[50], cod2[4];
    float pib2, area2;
    int pontos_turist2;
    unsigned long int populacao2;
    float pibpercap2, densidade2;
    float super_poder2;

    int atributo1 = 0, atributo2 = 0;
    float valor1_attr1, valor1_attr2, valor2_attr1, valor2_attr2;

    printf("Carta 1\n");
    printf("Nome do Estado [A-H]: \n"); scanf("%s", estado1);
    printf("Nome da Cidade: \n"); scanf("%s", cidade1);
    printf("Codigo do Estado: \n"); scanf("%s", cod1);
    printf("População: \n"); scanf("%lu", &populacao1);
    printf("Área [Em km²]: \n"); scanf("%f", &area1);
    printf("PIB [Em Bilhões]: \n"); scanf("%f", &pib1);
    printf("Quantos Pontos Turisticos:\n"); scanf("%d", &pontos_turist1);

    pibpercap1 = pib1 / populacao1;
    densidade1 = populacao1 / area1;
    super_poder1 = pib1 + populacao1 + area1 + pontos_turist1 + densidade1;

    printf("Carta 2\n");
    printf("Nome do Estado [A-H]: \n"); scanf("%s", estado2);
    printf("Nome da Cidade: \n"); scanf("%s", cidade2);
    printf("Codigo do Estado: \n"); scanf("%s", cod2);
    printf("População: \n"); scanf("%lu", &populacao2);
    printf("Área [Em km²]: \n"); scanf("%f", &area2);
    printf("PIB [Em Bilhões]: \n"); scanf("%f", &pib2);
    printf("Quantos Pontos Turisticos:\n"); scanf("%d", &pontos_turist2);

    pibpercap2 = pib2 / populacao2;
    densidade2 = populacao2 / area2;
    super_poder2 = pib2 + populacao2 + area2 + pontos_turist2 + densidade2;

    printf("Carta 1\n");
    printf("Nome do Estado: %s\n", estado1);
    printf("Nome da Cidade: %s \n", cidade1);
    printf("Codigo da Cidade: %s \n", cod1);
    printf("População: %lu \n", populacao1);
    printf("Área: %.1fKm²\n", area1);
    printf("Pib: %.2fB\n", pib1);
    printf("Pontos Turisticos: %d\n", pontos_turist1);
    printf("Pib Per Capita: %.2f\n", pibpercap1);
    printf("Densidade Populacional: %.2f\n", densidade1);

    printf("Carta 2\n");
    printf("Nome do Estado: %s\n", estado2);
    printf("Nome da Cidade: %s \n", cidade2);
    printf("Codigo da Cidade: %s \n", cod2);
    printf("População: %lu \n", populacao2);
    printf("Área: %.1fKm²\n", area2);
    printf("Pib: %.2fB\n", pib2);
    printf("Pontos Turisticos: %d\n", pontos_turist2);
    printf("Pib Per Capita: %.2f\n", pibpercap2);
    printf("Densidade Populacional: %.2f\n", densidade2);

    printf("Escolha o primeiro atributo:\n1- População\n2- Área\n3- Pib\n4- Pib per Capita\n5- Densidade Populacional\n");
    scanf("%d", &atributo1);

    do {
        printf("Escolha o segundo atributo (diferente do primeiro):\n1- População\n2- Área\n3- Pib\n4- Pib per Capita\n5- Densidade Populacional\n");
        scanf("%d", &atributo2);
    } while (atributo2 == atributo1);

    switch (atributo1) {
        case 1: valor1_attr1 = populacao1; valor2_attr1 = populacao2; break;
        case 2: valor1_attr1 = area1; valor2_attr1 = area2; break;
        case 3: valor1_attr1 = pib1; valor2_attr1 = pib2; break;
        case 4: valor1_attr1 = pibpercap1; valor2_attr1 = pibpercap2; break;
        case 5: valor1_attr1 = densidade1; valor2_attr1 = densidade2; break;
    }

    switch (atributo2) {
        case 1: valor1_attr2 = populacao1; valor2_attr2 = populacao2; break;
        case 2: valor1_attr2 = area1; valor2_attr2 = area2; break;
        case 3: valor1_attr2 = pib1; valor2_attr2 = pib2; break;
        case 4: valor1_attr2 = pibpercap1; valor2_attr2 = pibpercap2; break;
        case 5: valor1_attr2 = densidade1; valor2_attr2 = densidade2; break;
    }

    int ponto_carta1 = 0, ponto_carta2 = 0;

    ponto_carta1 += (atributo1 == 5) ? (valor1_attr1 < valor2_attr1) : (valor1_attr1 > valor2_attr1);
    ponto_carta2 += (atributo1 == 5) ? (valor2_attr1 < valor1_attr1) : (valor2_attr1 > valor1_attr1);

    ponto_carta1 += (atributo2 == 5) ? (valor1_attr2 < valor2_attr2) : (valor1_attr2 > valor2_attr2);
    ponto_carta2 += (atributo2 == 5) ? (valor2_attr2 < valor1_attr2) : (valor2_attr2 > valor1_attr2);

    float soma1 = valor1_attr1 + valor1_attr2;
    float soma2 = valor2_attr1 + valor2_attr2;

    printf("Resultado da Rodada\n");
    printf("Carta 1 - %s (%s):\n", estado1, cidade1);
    printf("Atributo %d: %.2f | Atributo %d: %.2f | Soma: %.2f\n", atributo1, valor1_attr1, atributo2, valor1_attr2, soma1);

    printf("Carta 2 - %s (%s):\n", estado2, cidade2);
    printf("Atributo %d: %.2f | Atributo %d: %.2f | Soma: %.2f\n", atributo1, valor2_attr1, atributo2, valor2_attr2, soma2);

    printf("Vencedor: ");
    if (soma1 > soma2)
        printf("Carta 1!\n");
    else if (soma2 > soma1)
        printf("Carta 2!\n");
    else
        printf("Empate!\n");

    return 0;
}


