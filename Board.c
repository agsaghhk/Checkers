#include <stdio.h>
struct Board {
   int board[8][8];
};

void initialize( int board[][8]){
   for(int i=0;i<8;i++){
      for(int I=0;I<8;I++){
         board[i][I]=0;
         (void) fprintf(stdout, "%d",board[i][I]);
      }
      (void)fprintf(stdout,"\n");
   }
}

