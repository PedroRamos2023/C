#include <stdio.h>
#include <math.h>

#define PI 3.14159
#define WAVELENGTH 70
#define PERIOD .1

int main()
{
    float graph, c, x;

    for(graph = 0; graph < 2 * PI; graph += PERIOD)
    {
        c = cos(graph);
        for(x = 0; x < c * WAVELENGTH; x++)
            putchar('*');
        putchar('\n');
    }
    return(0);
}