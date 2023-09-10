#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *array = (int *)malloc(sizeof(int) * 3);
    if(array == NULL)
    {
        printf("Unable to allocate memory");
        exit(1);
    }
    
    array[0] = 100;
    array[1] = 200;
    array[2] = 300;

    printf("Values in array: %d, %d, %d\n", array[0], array[1], array[2]);

    free(array);

    return(0);
}