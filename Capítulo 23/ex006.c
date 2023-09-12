#include <stdio.h>
#include <unistd.h>
#include <sys/stat.h>
#include <errno.h>
#include <string.h>

int main()
{
    char curdir[255];

    getcwd(curdir, 255);
    printf("Current directory is %s\n", curdir);

    if(mkdir("very_temporary") == -1)
    {
        if(errno == EEXIST)
        {
            printf("Directory 'very_temporary' already exists.\n");
        } else {
            perror("Error creating directory");
            return(1);
        }
    } else {
        puts("New directory created.");
    }

    if(chdir("very_temporary") == -1)
    {
        perror("Error changing directory");
        return(1);
    }

    getcwd(curdir, 255);
    printf("Current directory is %s\n", curdir);

    return(0);
}