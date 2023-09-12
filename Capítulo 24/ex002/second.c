#include <stdio.h>
#include "ex002.h"

extern int count;

void second(void)
{
    printf("%d\n", count + 1);
}