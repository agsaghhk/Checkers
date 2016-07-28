#include <stdio.h>
#include "Board.c"
//#include "Checkers.c"
//#include "Spaces.c"
void parsePlay(){
   char playerMove[BUFSIZ];
   fgets(playerMove,BUFSIZ,stdin);
}
int main(int argc, char argv[]){
   struct Board checkerBoard;
   //initialize(checkerBoard.board);
   gameStart(checkerBoard.board);
   //print(checkerBoard.board);
   int playerTurn=1;
   (void)fprintf(stdout,"Player %d's turn\n",playerTurn);
   parsePlay();
   
}
