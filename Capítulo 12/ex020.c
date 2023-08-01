#include <stdio.h>

#define SIZE 3

int main()
{
    char president [SIZE][8] = {
        "Clinton",
        "Bush",
        "Obama",
        "Washington",
        "Adams",
        "Jefferson"
    };
    int x;

    for(x = 0; x < SIZE; x++)
        puts(president[x]);
    return(0);
}