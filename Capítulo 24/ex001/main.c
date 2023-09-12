#include <stdio.h>
#include <stdlib.h>
#include "ex001.h"

void second(void);

int main()
{
    printf("Second module, I send you greetings!\n");
    second();
    return 0;
}