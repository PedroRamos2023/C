#include <stdio.h>
#include <ctype.h>

int main()
{
    char text[100];

    printf("Enter a text string: ");
    fgets(text, sizeof(text), stdin);

    for(int i = 0; text[i] != '\0'; i++)
    {
        if(isupper(text[i]))
        {
            text[i] = tolower(text[i]);
        } else if(islower(text[i]))
        {
            text[i] = toupper(text[i]);
        }
    }

    printf("%s", text);
    return(0);
}