#include <stdio.h>

int main()
{
    float marketclose[] = {14450.06, 14458.62, 14539.14, 14514.11, 14452.06};
    int x;

    printf("Stock Market Close\n");
    for(x = 0; x < 5; x++)
        printf("Day %d: %.2f\n", x + 1, marketclose[x]);
    return(0);
}