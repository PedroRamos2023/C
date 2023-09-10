#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char *input;
    char *copy;

    input = (char *)malloc(sizeof(char) * 1024);
    if(input == NULL)
    {
        puts("Unable to allocate buffer! Oh no!");
        exit(1);
    }

    puts("Type something long and boring: ");
    fgets(input, 1023, stdin);

    size_t len = strlen(input);
    if(len > 0 && input[len - 1] == '\n')
    {
        input[len - 1] = '\0';
    }

    copy = (char *)malloc(sizeof(char) * (len + 1));
    if(copy == NULL)
    {
        puts("Unable to allocate buffer! Oh no!");
        free(input);
        exit(1);
    }

    strcpy(copy, input);

    puts("You wrote: ");
    printf("\"%s\"\n", copy);

    free(input);
    free(copy);
    
    return(0);
}