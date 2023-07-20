#include <stdio.h>

int main()
{
    int a, b, c;

    printf("I'm waiting for three characters: ");
    a = getchar();
    getchar();
    b = getchar();
    getchar();
    c = getchar();
    getchar();
    printf("The three characters are '%c', '%c' and '%c'\n", a, b, c);
    return (0);
}
