#include <stdio.h>

int main(int argc, char *argv[])
{
    printf("You typed %d arguments.\n", argc);

    for(int i = 1; i < argc; i++)
    {
        printf("Argument %d is %s.\n", i, argv[i]);
    }
    return(0);
}