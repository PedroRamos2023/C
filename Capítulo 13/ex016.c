#include <stdio.h>

int main()
{
    char presidents[4][20] = {
        "George Washington",
        "John Adams",
        "Thomas Jefferson",
        "James Monroe"
    };

    printf("%-6s Washington\n", "George");
    printf("%-6s Adams\n", "John");
    printf("%s Jefferson\n", "Thomas");
    printf("%-6s Monroe\n", "James");
    return(0);
}