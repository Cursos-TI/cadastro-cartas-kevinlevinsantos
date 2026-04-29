#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  char estado;
  char codigo[3];
  char nomedacidade[50];
  int população;
  float area;
  float pib;
  int pontosTuristicos;

  printf ("Cadastro de Cartas: Super Trunfo Países\n");
  // Área para entrada de dados
  printf ("Digite a letra do estado (A, B, C, D ou E): ");
  scanf ("%c", &estado);
  printf ("Digite o código da carta: ");
  scanf ("%s", &codigo);
  printf ("Digite o nome da cidade: ");
  scanf ("%s", &nomedacidade);
  printf ("Digite a população: ");
  scanf ("%d", &população);
  printf ("Digite a área: ");
  scanf ("%f", &area);
  printf ("Digite o PIB: ");
  scanf ("%f", &pib);
  printf ("Digite o número de pontos turísticos: ");
  scanf ("%d", &pontosTuristicos);

  // Área para exibição dos dados da cidade
  printf ("\nDados da Carta:\n");
  printf ("Estado: %c\n", estado);
  printf ("Código: %s\n", codigo);
  printf ("Nome da Cidade: %s\n", nomedacidade);
  printf ("População: %d\n", população);
  printf ("Área: %.2f\n", area);
  printf ("PIB: %.2f\n", pib);
  printf ("Pontos Turísticos: %d\n", pontosTuristicos);

return 0;

} 
