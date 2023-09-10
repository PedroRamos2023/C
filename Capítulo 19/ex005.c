#include <stdio.h>

int main()
{
    int numbers[10];
    int x;
    int *pn;

    pn = numbers;

    for (x = 0; x < 10; x++)
    {
        *pn = x + 1;
        pn++;
    }

    pn = numbers;

    for (x = 0; x < 10; x++)
    {
        printf("Address: %p, Value: %d\n", (void *)pn, *pn);
        pn++;
    }

    return(0);
}
