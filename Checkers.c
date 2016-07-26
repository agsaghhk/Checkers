#include <stdio.h>
#include "Board.c"
int main(int argc, char argv[]){
   int board[8][8];
   struct Board checkerBoard;
   initialize(checkerBoard.board);
   gameStart(checkerBoard.board);
   (void)fprintf(stdout,"\n\n");
   print(checkerBoard.board);
   
}
