#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Nível Novato - Posicionamento dos Navios
    // Sugestão: Declare uma matriz bidimensional para representar o tabuleiro (Ex: int tabuleiro[5][5];).
    // Sugestão: Posicione dois navios no tabuleiro, um verticalmente e outro horizontalmente.
    // Sugestão: Utilize `printf` para exibir as coordenadas de cada parte dos navios.

    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.

    // Nível Mestre - Habilidades Especiais com Matrizes
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.

    // Exemplos de exibição das habilidades:
    // Exemplo para habilidade em cone:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 1 1 1 1 1
    
    // Exemplo para habilidade em octaedro:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 0 0 1 0 0

    // Exemplo para habilidade em cruz:
    // 0 0 1 0 0
    // 1 1 1 1 1
    // 0 0 1 0 0

        int tabuleiro[5][5] = {1, 2, 3, 4, 5,
                            6, 7, 8, 9, 10,
                            11, 12, 13, 14, 15,
                            16, 17, 18, 19, 20,
                            21, 22, 23, 24, 25};
    // navio horizontal
    int xHorizontal = 0;
    int yHorizontal = 0;
    // navio vertical
    int xVertical = 3;
    int yVertical = 0;
    
    // posicionando navio horizontal
    tabuleiro[xHorizontal][yHorizontal] = 2;
    printf("Parte do navio horizontal posicionado na casa [%d][%d]\n", xHorizontal, yHorizontal);
    // posicionando navio vertical
    tabuleiro[xVertical][yVertical] = 2;
    printf("Parte do navio vertical posicionado na casa [%d][%d]\n", xVertical, yVertical);

    return 0;
}
