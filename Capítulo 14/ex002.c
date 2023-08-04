#include <stdio.h>

int main()
{
    struct player
    {
        char name[32];
        int highscore;
        int hours;
    };
    struct player xbox;

    printf("Enter the player's name: ");
    scanf("%s", xbox.name);
    printf("Enter their highscore: ");
    scanf("%d", &xbox.highscore);
    printf("Enter the hours played: ");
    scanf("%d", &xbox.hours);

    printf("Player %s has a high score of %d playing for %d hours.\n", xbox.name, xbox.highscore, xbox.hours);
    return(0);
}