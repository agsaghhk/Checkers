#include <stdio.h>
#include "Checkers.c"
#include "Spaces.c"
struct Board {
   struct Spaces board[8][8];
};

/*
 * Funcion name: gameStart
 * Function prototype: void gameStart( Spaces board[][8] );
 * Description: creates the board, initializing all spaces
 * and filling them with pieces or NULL pieces while
 * numbering them all.
 * Parameters: arg 1 - Spaces board[][] - a 2d array of 
 * the individual spaces
 * Return Value: None.
 */
void gameStart( struct Spaces board[][8]){
   int pieceCount=1;
   for(int index=0;index<8;index++){
      if(index<3){
         if(index%2==0){
            for(int Index=0;Index<8;Index++){
               if(Index%2==0){
                  struct Piece piece={pieceCount++,'b',Index,index};
                  struct Spaces space={1,piece};
                  board[index][Index]=space;
               }
               else{
                  struct Piece piece={0,0,0,0};
                  struct Spaces space={0,piece};
                  board[index][Index]=space;
               }
            }
         }
         else{
            for(int Index=0;Index<8;Index++){
               if(Index%2==1){
                  struct Piece piece={pieceCount++,'b',Index,index};
                  struct Spaces space={1,piece};
                  board[index][Index]=space;
               }
               else{
                  struct Piece piece={0,0,0,0};
                  struct Spaces space={0,piece};
                  board[index][Index]=space;
               }
            }
         }
      }
      if(index>4){
         if(index%2==0){
            for(int Index=0;Index<8;Index++){
               if(Index%2==0){
                  struct Piece piece={pieceCount++,'r',Index,index};
                  struct Spaces space={1,piece};
                  board[index][Index]=space;
               }
               else{
                  struct Piece piece={0,0,0,0};
                  struct Spaces space={0,piece};
                  board[index][Index]=space;
               }
            }
         }
         else{
            for(int Index=0;Index<8;Index++){
               if(Index%2==1){
                  struct Piece piece={pieceCount++,'r',Index,index};
                  struct Spaces space={1,piece};
                  board[index][Index]=space;
               }
               else{
                  struct Piece piece={0,0,0,0};
                  struct Spaces space={0,piece};
                  board[index][Index]=space;
               }
            }
         }
      }
        
   }
}

void print( struct Spaces board[][8]){
   (void)fprintf(stdout,"  1 2 3 4 5 6 7 8 \n");
   for(int index=0;index<8;index++){
      (void)fprintf(stdout,"%d ",index+1);
      for(int Index=0; Index<8; Index++){
         if(board[index][Index].occupied==1){
            fprintf(stdout, "%c ",board[index][Index].piece.color);
         }
         else{
            fprintf(stdout, "  ");
         }
      }
      (void)fprintf(stdout,"\n");
   }
   (void) fprintf(stdout,"---------------\n\n");
}
/*void print( int board[][8]){
      for(int Index=0; Index<8;Index++){
         if(board[index][Index]==1)
            (void)fprintf(stdout,"b ");
         else if(board[index][Index]==2)
            (void)fprintf(stdout,"r ");
         else
            (void)fprintf(stdout,"  ");
      }
   }
}*/
