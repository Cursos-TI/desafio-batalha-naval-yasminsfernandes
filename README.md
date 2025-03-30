# README - Batalha Naval em C (Nível Aventureiro)

## Descrição

Este projeto expande o jogo de Batalha Naval em C, adicionando navios posicionados na diagonal e melhorando a validação de posicionamento. O objetivo é demonstrar o uso de arrays bidimensionais para representar o tabuleiro e implementar lógica para posicionar e validar navios em diferentes orientações.

## Funcionalidades

* **Tabuleiro:**
    * Tabuleiro 10x10 representado por uma matriz (array bidimensional).
    * Inicialização do tabuleiro com água (valor 0).
* **Navios:**
    * Quatro navios de tamanho fixo 3.
    * Posicionamento de navios nas orientações horizontal, vertical e diagonal.
    * Validação completa de limites do tabuleiro e sobreposição de navios.
* **Exibição:**
    * Exibição do tabuleiro no console, mostrando a posição dos navios.

## Requisitos

* Compilador C (GCC ou similar).
* Conhecimento básico de programação em C (arrays, loops, funções).

## Como Compilar e Executar

1.  **Salve o código:** Salve o código C em um arquivo com a extensão `.c` (ex: `batalha_naval_diagonal.c`).
2.  **Compile o código:** Abra um terminal ou prompt de comando e use o seguinte comando para compilar o código:

    ```bash
    gcc batalha_naval_diagonal.c -o batalha_naval_diagonal
    ```

3.  **Execute o programa:** Execute o programa compilado com o seguinte comando:

    ```bash
    ./batalha_naval_diagonal
    ```

## Estrutura do Código

* **`main()`:**
    * Função principal que controla o fluxo do programa.
    * Inicializa o tabuleiro e os navios.
    * Posiciona os navios no tabuleiro, validando a posição.
    * Exibe o tabuleiro no console.
* **`pode_posicionar()`:**
    * Função que verifica se um navio pode ser posicionado nas coordenadas fornecidas, levando em consideração a orientação.
* **Constantes:**
    * `TAMANHO_TABULEIRO`: Define o tamanho do tabuleiro (10).
    * `TAMANHO_NAVIO`: Define o tamanho dos navios (3).

## Melhorias Futuras

* Implementar a lógica do jogo (ataques, acertos, afundamentos).
* Adicionar entrada do usuário para as coordenadas dos navios e ataques.
* Adicionar diferentes tipos de navios com tamanhos variados.
* Melhorar a interface do usuário (ex: exibir letras e números nas bordas do tabuleiro).
* Adicionar tratamento de erros.

## Observações

* Este é um projeto de nível aventureiro, demonstrando o uso de arrays e lógica de validação em C.
* O código é bem comentado para facilitar o entendimento.
* O código pode ser expandido para criar um jogo de Batalha Naval completo.