#include <stdio.h>

#define value 3

int main()
{
    char name[value];

    printf("Who are you? ");
    fgets(name, 3, stdin);
    printf("Glad to meet you, %s.\n", name);
    return (0);
}