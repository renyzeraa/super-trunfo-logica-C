#include <stdio.h>
#include <string.h>

int main()
{
  char estado1[50], estado2[50], nomeCidade1[50], nomeCidade2[50], codigo1[20], codigo2[20];
  int populacao1, populacao2, pontosTuristicos1, pontosTuristicos2;
  float area1, area2, pib1, pib2, densidadePopulacional1, densidadePopulacional2, pibPerCapita1, pibPerCapita2;
  int opcao;

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

  printf("\nEscolha o atributo para comparação:\n");
  printf("1 - População\n");
  printf("2 - Área\n");
  printf("3 - PIB\n");
  printf("4 - Pontos turísticos\n");
  printf("5 - Densidade populacional\n");
  printf("6 - PIB per capita\n");
  printf("0 - Sair\n");
  printf("Escolha uma opção: ");
  scanf("%d", &opcao);

  if (opcao == 0)
  {
    printf("Saindo do programa...\n");
    return 0;
  }

  printf("\nComparação entre %s e %s:\n", nomeCidade1, nomeCidade2);

  switch (opcao)
  {
  case 1:
    printf("Atributo: População\n");
    printf("%s: %d habitantes\n%s: %d habitantes\n", nomeCidade1, populacao1, nomeCidade2, populacao2);
    if (populacao1 > populacao2)
    {
      printf("Vencedor: %s\n", nomeCidade1);
    }
    else if (populacao1 < populacao2)
    {
      printf("Vencedor: %s\n", nomeCidade2);
    }
    else
    {
      printf("Empate!");
    }
    break;
  case 2:
    printf("Atributo: Área\n");
    printf("%s: %.2f km²\n%s: %.2f km²\n", nomeCidade1, area1, nomeCidade2, area2);
    if (area1 > area2)
    {
      printf("Vencedor: %s\n", nomeCidade1);
    }
    else if (area1 < area2)
    {
      printf("Vencedor: %s\n", nomeCidade2);
    }
    else
    {
      printf("Empate!");
    }
    break;
  case 3:
    printf("Atributo: PIB\n");
    printf("%s: %.2f\n%s: %.2f\n", nomeCidade1, pib1, nomeCidade2, pib2);
    if (pib1 > pib2)
    {
      printf("Vencedor: %s\n", nomeCidade1);
    }
    else if (pib1 < pib2)
    {
      printf("Vencedor: %s\n", nomeCidade2);
    }
    else
    {
      printf("Empate!");
    }
    break;
  case 4:
    printf("Atributo: Pontos Turísticos\n");
    printf("%s: %d pontos\n%s: %d pontos\n", nomeCidade1, pontosTuristicos1, nomeCidade2, pontosTuristicos2);
    if (pontosTuristicos1 > pontosTuristicos2)
    {
      printf("Vencedor: %s\n", nomeCidade1);
    }
    else if (pontosTuristicos1 < pontosTuristicos2)
    {
      printf("Vencedor: %s\n", nomeCidade2);
    }
    else
    {
      printf("Empate!");
    }
    break;
  case 5:
    printf("Atributo: Densidade Populacional\n");
    printf("%s: %.2f hab/km²\n%s: %.2f hab/km²\n", nomeCidade1, densidadePopulacional1, nomeCidade2, densidadePopulacional2);
    if (densidadePopulacional1 < densidadePopulacional2)
    {
      printf("Vencedor: %s\n", nomeCidade1);
    }
    else if (densidadePopulacional1 > densidadePopulacional2)
    {
      printf("Vencedor: %s\n", nomeCidade2);
    }
    else
    {
      printf("Empate!");
    }
    break;
  case 6:
    printf("Atributo: PIB per Capita\n");
    printf("%s: %.2f\n%s: %.2f\n", nomeCidade1, pibPerCapita1, nomeCidade2, pibPerCapita2);
    if (pibPerCapita1 > pibPerCapita2)
    {
      printf("Vencedor: %s\n", nomeCidade1);
    }
    else if (pibPerCapita1 < pibPerCapita2)
    {
      printf("Vencedor: %s\n", nomeCidade2);
    }
    else
    {
      printf("Empate!");
    }
    break;
  default:
    printf("Opção inválida! Tente novamente.\n");
  }
  return 0;
}
