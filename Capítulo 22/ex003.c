#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fh;

    fh = fopen("hello.txt", "w");
    if(fh == NULL)
    {
        puts("Can't open that file!");
        exit(1);
    }
    fprintf(fh, "Look what I made!\n");
    fputs("My C program wrote this file.\n", fh);
    fclose(fh);
    return(0);
}