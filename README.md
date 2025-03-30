#  Batalha Naval em C 

## Descrição 

Este projeto adiciona habilidades especiais com áreas de efeito distintas ao jogo de Batalha Naval em C. O objetivo é demonstrar o uso de arrays bidimensionais para representar o tabuleiro e implementar lógica para posicionar e exibir as áreas de efeito das habilidades.

## Funcionalidades ✨

* **Tabuleiro:**
    * Tabuleiro 10x10 representado por uma matriz (array bidimensional). ️
    * Inicialização do tabuleiro com água (valor 0). 
    * Posicionamento de navios (valor 3). 
* **Habilidades:**
    * Implementação de três habilidades especiais: Cone , Cruz ✚ e Octaedro .
    * Cada habilidade possui uma matriz de área de efeito 5x5. 
    * Exibição das áreas de efeito das habilidades no tabuleiro (valor 5). 
* **Validação:**
    * Validação de limites do tabuleiro ao sobrepor as habilidades. ✅

## Requisitos ️

* Compilador C (GCC ou similar). 
* Conhecimento básico de programação em C (arrays, loops, funções). 

## Como Compilar e Executar 

1.  **Salve o código:** Salve o código C em um arquivo com a extensão `.c` (ex: `batalha_naval_habilidades.c`). 
2.  **Compile o código:** Abra um terminal ou prompt de comando e use o seguinte comando para compilar o código:

    ```bash
    gcc batalha_naval_habilidades.c -o batalha_naval_habilidades -lm ⚙️
    ```

3.  **Execute o programa:** Execute o programa compilado com o seguinte comando:

    ```bash
    ./batalha_naval_habilidades ▶️
    ```

## Estrutura do Código 

* **`main()`:**
    * Função principal que controla o fluxo do programa. 
    * Inicializa o tabuleiro e os navios. ️
    * Constrói as matrizes de habilidade. ️
    * Sobrepõe as habilidades no tabuleiro. 
    * Exibe o tabuleiro no console. ️
* **`construir_cone()`:**
    * Função que constrói a matriz de habilidade Cone. 
* **`construir_cruz()`:**
    * Função que constrói a matriz de habilidade Cruz. ✚
* **`construir_octaedro()`:**
    * Função que constrói a matriz de habilidade Octaedro. 
* **`sobrepor_habilidade()`:**
    * Função que sobrepõe a matriz de habilidade no tabuleiro. 
* **Constantes:**
    * `TAMANHO_TABULEIRO`: Define o tamanho do tabuleiro (10). 
    * `TAMANHO_NAVIO`: Define o tamanho dos navios (3). 
    * `TAMANHO_HABILIDADE`: Define o tamanho das matrizes de habilidade (5). 

## Melhorias Futuras 

* Implementar a lógica de dano ou efeito das habilidades nos navios. ➡️
* Adicionar entrada do usuário para as coordenadas das habilidades. ️
* Adicionar diferentes tipos de habilidades com áreas de efeito variadas. ✨
* Melhorar a interface do usuário (ex: exibir letras e números nas bordas do tabuleiro). 
* Adicionar tratamento de erros. 

## Observações 

* Este é um projeto de nível mestre, demonstrando o uso de arrays e lógica de validação em C. 
* O código é bem comentado para facilitar o entendimento. 
* O código pode ser expandido para criar um jogo de Batalha Naval completo. 
