#include <stdio.h>

void graph(int count);

int main()
{
    int value;

    value = 2;
    while(value <= 64)
    {
        graph(64); // Chama a função graph() com o valor constante 64
        printf("Value is %d\n", 64);
        value = value * 2;
    }
     return (0);
}

void graph(int count) 
{
    int x;

    for (x = 0; x < count; x = x + 1)
        putchar('*');
    putchar('\n');
}