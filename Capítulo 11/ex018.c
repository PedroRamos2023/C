#include <stdio.h>
#include <stdlib.h>

int main()
{
    int r, a, b;

    puts("100 Random Numbers between 0 and 20");
    for(a = 0; a < 20; a++)
    {
        for(b = 0; b < 5; b++)
        {
            r = rand() % 21;
            printf("%d\t", r);
        }
        putchar('\n');    
    }
    return(0);
}