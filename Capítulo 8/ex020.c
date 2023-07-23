#include <stdio.h>
#include <ctype.h>

int main()
{
    char code;

    printf("Enter the error code (A-C): ");
    code = getchar();

    if(code >= 'A' && code <= 'C')
    {
        code = tolower(code);
    }
    
    switch(code)
    {
    case 'a':
        puts("Driver Fault, not your fault.");
        break;
    case 'b':
        puts("Illegal format, call a lawyer.");
        break;
    case 'c':
        puts("Bad filename, spank it.");
        break;
    default:
        puts("That's not 1, 2 or 3");
    }
    return(0);
}