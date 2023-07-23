#include <stdio.h>

int main()
{
    char code;

    printf("Enter the error code (A-C): ");
    code = getchar();

    switch(code)
    {
    case 'A':
        puts("Driver Fault, not your fault.");
        break;
    case 'B':
        puts("Illegal format, call a lawyer.");
        break;
    case 'C':
        puts("Bad filename, spank it.");
        break;
    default:
        puts("That's not 1, 2 or 3");
    }
    return(0);
}