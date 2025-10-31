#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main() {
// tamanho do tabuleiro 10x10
int linha = 10;
int tabuleiro[10][10];

 // Inicializa o tabuleiro com 0 (água)
 for(int i = 0; i < linha; i++){
        for(int j = 0; j < linha; j++){
            tabuleiro[i][j] = 0;
        }
 }

 
  // Posicionando um navio horizontal de 3 partes 
  int horizontalNavio = 4;
  int verticalNavio = 2;

   // Garante que o navio cabe no tabuleiro

   for(int i = 0; i < 3; i++){
    tabuleiro[horizontalNavio][verticalNavio + i] = 3; 
   }
    //    Navio Vertical 3 partes

    int linhaVertical = 6;
    int colunaVertical = 3;
    for(int i = 0; i < 3; i++){
        tabuleiro[linhaVertical + i][colunaVertical] = 3;
    }

    //  Navio Diagonal Principal 3 partes
    // começa em (0,0), (1,1), (2,2)
    for (int i = 0; i < 3; i++){
        tabuleiro[i][i] = 3;
    }
     //  Navio Diagonal secundária 3 partes
     // começa em (0,9), (1,8), (2,7)
    for (int i = 0; i < 3; i++){
        tabuleiro[i][linha -1 -i] = 3;
       
    }
    

    // Cabeçalho das colunas (A a J)
    printf("    ");
    for (int j = 0; j < linha; j++) {
        printf("%2c ", 'A' + j);
    }
    printf("\n");

    

    // Imprimir as linhas numeradas (1 a 10)
    for (int i = 0; i < linha; i++) {
        printf("%2d  ", i + 1);
        for (int j = 0; j <linha; j++) {
            printf("%2d ", tabuleiro[i][j]);
        }
        printf("\n");
    }
    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Sugestão: Exiba o tabuleiro completo:
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

    return 0;
}
