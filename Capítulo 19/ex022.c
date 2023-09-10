#include <stdio.h>
#include <string.h>

int main()
{
    char *fruit[] = {
        "apricot",
        "banana",
        "pineapple",
        "apple",
        "persimmon",
        "pear",
        "blueberry"
    };
    int x, y;

    for (x = 0; x < 6; x++)
    {
        for (y = x + 1; y < 7; y++)
        {
            if (strcmp(fruit[x], fruit[y]) > 0)
            {
                char *temp = fruit[x];
                fruit[x] = fruit[y];
                fruit[y] = temp;
            }
        }
    }

    for (x = 0; x < 7; x++)
    {
        printf("%s\n", fruit[x]);
    }

    return(0);
}