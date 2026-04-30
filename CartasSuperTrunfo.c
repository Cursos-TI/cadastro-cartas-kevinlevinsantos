#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades

  // Carta 1:
  char estado1;
  char codigo1[10];
  char cidade1[50];
  int populaçao1;
  float area1;
  float pib1;
  int pontosTuristicos1;

  // Carta 2:
  char estado2;
  char codigo2[10];
  char cidade2[50];
  int populaçao2;
  float area2;
  float pib2;
  int pontosTuristicos2;

  printf ("Cadastro de Cartas: Super Trunfo Países\n");

  // Área para entrada de dados

  // Cadastro da Carta 1:
  printf ("Digite a letra do estado (A, B, C, D ou E): ");
  scanf (" %c", &estado1);
  printf ("Digite o código da carta: ");
  scanf (" %s", codigo1);
  printf ("Digite o nome da cidade: ");
  scanf (" %s", cidade1);
  printf ("Digite a população: ");
  scanf (" %d", &populaçao1);
  printf ("Digite a área: ");
  scanf (" %f", &area1);
  printf ("Digite o PIB: ");
  scanf (" %f", &pib1);
  printf ("Digite o número de pontos turísticos: ");
  scanf (" %d", &pontosTuristicos1);

  // Cadastro da Carta 2:
  printf ("Digite a letra do estado (A, B, C, D ou E): ");
  scanf (" %c", &estado2);
  printf ("Digite o código da carta: ");
  scanf (" %s", codigo2);
  printf ("Digite o nome da cidade: ");
  scanf (" %s", cidade2);
  printf ("Digite a população: ");
  scanf (" %d", &populaçao2);
  printf ("Digite a área: ");
  scanf (" %f", &area2);
  printf ("Digite o PIB: ");
  scanf (" %f", &pib2);
  printf ("Digite o número de pontos turísticos: ");
  scanf (" %d", &pontosTuristicos2);

  // Área para exibição dos dados da cidade
  
  printf ("\nDADOS DA CARTA 1:\n");
  printf ("Estado: %c\n", estado1);
  printf ("Código: %s\n", codigo1);
  printf ("Nome da Cidade: %s\n", cidade1);
  printf ("População: %d\n", populaçao1);
  printf ("Área: %.2f\n", area1);
  printf ("PIB: %.2f\n", pib1);
  printf ("Pontos Turísticos: %d\n", pontosTuristicos1);

  printf ("\nDADOS DA CARTA 2:\n");
  printf ("Estado: %c\n", estado2);
  printf ("Código: %s\n", codigo2);
  printf ("Nome da Cidade: %s\n", cidade2);
  printf ("População: %d\n", populaçao2);
  printf ("Área: %.2f\n", area2);
  printf ("PIB: %.2f\n", pib2);
  printf ("Pontos Turísticos: %d\n", pontosTuristicos2);

return 0;

} 
