

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.
#include <stdio.h> 

int main () {
    int i = 1;
    int j = 1;
    
    printf("Movimentacao da Torre:\n");
    
    while (i<=5) {
          printf("Direita\n");
          i++;
          }
          
    printf("\nMovimentacao do Bispo:\n");
    
    do {
        printf("Cima, Direita\n");
        j++;
        } while(j<=5);
        
     printf("\nMovimentacao da Rainha:\n");
     
     for (int n = 1; n<=8; n++) {
         printf("Esquerda\n");
         }
         
    
    printf("\nPressione Enter para sair...");
    getchar();  // consome o '\n' que sobrou
    getchar();  // aguarda o Enter do usuario
    return 0;
}

