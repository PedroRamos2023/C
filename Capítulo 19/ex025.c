#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void create(int *arr);
void show(int *arr);

int main()
{
    int array[10];
    
    srand(time(NULL));
    
    create(array);
    printf("Generated array:\n");
    show(array);
    
    return(0);
}

void create(int *arr)
{
    for (int i = 0; i < 10; i++)
    {
        arr[i] = rand() % 10;
    }
}

void show(int *arr)
{
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}