#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  //carta1
  char estado1;
  char codigo1[4];
  char cidade1[50];
  int populacao1;
  float area1;
  float pib1;
  int pontos1;

  //carta 2
  char estado2;
  char codigo2[4];
  char cidade2[50];
  int populacao2;
  float area2;
  float pib2;
  int pontos2;

  // Área para entrada de dados

  printf("CARTA1:\n");

  printf("Digite o Estado(A a H): ");
  scanf(" %c", &estado1);

  printf("Digite o código da carta (ex:A01,B02): ");
  scanf(" %s", codigo1);

  getchar();

  printf("Digite o nome da cidade: ");
  fgets(cidade1, 50, stdin);
  

  printf("Digite a população: ");
  scanf(" %d", &populacao1);

  printf("Digite a area(km²): ");
  scanf(" %f", area1);

  printf("Digite o PIB: ");
  scanf(" %f", &pib1);

  printf("Digite Nº de pontos turisticos: ");
  scanf(" %d", &pontos1);

   printf("CARTA2:\n");

  printf("Digite o Estado(A a H): ");
  scanf(" %c", &estado2);

  printf("Digite o código da carta (ex:A01,B02): ");
  scanf(" %s", codigo2);

  getchar();

  printf("Digite o nome da cidade: ");
  fgets(cidade2, 50, stdin);
  

  printf("Digite a população: ");
  scanf(" %d", &populacao2);

  printf("Digite a area(km²): ");
  scanf(" %f", &area2);

  printf("Digite o PIB: ");
  scanf(" %f", &pib2);

  printf("Digite Nº de pontos turisticos: ");
  scanf(" %d", &pontos2);

  printf("===================================\n");
  // Área para exibição dos dados da cidade

  printf("CARTA1:\n");
  printf("Estado: %c\n", estado1);
  printf("Código da Carta: %s\n", codigo1);
  printf("Nome da Cidade: %s", cidade1);
  printf("População: %d\n", populacao1);
  printf("Area(km²): %f\n", area1);
  printf("PIB: %f\n", pib1);
  printf("Numero de pontos turisticos: %d\n", pontos1);

  printf("==========================\n");



  printf("CARTA2:\n");
  printf("Estado: %c\n", estado2);
  printf("Código da Carta: %s\n", codigo2);
  printf("Nome da Cidade: %s", cidade2);
  printf("População: %d\n", populacao2);
  printf("Area(km²): %f\n", area2);
  printf("PIB: %f\n", pib2);
  printf("Numero de pontos turisticos: %d\n", pontos2);






return 0;
} 
