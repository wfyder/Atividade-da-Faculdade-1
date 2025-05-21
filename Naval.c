#include <stdio.h>
int main(){
  char movimentoNaval[10] = {
    'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'}; 
    int tabuleiro[10][10] = {0};
  int i, j;
  //adicionar 3 as casas
  tabuleiro[2][3] = 3;
    tabuleiro[2][4] = 3;
    tabuleiro[2][5] = 3;
    tabuleiro[5][7] = 3;
    tabuleiro[6][7] = 3;
    tabuleiro[7][7] = 3;
  printf("Tabuleiro Batalha Naval: \n");
  printf("   ");
  for (i = 0; i < 10 ; i++){
  	printf("%c ", movimentoNaval[i]);  }
  	
 printf("\n");
 
  for( i = 0; i < 10; i++){
    printf("%2d", i + 1);
   for (j =0; j <10 
  ; j++){
  	printf(" %d", tabuleiro[i] [j]);
  }
  printf("\n");
  }
  return 0;
  
}