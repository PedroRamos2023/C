#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 40

int compare(const void *a, const void *b)
{
    return(*(int *)a - *(int *)b);
}

int main()
{
    int numbers[SIZE];
    int i;

    srand(time(NULL));

    for(i = 0; i < SIZE; i++)
    {
        numbers[i] = rand() % 100 + 1;
    }

    printf("Array original:\n");
    for(i = 0; i < SIZE; i++)
    {
        printf("%d ", numbers[i]);
    }
    putchar('\n');

    qsort(numbers, SIZE, sizeof(int), compare);

    printf("\nArray ordenado:\n");
    for(i = 0; i < SIZE; i++)
    {
        printf("%d ", numbers[i]);
    }
    putchar('\n');
    return(0);   
}