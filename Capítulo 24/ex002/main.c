#include <stdio.h>
#include <stdlib.h>
#include "ex002.h"

void second(void);

int count;

int main()
{
    for(count = 0; count < 5; count++)
        second();
    return 0;
}