#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
   
  char estado1, estado2;
  char codigo_carta1[10], codigo_carta2[10], nome1[50], nome2[50];
  int populacao1, populacao2, num_ponto_turistico1, num_ponto_turistico2;
  float area1, area2, pib1, pib2;
  
  // Área para entrada de dados
  
  //Informativo da carta cadastro 1
  printf("****** Vamos Preencher os dados da Carta 1 ******\n\n");

  //Inicio da Coleta dos dados da carta 1
  printf("Digite a Letra Inicial do Nome do Estado: ");
  scanf(" %c", &estado1);

  printf("Digite o Codigo da Carta (Ex.: A01, B02): ");
  scanf("%s", codigo_carta1);

  printf("Digite o Nome da Cidade: ");
  scanf("%s", nome1);

  printf("Digite o Numero Total da População: ");
  scanf("%d", &populacao1);

  printf("Digite o Numero da Área em Km²: ");
  scanf("%f", &area1);

  printf("Digita o PIB (Em Bilhoes): ");
  scanf("%f", &pib1);

  printf("Digite o Numero Total de Pontos Turisticos da Cidade: ");
  scanf("%d", &num_ponto_turistico1);


  //Informativo da carta cadastro 2
  printf("\n\n****** Vamos Preencher os dados da Carta 2 ******\n\n");

  //Inicio da Coleta dos dados da carta 2
  printf("Digite a Letra Inicial do Nome do Estado: ");
  scanf(" %c", &estado2);

  printf("Digite o Codigo da Carta (Ex.: A01, B02...):");
  scanf("%s", codigo_carta2);

  printf("Digite o Nome da Cidade: ");
  scanf("%s", nome2);

  printf("Digite o Numero Total da População: ");
  scanf("%d", &populacao2);

  printf("Digite o Numero da Área em Km²: ");
  scanf("%f", &area2);

  printf("Digita o PIB (Em Bilhoes): ");
  scanf("%f", &pib2);

  printf("Digite o Numero Total de Pontos Turisticos da Cidade: ");
  scanf("%d", &num_ponto_turistico2);
  
  // Área para exibição dos dados da cidade
  
  //Informativo para informar os dados cadastrados
  printf("\n\n****** A Seguir Descrição das Cartas Cadastradas ******\n\n");

  //inicio da saida dos dados cadastrados
  printf("****** CARTA 1 ******\n\n");

  printf("Estado: %c\n", estado1);
  printf("Codigo: %s\n", codigo_carta1);
  printf("Nome da Cidade: %s\n", nome1);
  printf("População: %d\n", populacao1);
  printf("Área: %.2f Km²\n", area1);
  printf("PIB: R$%.2f Bilhões de Reais\n", pib1);
  printf("Numero de Pontos Turisticos: %d\n\n", num_ponto_turistico1);

  printf("****** CARTA 2 ******\n\n");

   printf("Estado: %c\n", estado2);
  printf("Codigo: %s\n", codigo_carta2);
  printf("Nome da Cidade: %s\n", nome2);
  printf("População: %d\n", populacao2);
  printf("Área: %f Km²\n", area2);
  printf("PIB: R$%.2f Bilhões de Reais\n", pib2);
  printf("Numero de Pontos Turisticos: %d\n\n", num_ponto_turistico2);
  
return 0;
} 
