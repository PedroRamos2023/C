#include <stdio.h>

#define TRUE 1
#define FALSE 0

int verify(int value);
void limit(int stop);

int main()
{
    int s;

    printf("Enter a stopping value (1-100): ");
    scanf("%d", &s);

    if (verify(s))
    {
        limit(s);
    }
    else
    {
        printf("Error: Value must be between 1 and 100.\n");
    }

    return (0);
}

int verify(int value)
{
    return (value >= 1 && value <= 100) ? TRUE : FALSE;
}

void limit(int stop)
{
    int x;

    for (x = 0; x <= 100; x = x + 1)
    {
        printf("%d ", x);
        if (x == stop)
        {
            puts("You won!");
            return;
        }
    }
    puts("I won!");
}