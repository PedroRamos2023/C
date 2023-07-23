#include <stdio.h>

int main()
{
    char answer;

    printf("Yes or no? Press \"Y\" or \"y\" for yes and \"N\" or \"n\" for no: ");
    answer = getchar();
    if(answer == 'Y' || answer == 'y')
    {
        puts("Yes");
    } else if(answer == 'N' || answer == 'n')
    {
        puts("No");
    }
    else
    {
        puts("What?");
    }
    return(0);
}