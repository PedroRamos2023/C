#include <stdio.h>

int main()
{
    int a, b, larger;

    printf("Enter value A: ");
    scanf("%d", &a);
    printf("Enter different value B: ");
    scanf("%d", &b);

    if(a > b)
    {
        printf("Value A is larger.\n");
    }
    else
    {
        printf("Value B is larger.\n");
    }
    
    larger = (a > b) ? a : b;
    printf("Value %d is larger.\n", larger);
    return(0);
}