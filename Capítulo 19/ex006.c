#include <stdio.h>

int main()
{
    int array[5] = {2, 3, 5, 7, 11};
    int *pn = array;

    printf("'array' is at address %p\n", &array);
    printf("'array' is at address %p\n", array);

    for(int x = 0; x < 5; x++)
    {
        printf("Element %d at address %p has value %d\n", x + 1, pn, *pn);
        pn++;  // Move o ponteiro para o próximo elemento do array
    }

    return(0);
}
