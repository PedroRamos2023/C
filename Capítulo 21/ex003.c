#include <stdio.h>
#include <time.h>

int main()
{
    time_t tictoc1, tictoc2;

    tictoc1 = time(NULL);
    printf("First time(time(NULL)): %ld\n", tictoc1);

    tictoc2 = time(&tictoc1);
    printf("Second time(time(&tictoc1)): %ld\n", tictoc2);

    return(0);
}