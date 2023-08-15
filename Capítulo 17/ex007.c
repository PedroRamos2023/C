#include <stdio.h>
#include <ctype.h>

int main()
{
    char input[64];
    int x = 0;

    printf("Type in some text: ");
    fgets(input, 63, stdin);

    while (input[x] != '\n')
    {
        if (isalpha(input[x]))
        {
            putchar(toupper(input[x]));
        }
        else
        {
            putchar(input[x]);
        }
        x++;
    }
    putchar('\n');
    return 0;
}
