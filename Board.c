#include <stdio.h>
struct Board {
   int board[8][8];
};

void HelloWorld( int board[][8]){
   (void)fprintf(stdout,"Hello World\n");
   for(int i=0;i<8;i++){
      for(int I=0;I<8;I++){
         board[i][I]=0;
         (void) fprintf(stdout, "%d",board[i][I]);
      }
      (void)fprintf(stdout,"\n");
   }
}
/*void initialize( struct Board checkerBoard){
      for(int index=0;index<boardSize;index++){
         for(int Index=0;Index<boardSize;Index++){
            checkerBoard.board[index][Index]=0;
         }
      }
   }*/


