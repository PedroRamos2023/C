#include <stdio.h>

int main()
{
    float temps[5] = {58.7, 62.8, 65.0, 63.3, 63.2};
    float *pTemps = temps;

    printf("The temperature on Tuesday will be %.1f\n", *(pTemps + 1));
    printf("The temperature on Friday will be %.1f\n", *(pTemps + 4));
    return(0);
}