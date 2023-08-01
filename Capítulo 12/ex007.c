#include <stdio.h>
#include <math.h>

int main()
{
    int value[] = {10, 12, 14, 15, 16, 18, 20};
    float squareRoot[7];
    int x;

    for(x = 0; x < 7; x++)
    {
        squareRoot[x] = sqrt(value[x]);
        printf("The square root of %d is %.2f\n", value[x], squareRoot[x]);
    }
    return(0);
}