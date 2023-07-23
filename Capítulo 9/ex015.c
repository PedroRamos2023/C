#include <stdio.h>

int main()
{
    float x;

    x = -5;
    while(x <= 5)
    {
        printf("%f\t", x);
        x = x + 0.5;
    }
    return(0);
}