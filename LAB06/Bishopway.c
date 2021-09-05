#include <stdio.h>
#define BOARD_SIZE 8

void bishopMoves(char board[][BOARD_SIZE], int bishopX, int bishopY){
    board[bishopY][bishopX] = 'B';
    int x, y;

    for (x = bishopX-1, y = bishopY-1; x >= 0 && y >= 0; x--, y--)
        board[y][x] = 'X';

    for (x = bishopX+1, y = bishopY-1; x <= 7 && y >= 0; x++, y--)
        board[y][x] = 'X';

    for (x = bishopX-1, y = bishopY+1; x >= 0 && y <= 7; x--, y++)
        board[y][x] = 'X';

    for (x = bishopX+1, y = bishopY+1; x <= 7 && y <= 7; x++, y++)
        board[y][x] = 'X';
}

int main() {
    int x, y, i, j;
    char board[BOARD_SIZE][BOARD_SIZE];

    printf("Enter Bishop's X Y position: ");
    scanf("%d %d", &x, &y);

    for (i = 0; i < BOARD_SIZE; i++) {
        for (int j = 0; j < BOARD_SIZE; j++)
            board[i][j] = ' ';
    }

    bishopMoves(board, x, y);

    printf("  0 1 2 3 4 5 6 7");
    printf("\n------------------\n");

    for (i = 0; i < BOARD_SIZE; i++){
        printf("%d|", i);

        for (j = 0; j < BOARD_SIZE; j++)
            printf("%c|", board[i][j]);
        
        printf("\n------------------\n");
    }
}