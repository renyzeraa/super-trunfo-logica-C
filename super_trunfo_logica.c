#include <stdio.h>
#include <string.h>

int main()
{
  char estado1[50], estado2[50], nomeCidade1[50], nomeCidade2[50], codigo1[20], codigo2[20];
  int populacao1, populacao2, pontosTuristicos1, pontosTuristicos2;
  float area1, area2, pib1, pib2, densidadePopulacional1, densidadePopulacional2, pibPerCapita1, pibPerCapita2;
  int opcao1, opcao2;

  // Entrada de dados para a primeira carta
  printf("Digite os dados da primeira carta (Cidade 1):\n");
  printf("Estado: ");
  scanf(" %49[^\n]", estado1);
  printf("Nome da cidade: ");
  scanf(" %49[^\n]", nomeCidade1);
  printf("Código da carta: ");
  scanf("%s", codigo1);
  printf("População: ");
  scanf("%d", &populacao1);
  printf("Área (em km²): ");
  scanf("%f", &area1);
  printf("PIB: ");
  scanf("%f", &pib1);
  printf("Pontos turísticos: ");
  scanf("%d", &pontosTuristicos1);

  densidadePopulacional1 = populacao1 / area1;
  pibPerCapita1 = pib1 / populacao1;

  // Entrada de dados para a segunda carta
  printf("\nDigite os dados da segunda carta (Cidade 2):\n");
  printf("Estado: ");
  scanf(" %49[^\n]", estado2);
  printf("Nome da cidade: ");
  scanf(" %49[^\n]", nomeCidade2);
  printf("Código da carta: ");
  scanf("%s", codigo2);
  printf("População: ");
  scanf("%d", &populacao2);
  printf("Área (em km²): ");
  scanf("%f", &area2);
  printf("PIB: ");
  scanf("%f", &pib2);
  printf("Pontos turísticos: ");
  scanf("%d", &pontosTuristicos2);

  densidadePopulacional2 = populacao2 / area2;
  pibPerCapita2 = pib2 / populacao2;

  // Escolha de dois atributos para comparação
  printf("\nEscolha o primeiro atributo para comparação:\n");
  printf("1 - População\n");
  printf("2 - Área\n");
  printf("3 - PIB\n");
  printf("4 - Pontos turísticos\n");
  printf("5 - Densidade populacional\n");
  printf("6 - PIB per capita\n");
  printf("Escolha a primeira opção: ");
  scanf("%d", &opcao1);

  // Garantir que o usuário não escolha o mesmo atributo novamente
  printf("\nEscolha o segundo atributo para comparação:\n");
  printf("1 - População\n");
  printf("2 - Área\n");
  printf("3 - PIB\n");
  printf("4 - Pontos turísticos\n");
  printf("5 - Densidade populacional\n");
  printf("6 - PIB per capita\n");
  printf("Escolha a segunda opção: ");
  scanf("%d", &opcao2);

  while (opcao2 == opcao1)
  {
    printf("\nVocê não pode escolher o mesmo atributo! Escolha novamente para o segundo atributo:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos turísticos\n");
    printf("5 - Densidade populacional\n");
    printf("6 - PIB per capita\n");
    printf("Escolha a segunda opção: ");
    scanf("%d", &opcao2);
  }

  printf("\nComparação entre %s e %s:\n", nomeCidade1, nomeCidade2);

  // Comparação do primeiro atributo
  float valor1 = 0, valor2 = 0;
  if (opcao1 == 1)
  {
    valor1 = populacao1;
    valor2 = populacao2;
  }
  else if (opcao1 == 2)
  {
    valor1 = area1;
    valor2 = area2;
  }
  else if (opcao1 == 3)
  {
    valor1 = pib1;
    valor2 = pib2;
  }
  else if (opcao1 == 4)
  {
    valor1 = pontosTuristicos1;
    valor2 = pontosTuristicos2;
  }
  else if (opcao1 == 5)
  {
    valor1 = densidadePopulacional1;
    valor2 = densidadePopulacional2;
  }
  else if (opcao1 == 6)
  {
    valor1 = pibPerCapita1;
    valor2 = pibPerCapita2;
  }

  // Exibição do primeiro atributo
  printf("Atributo 1: ");
  switch (opcao1)
  {
  case 1:
    printf("População\n");
    break;
  case 2:
    printf("Área\n");
    break;
  case 3:
    printf("PIB\n");
    break;
  case 4:
    printf("Pontos turísticos\n");
    break;
  case 5:
    printf("Densidade populacional\n");
    break;
  case 6:
    printf("PIB per capita\n");
    break;
  }
  printf("%s: %.2f\n%s: %.2f\n", nomeCidade1, valor1, nomeCidade2, valor2);
  if ((opcao1 == 5 && valor1 < valor2) || (opcao1 != 5 && valor1 > valor2))
  {
    printf("Vencedor no primeiro atributo: %s\n", nomeCidade1);
  }
  else if ((opcao1 == 5 && valor1 > valor2) || (opcao1 != 5 && valor1 < valor2))
  {
    printf("Vencedor no primeiro atributo: %s\n", nomeCidade2);
  }
  else
  {
    printf("Empate no primeiro atributo!\n");
  }

  // Comparação do segundo atributo
  if (opcao2 == 1)
  {
    valor1 = populacao1;
    valor2 = populacao2;
  }
  else if (opcao2 == 2)
  {
    valor1 = area1;
    valor2 = area2;
  }
  else if (opcao2 == 3)
  {
    valor1 = pib1;
    valor2 = pib2;
  }
  else if (opcao2 == 4)
  {
    valor1 = pontosTuristicos1;
    valor2 = pontosTuristicos2;
  }
  else if (opcao2 == 5)
  {
    valor1 = densidadePopulacional1;
    valor2 = densidadePopulacional2;
  }
  else if (opcao2 == 6)
  {
    valor1 = pibPerCapita1;
    valor2 = pibPerCapita2;
  }

  // Exibição do segundo atributo
  printf("Atributo 2: ");
  switch (opcao2)
  {
  case 1:
    printf("População\n");
    break;
  case 2:
    printf("Área\n");
    break;
  case 3:
    printf("PIB\n");
    break;
  case 4:
    printf("Pontos turísticos\n");
    break;
  case 5:
    printf("Densidade populacional\n");
    break;
  case 6:
    printf("PIB per capita\n");
    break;
  }
  printf("%s: %.2f\n%s: %.2f\n", nomeCidade1, valor1, nomeCidade2, valor2);
  if ((opcao2 == 5 && valor1 < valor2) || (opcao2 != 5 && valor1 > valor2))
  {
    printf("Vencedor no segundo atributo: %s\n", nomeCidade1);
  }
  else if ((opcao2 == 5 && valor1 > valor2) || (opcao2 != 5 && valor1 < valor2))
  {
    printf("Vencedor no segundo atributo: %s\n", nomeCidade2);
  }
  else
  {
    printf("Empate no segundo atributo!\n");
  }

  // Soma dos atributos
  float soma1 = 0, soma2 = 0;

  // Soma dos atributos para a cidade 1
  soma1 = (opcao1 == 1 ? valor1 : 0) + (opcao2 == 1 ? valor1 : 0);
  soma1 += (opcao1 == 2 ? valor1 : 0) + (opcao2 == 2 ? valor1 : 0);
  soma1 += (opcao1 == 3 ? valor1 : 0) + (opcao2 == 3 ? valor1 : 0);
  soma1 += (opcao1 == 4 ? valor1 : 0) + (opcao2 == 4 ? valor1 : 0);
  soma1 += (opcao1 == 5 ? valor1 : 0) + (opcao2 == 5 ? valor1 : 0);
  soma1 += (opcao1 == 6 ? valor1 : 0) + (opcao2 == 6 ? valor1 : 0);

  // Soma dos atributos para a cidade 2
  soma2 = (opcao1 == 1 ? valor2 : 0) + (opcao2 == 1 ? valor2 : 0);
  soma2 += (opcao1 == 2 ? valor2 : 0) + (opcao2 == 2 ? valor2 : 0);
  soma2 += (opcao1 == 3 ? valor2 : 0) + (opcao2 == 3 ? valor2 : 0);
  soma2 += (opcao1 == 4 ? valor2 : 0) + (opcao2 == 4 ? valor2 : 0);
  soma2 += (opcao1 == 5 ? valor2 : 0) + (opcao2 == 5 ? valor2 : 0);
  soma2 += (opcao1 == 6 ? valor2 : 0) + (opcao2 == 6 ? valor2 : 0);

  // Exibição da soma
  printf("\nSoma dos atributos para %s: %.2f\n", nomeCidade1, soma1);
  printf("Soma dos atributos para %s: %.2f\n", nomeCidade2, soma2);

  // Comparação da soma dos atributos
  if (soma1 > soma2)
  {
    printf("Vencedor da rodada: %s\n", nomeCidade1);
  }
  else if (soma1 < soma2)
  {
    printf("Vencedor da rodada: %s\n", nomeCidade2);
  }
  else
  {
    printf("Empate na rodada!\n");
  }

  return 0;
}
