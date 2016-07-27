#include <stdio.h>
#include "Board.c"
void parsePlay(){
   char playerMove[BUFSIZ];
   fgets(playerMove,BUFSIZ,stdin);
}
int main(int argc, char argv[]){
   int board[8][8];
   struct Board checkerBoard;
   initialize(checkerBoard.board);
   gameStart(checkerBoard.board);
   print(checkerBoard.board);
   int playerTurn=1;
   (void)fprintf(stdout,"Player %d's turn\n",playerTurn);
   parsePlay();
   
}
