#include <stdio.h>
#include <stdlib.h>

int main()
{
    float *temp;
    float kelvin;

    temp = (float *)malloc(sizeof(float) * 1);
    if(temp == NULL)
    {
        puts("Unable to allocate memory");
        exit(1);
    }

    printf("What is the temperature in degrees Celsius? ");
    scanf("%f", temp);

    kelvin = *temp + 273.15;

    printf("The temperature in Kelvin is %.2f.\n", kelvin);

    free(temp);

    return(0);
}