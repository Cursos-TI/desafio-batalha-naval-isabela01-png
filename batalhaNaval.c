#include <stdio.h>

//Desafio Batalha Naval//
#define Linhas 10
#define colunas 10

int main (){
  printf ("Tabuleiro Batalha Naval\n");

  //Criando a linha
    char linha [10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'} ;
    
    for (int j = 0 ; j < 10 ; j++ ) {
      printf ("%c\t" , linha [j]) ;
    }
   printf ("\n") ;

    // Criando o Tabuleiro (Matriz 10x10)//
    int matriz [linhas][Colunas] ;

     for (int i = 0 ; i< Linhas ; i++ ){
      printf ("%2d\t", i+1) ;
     for (int j = 0 ; j < Colunas ; j++) {
      matriz [i][j] = 0 ;
      printf ("%d\t", matriz [i][j]) ;
     }

    // inicializar o tabuleiro com "água" (valor 0)
    for (int i = 0 ; i < 10 ; i++) {
     for (int j = 0 ; j < 10 ; j++) {
      matriz [i][j] = 0 ;
        printf("%d \n", matriz[0][10]);
     }
      printf("\n");

  // Posicionando um navio de tamanho 3 horizontalmente//
  int linha = 2 ; // linha de início do navio
  int coluna = 3 ; // coluna de início do navio 
  int tamanho =  3 ; // tamanho do navio 
  int i ; // para o loop 
  // Preencher o navio horizontalmente //
  for(i=0 ; i< tamanho ; i++){
    matriz  [linha][coluna+i] = 3 ;
   }
printf ("\n") ;

   //Posicionando o navio verticalmente//
   int linha = 2 ; //Linha de início do navio
   int coluna = 3 ; //coluna de início do navio
   int tamanho = 3 ; //tamanho do navio 
   int i ;
   //Preencher o navio verticalmente//
   for (i=0 ; i < tamanho ; i++) {
      matriz [linha + i ][coluna] = 3 ;
   }
   printf ("\n") ;

   return 0 ;