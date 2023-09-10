#include <stdio.h>

int main()
{
    char *sample = "From whence cometh my help?\n";
    char *original_sample = sample;

    while (putchar(*sample++))
        ;
    puts(original_sample);

    return(0);
}