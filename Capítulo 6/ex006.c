#include <stdio.h>

#define GLORKUS 16

int main()
{
    int blorf;

    blorf = 22;

    printf("The value of blorf is %d.\n", blorf);
    printf("The value of blorf plus 16 is %d.\n", blorf + GLORKUS);
    printf("The value of blorf times itself is %d.\n", blorf*blorf);
    return(0);
}