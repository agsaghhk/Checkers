#include <stdio.h>
#include "Board.c"
int main(int argc, char argv[]){
   int board[8][8];
   struct Board checkerBoard;
   for( int i=0; i<8;i++){
      for( int I=0; I<8;I++){
         (void)fprintf(stdout,"%d",checkerBoard.board[i][I]);
      }
   }
   HelloWorld(board);
   /*struct Board board;
   initialize(board.board);
   for(int space=0;space<8; space++){
      for(int Space=0; Space<8; Space++){
         (void)fprintf(stdout,"%d",board.board[space][Space]);
      }
   }*/
}
