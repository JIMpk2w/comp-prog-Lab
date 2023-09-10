#include <stdio.h>
#define BOARD_SIZE 8

void setPieceOnTable(int board[][BOARD_SIZE], char piece, int xPos, int yPos);

int main() {
    int i, x, y; 
    int board[BOARD_SIZE][BOARD_SIZE];
    scanf("%d", &i);

    for(int set1=0;set1<BOARD_SIZE;set1++){
        for(int set2=0;set2<BOARD_SIZE;set2++)
            board[set1][set2] = 0;
    }

    for(int j=0;j<i;j++){
        char piece;
        scanf(" %c(%d, %d)", &piece, &x, &y);
        setPieceOnTable(board, piece, x, y);
    }
    

    printf("------------------\n  0 1 2 3 4 5 6 7\n");  
    for(int set1=0;set1<BOARD_SIZE;set1++){
        printf("%d|", set1);
        for(int set2=0;set2<BOARD_SIZE;set2++)
            if(board[set1][set2] == 0){
                printf(" |");
            }else{
                printf("%c|", board[set1][set2]);
            }
        printf("\n");
    }
}

void setPieceOnTable(int board[][BOARD_SIZE], char piece, int xPos, int yPos )
{
    board[yPos][xPos] = piece;
}