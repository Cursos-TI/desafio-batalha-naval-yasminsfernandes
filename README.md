# Batalha Naval em C

## Descrição

Este projeto implementa um jogo de Batalha Naval simplificado em C, focado no posicionamento de navios em um tabuleiro. O objetivo principal deste nível novato é demonstrar o uso de arrays bidimensionais para representar o tabuleiro e arrays unidimensionais para representar os navios.

## Funcionalidades

* **Tabuleiro:**
    * Tabuleiro 10x10 representado por uma matriz (array bidimensional).
    * Inicialização do tabuleiro com água (valor 0).
* **Navios:**
    * Dois navios de tamanho fixo 3 (um horizontal e um vertical).
    * Posicionamento dos navios no tabuleiro (valor 3).
    * Validação básica de limites do tabuleiro para o posicionamento dos navios.
* **Exibição:**
    * Exibição do tabuleiro no console, mostrando a posição dos navios.

## Requisitos

* Compilador C (GCC ou similar).
* Conhecimento básico de programação em C (arrays, loops, funções).

## Como Compilar e Executar

1.  **Salve o código:** Salve o código C em um arquivo com a extensão `.c` (ex: `batalha_naval.c`).
2.  **Compile o código:** Abra um terminal ou prompt de comando e use o seguinte comando para compilar o código:

    ```bash
    gcc batalha_naval.c -o batalha_naval
    ```

3.  **Execute o programa:** Execute o programa compilado com o seguinte comando:

    ```bash
    ./batalha_naval
    ```

## Estrutura do Código

* **`main()`:**
    * Função principal que controla o fluxo do programa.
    * Inicializa o tabuleiro e os navios.
    * Posiciona os navios no tabuleiro.
    * Exibe o tabuleiro no console.
* **Constantes:**
    * `TAMANHO_TABULEIRO`: Define o tamanho do tabuleiro (10).
    * `TAMANHO_NAVIO`: Define o tamanho dos navios (3).

## Melhorias Futuras (Próximos Níveis)

* Implementar a lógica do jogo (ataques, acertos, afundamentos).
* Adicionar entrada do usuário para as coordenadas dos navios e ataques.
* Implementar validação completa de sobreposição de navios.
* Adicionar diferentes tipos de navios com tamanhos variados.
* Melhorar a interface do usuário (ex: exibir letras e números nas bordas do tabuleiro).
* Adicionar tratamento de erros.

## Observações

* Este é um projeto de nível novato, focado nos conceitos básicos de arrays e manipulação de dados em C.
* O código é bem comentado para facilitar o entendimento.
* O código pode ser expandido para criar um jogo de Batalha Naval completo.
