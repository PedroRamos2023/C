#include <stdio.h>

int main()
{
    int num = 42;
    int *p;

    p = &num;

    printf("Value stored in 'num': %d\n", num);
    printf("Value accessed using pointer 'p': %d\n", *p);

    return (0);
}
