#include <stdio.h>
#include <string.h>

int main()
{
    struct name
    {
        char first[20];
        char last[25];
    };
    
    struct date
    {
        int month;
        int day;
        int year;
    };

    struct human
    {
        struct name id;
        struct date birthday;
    };

    struct human president;

    strcpy(president.id.first, "George");
    strcpy(president.id.last, "Washington");
    president.birthday.month = 2;
    president.birthday.day = 22;
    president.birthday.year = 1732;

    printf("%s %s was born on %d/%d/%d\n", president.id.first, president.id.last, president.birthday.month, president.birthday.day, president.birthday.year);
    return(0);
}