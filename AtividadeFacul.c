#include <stdio.h>

int main() {
 char estado1[50], cidade1[50], cod1[4];
 float pib1,area1;
 int pontos_turist1;
 unsigned long int populacao1;
 float pibpercap1, densidade1;
 float super_poder1;
 
 char estado2[50], cidade2[50], cod2[4];
 float pib2,area2;
 int  pontos_turist2;
 unsigned long int populacao2;
 float pibpercap2, densidade2;
 float super_poder2;
 
 //Entrada da Carta 1 e 2
 printf("Carta 1\n");
 
 printf("Nome do Estado [A-H]: \n");
 scanf("%s", estado1);
 
 printf("Nome da Cidade: \n");
 scanf("%s", cidade1);
 
 printf("Codigo do Estado: \n");
 scanf("%s", cod1);
 
 printf("População: \n");
 scanf("%lu", &populacao1);
 
 printf("Área [Em km²]: \n");
 scanf("%f", &area1);
 
 printf("PIB [Em Bilhões]: \n");
 scanf("%f", &pib1);
 
 printf("Quantos Pontos Turiscos:\n");
 scanf("%d", &pontos_turist1);
 
 pibpercap1 = pib1 / populacao1;
 densidade1 = populacao1 / area1;
 super_poder1 = pib1 + populacao1 + area1 + pontos_turist1 + densidade1;
 
 printf("Carta 2\n");
 printf("Nome do Estado [A-H]: \n");
 scanf("%s", estado2);
 
 printf("Nome da Cidade: \n");
 scanf("%s", cidade2);
 
 printf("Codigo do Estado: \n");
 scanf("%s", cod2);
 
 printf("População: \n");
 scanf("%lu", &populacao2);
 
 printf("Área [Em km²]: \n");
 scanf("%f", &area2);
 
 printf("PIB [Em Bilhões]: \n");
 scanf("%f", &pib2);
 
 printf("Quantos Pontos Turisticos:\n");
 scanf("%d", &pontos_turist2);
 
 
 pibpercap2 = pib2 / populacao2;
 densidade2 = populacao2 / area2;
 super_poder2 = pib2 + populacao2 + area2 + pontos_turist2 + densidade2;
 
 //Saida Carta 1 e 2
 printf("Carta 1\n");
 printf("Nome do Estado: %s\n", estado1);
 printf("Nome da Cidade: %s \n", cidade1);
 printf("Codigo da Cidade: %s \n ", cod1);
 printf("População: %lu \n", populacao1);
 printf("Área: %.1fKm²: \n", area1);
 printf("Pib: %.2fB: \n", pib1);
 printf("Pontos Turisticos: %d \n",pontos_turist1);
 printf("Pib Per Capita: %.2f\n", pibpercap1);
 printf("Densidade Populacional: %.2f\n", densidade1);
 
  printf("Carta 2\n");
 printf("Nome do Estado: %s\n", estado2);
 printf("Nome da Cidade: %s \n", cidade2);
 printf("Codigo da Cidade: %s \n ", cod2);
 printf("População: %lu \n", populacao2);
 printf("Área: %.1fKm²: \n", area2);
 printf("Pib: %.2fBilhões: \n", pib2);
 printf("Pontos Turisticos: %d \n", pontos_turist2);
 printf("Pib Per Capita: %.2f\n", pibpercap2);
 printf("Densidade Populacional: %.2f\n", densidade2);
 
 printf("Comparação das Cartas:\n");
 printf("População: Carta 1 Vence (%d)\n ", populacao1 > populacao2);
 printf("Área: Carta 1 Vence (%d) \n", area1 > area2);
 printf("PIB: Carta 1 Vence (%d)\n", pib1 > pib2);
 printf("Densidade: Carta 1 Vence (%d)\n",densidade1 < densidade2);
printf("Super Poder: Carta 1 Vence (%d) \n", super_poder1 > super_poder2);
 
 
 
 
    return 0;
}