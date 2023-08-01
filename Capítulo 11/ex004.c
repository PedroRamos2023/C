#include <stdio.h>

int main()
{
    int c;

    c = -5;
    while(c < 5)
    {
        printf("%d ", c);
        c++;
    }
    while(c >= -5)
    {
        printf("%d ", c);
        c--;
    }
    putchar('\n');
    return(0);
}