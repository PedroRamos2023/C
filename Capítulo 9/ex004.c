#include <stdio.h>

int main()
{
    int count;

    for(count = 11; count <= 19; count = count + 10)
    {
        printf("%d\t", count);
    }
    putchar('\n');
    return(0);
}