#include <stdio.h>

int main()
{
    struct scores
    {
        char name[32];
        int score;
    };
    struct scores player[4];
    int x, y;
    struct scores temp;    

    for(x = 0; x < 4; x++)
    {
        printf("Enter player %d: ", x + 1);
        scanf("%s", player[x].name);
        printf("Enter their high score: ");
        scanf("%d", &player[x].score);
    }

    for(x = 0; x < 3; x++)
    {
        for(y = x + 1; y < 4; y++)
        {
            if(player[x].score < player[y].score)
            {
                temp = player[x];
                player[x] = player[y];
                player[y] = temp;
            }
        }
    }

    puts("Player Info");
    printf("#\tName\tScore\n");
    for(x = 0; x < 4; x++)
    {
        printf("%d\t%s\t%5d\n", x + 1, player[x].name, player[x].score);
    }
    return(0);
}