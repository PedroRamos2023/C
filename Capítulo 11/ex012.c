#include <stdio.h>
#include <math.h>

int main()
{
    int result, power;

    for(power = 0; power <= 10; power++)
    {
        result = pow(2, power);
        printf("%d\t", result);
    }
    return(0);
}