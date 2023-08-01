#include <stdio.h>

int main()
{
    char tictactoe[3][3] = {
        {'.', '.', '.'},
        {'.', 'X', '.'},
        {'.', '.', '.'}
    };

    puts("Ready to play Tic-Tac-Toe?");
    for(int x = 0; x < 3; x++)
    {
        for(int y = 0; y < 3; y++)
            printf("%c\t", tictactoe[x][y]);
        putchar('\n');
    }
    return 0;
}