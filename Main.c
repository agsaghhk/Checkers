#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Board.c"
int parsePlay(){
   char playerMove[BUFSIZ];
   char * endptr;
   fgets(playerMove,BUFSIZ,stdin);
   int toReturn=atoi(playerMove);
   return toReturn;
}
int main(int argc, char *argv[]){
   struct Board *checkerBoard=malloc(sizeof(struct Board));
 //  struct Board checkerBoard;
   gameStart(checkerBoard->board);
   print(checkerBoard->board);
   int playerTurn=1;
   (void)fprintf(stdout,"Player %d's turn\n",playerTurn);
   int playerMove=parsePlay();
   fprintf(stdout, "%d\n", playerMove);
   
}
