#include <stdio.h>
#define BOARD_SIZE 8

void bishopMoves(int i, int j,int x,int y) {
    if(y==i&&x==j){
        printf("B|");
    }else if(y-x==i-j || x+y==i+j){
        printf("X|");
    }else{
        printf(" |");
    }
}

int main() {
    int A[BOARD_SIZE][BOARD_SIZE];
    int x, y;

    printf("Enter Bishop's X Y position: ");
    scanf("%d %d", &x, &y);
    printf("  0 1 2 3 4 5 6 7\n------------------\n");
    
    for(int i;i<BOARD_SIZE;i++){
        printf("%d|", i);
        for(int j=0;j<BOARD_SIZE;j++)
            bishopMoves(i, j, x, y);
        printf("\n------------------\n");
    }

}
