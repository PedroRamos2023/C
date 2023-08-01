#include <stdio.h>

void arrayinc(int array[3][3])
{
    for(int x = 0; x < 3; x++)
    {
        for(int y = 0; y < 3; y++)
        {
            array[x][y]++;
        }
    }
}

void showarray(int array[3][3])
{
    for(int x = 0; x < 3; x++)
    {
        for(int y = 0; y < 3; y++)
            printf("%d\t", array[x][y]);
        putchar('\n');
    }
}

int main()
{
    int n[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    puts("Array antes de ser incrementado:");
    showarray(n);
    arrayinc(n);
    puts("\nArray depois de ser incrementado:");
    showarray(n);
    return(0);
}