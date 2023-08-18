#include <stdio.h>

int main()
{
    int numbers[5];
    char string[] = "Does this string make me look fat?";

    printf("The string \"%s\" has a size of %u.\n", string, sizeof(string));
    return(0);
}