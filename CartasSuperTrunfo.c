#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // ======= Variáveis para as Carta =======

  char estado1, estado2;
  char codigocarta1[5], codigocarta2[5];
  char cidade1[30], cidade2[30];
  int populacao1, populacao2;
  float areacidade1, areacidade2;
  float pib1, pib2;
  int pontosturisticos1, pontosturisticos2;
 
  // Área para entrada de dado

  // Carta 01

  printf("Dados da Carta 01 \n");

  printf("\n");

  printf("Digite o Estado: \n");
  scanf(" %c", &estado1);

  printf("Digite o Codigo da Carta: \n");
  scanf("%s", codigocarta1);

  printf("Digite o Nome da Cidade: \n");
  scanf("%s", cidade1);

  printf("Digite a População: \n");
  scanf("%d", &populacao1);

  printf("Digite a Área da Cidade: \n");
  scanf("%f", &areacidade1);

  printf("Digite o PIB: \n");
  scanf("%f", &pib1);

  printf("Quantos pontos Turísticos: \n");
  scanf("%d", &pontosturisticos1);


  printf("\n");

 
  // Carta 02

  printf("Dados da Carta 02 \n");

  printf("\n");

  printf("Digite o Estado: \n");
  scanf(" %c", &estado2);

  printf("Digite o Codigo da Carta: \n");
  scanf("%s", codigocarta2);

  printf("Digite o Nome da Cidade: \n");
  scanf("%s", cidade2);

  printf("Digite a População: \n");
  scanf("%d", &populacao2);

  printf("Digite a Área da Cidade: \n");
  scanf("%f", &areacidade2);

  printf("Digite o PIB: \n");
  scanf("%f", &pib2);

  printf("Quantos pontos Turísticos: \n");
  scanf("%d", &pontosturisticos2);

  printf("\n");

  // Área para exibição dos dados da cidade

  //Carta 01

  printf("Carta 01");

  printf("\n");

  printf("Estado: %c\n", estado1);
  printf("Código: %s\n", codigocarta1);
  printf("Nome da Cidade: %s\n", cidade1);
  printf("População: %d\n", populacao1);
  printf("Área da Cidade: %.2f\n", areacidade1);
  printf("PIB: %.2f\n", pib1);
  printf("Número de Pontos Turísticos: %d\n", pontosturisticos1);

  printf("\n");

  //Carta 02

  printf("\n");

  printf("Carta 02");

  printf("\n");

  printf("Estado: %c\n", estado2);
  printf("Código: %s\n", codigocarta2);
  printf("Nome da Cidade: %s\n", cidade2);
  printf("População: %d\n", populacao2);
  printf("Área da Cidade: %.2f\n", areacidade2);
  printf("PIB: %.2f\n", pib2);
  printf("Número de Pontos Turísticos: %d\n", pontosturisticos2);








return 0;
} 

