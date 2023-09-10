#include <stdio.h>
#include <time.h>

int main()
{
    int i;
    time_t tictoc;

    for(i = 0; i < 20; i++)
    {
        tictoc = time(NULL);
        printf("Time %d: %ld", i + 1, tictoc);     
    }

    return(0);
}