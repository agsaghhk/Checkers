#include <stdio.h>
struct Board {
   int board[8][8];
};

void initialize( int board[][8]){
   for(int index=0;index<8;index++){
      for(int Index=0;Index<8;Index++){
         board[index][Index]=0;
      }
   }
}

void gameStart( int board[][8]){
   for(int index=0;index<8;index++){
      if(index<3){
         if(index%2==0){
            for(int Index=0;Index<8;Index+=2){
               board[index][Index]=1;
            }
         }
         else{
            for(int Index=1;Index<8;Index+=2){
               board[index][Index]=1;
            }
         }
      }
      if(index>4){
         if(index%2==1){
            for(int Index=0;Index<8;Index+=2){
               board[index][Index]=2;
            }
         }
         else{
            for(int Index=1;Index<8;Index+=2){
               board[index][Index]=2;
            }
         }
      }
   }
}

void print( int board[][8]){
   (void)fprintf(stdout,"  1 2 3 4 5 6 7 8 \n");
   for(int index=0;index<8;index++){
      (void)fprintf(stdout,"%d ",index+1);
      for(int Index=0; Index<8;Index++){
         if(board[index][Index]==1)
            (void)fprintf(stdout,"b ");
         else if(board[index][Index]==2)
            (void)fprintf(stdout,"r ");
         else
            (void)fprintf(stdout,"  ");
      }
      (void)fprintf(stdout,"\n");
   }
}
