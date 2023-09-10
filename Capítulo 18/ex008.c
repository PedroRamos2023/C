#include <stdio.h>

int main()
{
    char charArray[] = {'A', 'B', 'C', 'D', 'E'};
    int i;

    for (i = 0; i < 5; i++) {
        printf("Element %d: Value = %c, Address = %p\n", i, charArray[i], &charArray[i]);
    }
    return(0);
}