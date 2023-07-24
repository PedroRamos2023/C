#include <stdio.h>

void prompt();      /* protótipo da função */
void busy();        /* protótipo da função que contém o loop while */

int main()
{
    busy();
    return (0);
}

/* Exibe um prompt */
void prompt()
{
    printf("C:\\DOS> ");
}

/* Loop while em sua própria função */
void busy()
{
    int loop;
    char input[32];

    loop = 0;
    while (loop < 5)
    {
        prompt();
        fgets(input, 31, stdin);
        loop = loop + 1;
    }
}