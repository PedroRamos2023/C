#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *handle;
    int higscore;

    handle = fopen("scores.dat", "w");
    if(!handle)
    {
        puts("File error!");
        exit(1);
    }
    printf("What is your high score? ");
    scanf("%d", &higscore);
    fwrite(&higscore, sizeof(int), 1, handle);
    puts("Score saved");
    return(0);
}