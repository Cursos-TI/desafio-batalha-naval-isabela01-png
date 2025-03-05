#include <stdio.h>

int main (){
    char linha [10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'} ;
    // Criando o Tabuleiro (Matriz 10x10)//
    int tabuleiro[10][10];
    int i , int j ;

    // inicializar o tabuleiro com "água" (valor 0)
    for (int i = 0 ; i < 10 ; i++) {
     for (int j = 0 ; j < 10 ; j++) {
      tabuleiro [i][j] = 0 ;
        printf("%d \n", tabuleiro[0][10]);
     }
      printf("\n");

    //Exibindo o Tabuleiro//
    printf("-TABULEIRO BATALHA NAVAL"- \n);
    for (int j = 0 ; j<10 ; j++){
      printf ("%c", linha [j]) ; //Imprime os números das colunas
    }
      printf("\n") ;

// Imprimindo cada elemento da linha //

      for (int i = 0 ; i<10 ; i++) {
        printf ("%2d" , i+1) ; // Imprime os números das linhas 

        for (int j = 0 ; j<10 ; j++){
            printf ("%d" , tabuleiro[i][j]);
      }
      printf("\n");

  // Posicionando um navio de tamanho 3 horizontalmente//
  int linha = 2 ; // linha de início do navio
  int coluna = 3 ; // coluna de início do navio 
  int tamanho =  3 ; // tamanho do navio 
  int i ; // para o loop 
  // Preencher o navio horizontalmente //
  for(i=0 ; i< tamanho ; i++){
    tabuleiro [linha][coluna+i] = 3 ;
   }
printf ("\n") ;

   //Posicionando o navio verticalmente//
   int linha = 2 ; //Linha de início do navio
   int coluna = 3 ; //coluna de início do navio
   int tamanho = 3 ; //tamanho do navio 
   int i ;
   //Preencher o navio verticalmente//
   for (i=0 ; i < tamanho ; i++) {
      tabuleiro [linha + i ][coluna] = 3 ;
   }
   printf ("\n") ;

   return 0 ;