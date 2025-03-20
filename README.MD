# Jogo de Super Trunfo - Comparação de Cartas de Cidades

## Descrição

Este é um simples jogo de **Super Trunfo** implementado em linguagem **C**, onde duas cartas de cidades brasileiras são comparadas com base no atributo **PIB**. O jogo recebe as informações de duas cartas e realiza a comparação entre elas, determinando qual cidade possui o maior PIB. O objetivo do jogo é determinar qual carta (cidade) é a vencedora com base nesse atributo.

## Funcionalidades

- O programa solicita ao usuário que insira os dados de duas cartas de cidades.
- Para cada carta, são fornecidos os seguintes atributos:
  - **Estado** da cidade
  - **Nome da cidade**
  - **Código da carta**
  - **População**
  - **Área** (em km²)
  - **PIB** (Produto Interno Bruto)
  - **Pontos turísticos** da cidade
- O programa calcula dois valores adicionais:
  - **Densidade populacional** (População / Área)
  - **PIB per capita** (PIB / População)
- O programa compara os valores de **PIB** das duas cartas e exibe o vencedor. Se o PIB das duas cartas for igual, é declarado um empate.

## Como Jogar

1. **Inserir os Dados das Cartas:**
   O programa solicita que o usuário insira as informações de duas cartas de cidades, uma de cada vez. As informações solicitadas incluem:

   - Estado da cidade
   - Nome da cidade
   - Código da carta
   - População da cidade
   - Área da cidade
   - PIB da cidade
   - Número de pontos turísticos na cidade

2. **Comparação das Cartas:**
   Após inserir os dados, o programa compara o **PIB** de cada carta e determina a vencedora. A carta com o maior PIB vence.

3. **Resultado:**
   O resultado é exibido informando qual carta venceu a comparação, ou se houve um empate.

## Exemplo de Execução

Abaixo está um exemplo de como o programa funciona:

## Como Funciona o Código

1. **Leitura dos Dados:**
   O programa solicita os dados das duas cartas usando `scanf` e armazena as informações em variáveis apropriadas.

2. **Cálculos:**
   O programa calcula a **densidade populacional** e o **PIB per capita** para cada carta.

3. **Comparação:**
   O programa compara o **PIB** das duas cartas. A carta com o maior PIB vence.

4. **Exibição do Resultado:**
   O programa exibe os dados das cartas, incluindo PIB, e depois mostra o vencedor da comparação.

## Tecnologias Utilizadas

- **Linguagem de Programação:** C
- **Ferramenta de Compilação:** GCC ou qualquer compilador C compatível

## Instruções para Compilação e Execução

### Compilação

Para compilar e executar utilize a extensão no vscode para linguagem C.

### Requisitos

Este programa pode ser compilado e executado em qualquer ambiente que suporte a linguagem C, como Linux, macOS ou Windows (com o MinGW ou Cygwin).
