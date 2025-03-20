# Jogo de Super Trunfo - Comparação de Cartas de Cidades

## Descrição

Este projeto é um jogo de comparação de cidades baseado em atributos como população, área, PIB, pontos turísticos, densidade populacional e PIB per capita. O jogador escolhe dois atributos numéricos diferentes para comparar as cartas das cidades. O sistema exibe os valores dos atributos, realiza a comparação entre as cidades e determina o vencedor da rodada com base na maior soma dos atributos escolhidos.

## Funcionalidades

- Entrada de dados para duas cidades, incluindo:

- Estado, nome da cidade, código da carta, população, área, PIB e pontos turísticos.
- O jogador pode escolher dois atributos numéricos diferentes para comparar entre as duas cidades. Os atributos disponíveis são:

      - População
      - Área
      - PIB
      - Pontos turísticos
      - Densidade populacional
      - PIB per capita

- O sistema compara os atributos escolhidos individualmente e determina o vencedor para cada atributo, com a exceção de Densidade populacional, onde vence a carta com o menor valor.

- Após a comparação individual dos atributos, o sistema soma os valores dos dois atributos para cada carta e determina a cidade vencedora com a maior soma.

- Em caso de empate, o sistema exibe "Empate!" para o atributo ou para a rodada.

## Como funciona

1. Entrada de dados: O jogador insere os dados de duas cidades (estado, nome da cidade, código da carta, população, área, PIB, pontos turísticos).

2. Escolha dos atributos: O jogador escolhe dois atributos diferentes para comparação.

3. Comparação dos atributos: O sistema compara os valores de cada atributo entre as duas cidades. A cidade com o maior valor para o atributo escolhido vence.

4. Soma dos atributos: O sistema soma os valores dos dois atributos escolhidos para cada cidade e determina a cidade vencedora com a maior soma total.

5. Resultado: O vencedor é exibido, com base na comparação e na soma dos atributos. Caso haja empate, o sistema informará um empate.

## Requisitos

- Sistema Operacional: Qualquer sistema que tenha um compilador de C (como GCC ou Clang).
- Bibliotecas: Nenhuma biblioteca externa é necessária, o código usa apenas bibliotecas padrão da linguagem C (stdio.h e string.h).

## Como rodar

1. Compilar o código: Para compilar o código em C, use o seguinte comando no terminal (considerando que o código esteja em um arquivo chamado comparacao_cidades.c):

```
gcc comparacao_cidades.c -o comparacao_cidades
```

2. Executar o programa: Após a compilação, execute o programa gerado com o comando:

```
./comparacao_cidades
```

2.2 Ou utilize o próprio compilador da extensão C no visual studio code 3. Siga as instruções na tela: O programa pedirá para você inserir os dados das cidades e escolher os atributos para a comparação. Após a escolha, o programa realizará a comparação e exibirá o vencedor.
