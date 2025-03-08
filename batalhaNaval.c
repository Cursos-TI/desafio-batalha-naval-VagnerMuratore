#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main() {
      char linha[10] = {'A','B','C','D','E','F','G','H','I','J'};

    int tabuleiro[10][10]= {
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0}
    };

    for (int i = 3; i < 6; i++) {
       tabuleiro[2][i] = 3;
    }

    for (int i = 5; i < 8; i++) {
        tabuleiro[i][7] = 3;
    }

    printf("%c", ' ');
    printf("%c", ' ');
   
    for (int i = 0; i < 10; i++) {
        printf("%c %c", linha[i],' ');
 
     }
     
   printf("\n");

     for (int i = 0; i < 10; i++) {
        if (i<9) printf("%c", ' ');
        printf("%d %c", (i+1),' ');
        for (int j = 0; j < 10; j++) {
            printf("%d %c", tabuleiro[i][j],' ');
     
         }
        printf("\n");
     }

    return 0;
}
